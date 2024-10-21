#pragma once
#include "tile.h"

class WaterTile : public Tile {
    public:
    WaterTile(int x, int y) : Tile(4,0){setPosition(x,y);}
};