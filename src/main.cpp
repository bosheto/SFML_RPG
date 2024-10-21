#include <SFML/Graphics.hpp> 
#include <SFML/Graphics/Texture.hpp>
#include "iostream"
#include "tiles/tile.h"
#include "globals.h"
#include "tiles/tiles.h"

sf::Texture SPRITE_SHEET;


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
    

    if(!SPRITE_SHEET.loadFromFile("assets/SpriteSheet.png"))
        return 1;

    Tile tile1(0, 0);
    GrassTile tile2(3, 0);
    
    while (window.isOpen()) {
        sf::Event event;     
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        tile1.draw(window);
        tile2.draw(window);
        window.display();
    }

    return 0;
}


