#include "position.h"

position getScreenPosition(position worldPos){
    position screenPos;
    screenPos.x = worldPos.x * SPRITE_SIZE;
    screenPos.y = worldPos.y * SPRITE_SIZE;
    return screenPos;
};

position getWorldPosition(sf::Vector2i screenPos){
    position worldPos;
    worldPos.x = std::round(screenPos.x / SPRITE_SIZE);
    worldPos.y = std::round(screenPos.y / SPRITE_SIZE);
    return worldPos;
}