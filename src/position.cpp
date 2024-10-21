#include "position.h"

position getScreenPosition(position worldPos){
    position screenPos;
    screenPos.x = worldPos.x * SPRITE_SIZE;
    screenPos.y = worldPos.y * SPRITE_SIZE;
    return screenPos;
};