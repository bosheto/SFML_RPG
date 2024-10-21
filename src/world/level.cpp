#include "level.h"

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
            Tile tile = GrassTile();
            row.push_back(tile);
        }
        tiles.push_back(row);
    }
}

void Level::draw(sf::RenderWindow& window){
    for(int y = 0; y < sizeY; y++){
        for (int x = 0; x < sizeX; x++)
        {
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

void Level::update(){

}