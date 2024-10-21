#pragma once
#include "globals.h"

struct position
{
    int x;
    int y;
};

position getScreenPosition(position worldPos);

