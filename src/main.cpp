#include <SFML/Graphics.hpp> 
#include <SFML/Graphics/Texture.hpp>
#include <vector>
#include "globals.h"
#include "tiles/tiles.h"

sf::Texture SPRITE_SHEET;


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
    
    if(!SPRITE_SHEET.loadFromFile("assets/SpriteSheet.png"))
        return 1;

    std::vector<Tile> tiles;
    SandTile tile1(0, 0);
    DirtTile tile2(3, 0);
    tiles.push_back(tile1);
    tiles.push_back(tile2);
    
    while (window.isOpen()) {
        sf::Event event;     
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        for (auto& tile : tiles) {
            tile.draw(window);  // Draw each tile in the vector
        }
        
        window.display();
    }

    return 0;
}


