#pragma once
#include "tile.h"

class DirtTile : public Tile {
    public:
    DirtTile(int x, int y) : Tile(2,0){setPosition(x,y);}
};