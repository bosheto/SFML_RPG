#pragma once
#include "tile.h"

class StoneTile : public Tile {
    public:
    StoneTile(int x, int y) : Tile(3,0){setPosition(x,y);}
};