#pragma once

#include <SFML/Graphics.hpp> 
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "string.h"
#include "../globals.h"
#include "../position.h"

class Tile{
    private:
        int textureX;
        int textureY;
        int id;
    public:
        Tile(int id, int spriteX, int spriteY);
        sf::IntRect getSpriteRect();
        int getId() {return id;};
};
