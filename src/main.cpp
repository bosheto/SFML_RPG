#include <vector>
#include <iostream>

#include <SFML/Graphics.hpp> 
#include <SFML/Graphics/Texture.hpp>

#include "globals.h"
#include "tiles/tiles.h"
#include "world/level.h"

sf::Texture SPRITE_SHEET;

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
    
    Level level("test", 16, 16, "assets/SpriteSheet.png");    

    while (window.isOpen()) {
        sf::Event event;     
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            
             if (event.type == sf::Event::MouseButtonPressed) {
                // Get the mouse position relative to the window
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                position t = getWorldPosition(mousePos);
                // Display the mouse position when clicked
                std::cout << "Mouse clicked at: (" << t.x << ", " << t.y << ")" << std::endl;
            }
        }


        window.clear();
        level.draw(window);        
        window.display();
    }

    return 0;
}


