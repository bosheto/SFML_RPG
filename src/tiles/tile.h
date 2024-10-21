#pragma once

#include <SFML/Graphics.hpp> 
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "string.h"
#include "../globals.h"
#include "../position.h"

class Tile{
    private:
        sf::Texture texture;
        sf::Sprite sprite;

        int textureX;
        int textureY;
        position pos;

    public:
        Tile(int spriteX, int spriteY);
        void draw(sf::RenderWindow& window);
        void setPosition(int x, int y);
        position getPosition() {return pos;};
};
