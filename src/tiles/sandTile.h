#pragma once
#include "tile.h"

class SandTile : public Tile {
    public:
    SandTile(int x, int y) : Tile(1,0){setPosition(x,y);}
};