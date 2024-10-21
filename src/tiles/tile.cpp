#include "tile.h"

 Tile::Tile(int spriteX, int spriteY){
    Tile::texture = SPRITE_SHEET;
    Tile::textureX = spriteX;
    Tile::textureY = spriteY;
    Tile::sprite.setTexture(Tile::texture);
    Tile::sprite.setTextureRect(sf::IntRect(Tile::textureX * SPRITE_SIZE,
    Tile::textureY * SPRITE_SIZE, SPRITE_SIZE, SPRITE_SIZE));
   
   Tile::sprite.setPosition(0,0);
}

void Tile::draw(sf::RenderWindow& window){
    window.draw(Tile::sprite);
}

sf::IntRect Tile::getSpriteRect(){
    return sf::IntRect(Tile::textureX * SPRITE_SIZE,
        Tile::textureY * SPRITE_SIZE, SPRITE_SIZE, SPRITE_SIZE);
}

void Tile::setPosition(int x, int y){
    Tile::pos.x = x;
    Tile::pos.y = y;
    position screenPos = getScreenPosition(Tile::pos);
    Tile::sprite.setPosition(screenPos.x, screenPos.y);
}