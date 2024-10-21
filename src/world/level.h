#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <optional>

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "../Tiles/tiles.h"


class Level{
    private:
        std::string levelName;
        std::string levelTextureName;
        sf::Texture levelTexture;
        int sizeX;
        int sizeY;
        std::vector<std::vector<Tile>> tiles;

    public:
        Level(std::string levelName, int sizeX, int sizeY, std::string levelTextureName);
        void draw(sf::RenderWindow& window);
        void update();
        void setTile(position pos, Tile tile);
        Tile getTile(position pos);
        int getSizeX(){return sizeX;};
        int getSizeY(){return sizeY;};

    private:
        void init();
};
