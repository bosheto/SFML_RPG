#include "tile.h"

 Tile::Tile(int id, int spriteX, int spriteY){
    Tile::textureX = spriteX;
    Tile::textureY = spriteY;
    Tile::id = id;
}   
  
sf::IntRect Tile::getSpriteRect(){
    return sf::IntRect(Tile::textureX * SPRITE_SIZE,
        Tile::textureY * SPRITE_SIZE, SPRITE_SIZE, SPRITE_SIZE);
}
