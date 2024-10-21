#include "level.h"
#include <iostream>
Level::Level(std::string name, int sizeX, int sizeY, std::string levelTextureName){
    Level::levelName = name;
    Level::sizeX = sizeX;
    Level::sizeY = sizeY;
    Level::levelTextureName = levelTextureName;
    Level::levelTexture;
    Level::init();
    std::vector<std::vector<Tile>> tiles;
}

void Level::init(){
    if(!levelTexture.loadFromFile(levelTextureName)){
        std::cout << "Error loading " << levelTextureName << std::endl;
    }

    for(int y = 0; y < sizeY; y++){
        std::vector<Tile> row;
        for (int x = 0; x < sizeX; x++)
        {
            /* code */
            Tile tile = AirTile();
            row.push_back(tile);
        }
        tiles.push_back(row);
    }

    tiles[3][3] = GrassTile();  
}

void Level::draw(sf::RenderWindow& window){
    for(int y = 0; y < sizeY; y++){
        for (int x = 0; x < sizeX; x++)
        {
            if(tiles[y][x].getId() == 0){
                continue;
            }
            sf::Sprite sprite;
            sprite.setTexture(levelTexture);
            sprite.setTextureRect(tiles[y][x].getSpriteRect());
            position spritePosition;
            spritePosition.x = x;
            spritePosition.y = y;
            position screenPosition = getScreenPosition(spritePosition);
            sprite.setPosition(screenPosition.x, screenPosition.y);
            window.draw(sprite);            
        }
    }
}

Tile Level::getTile(position pos){
    return tiles[pos.y][pos.x];
}

void Level::setTile(position pos, Tile tile){
    tiles[pos.y][pos.x] = tile;
}

void Level::update(){

}