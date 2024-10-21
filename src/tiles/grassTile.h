#pragma once 
#include "tile.h"

class GrassTile : public Tile {
    public:
    GrassTile(int x, int y) : Tile(0, 0){setPosition(x,y);}
};