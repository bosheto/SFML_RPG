#pragma once
#include "globals.h"
#include <math.h>


struct position
{
    int x;
    int y;
};

position getScreenPosition(position worldPos);
position getWorldPosition(sf::Vector2i screenPos);
