#include "tetristype.h"


static const char blockType[BLOCK_KIND][4][5][5] = {
    //square
    {
    {{0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0},
     {0, 1, 2, 0, 0},
     {0, 2, 2, 0, 0},
     {0, 0, 0, 0, 0}},

    {{0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0},
     {0, 1, 2, 0, 0},
     {0, 2, 2, 0, 0},
     {0, 0, 0, 0, 0}},

    {{0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0},
     {0, 1, 2, 0, 0},
     {0, 2, 2, 0, 0},
     {0, 0, 0, 0, 0}},

    {{0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0},
     {0, 1, 2, 0, 0},
     {0, 2, 2, 0, 0},
     {0, 0, 0, 0, 0}},          
    },
    //L
    {
    {{0, 0, 0, 0, 0},
     {0, 2, 0, 0, 0},
     {0, 1, 0, 0, 0},
     {0, 2, 2, 0, 0},
     {0, 0, 0, 0, 0}},

    {{0, 0, 0, 0, 0},
     {0, 0, 2, 0, 0},
     {2, 1, 2, 0, 0},
     {0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0}},

    {{0, 0, 0, 0, 0},
     {2, 2, 0, 0, 0},
     {0, 1, 0, 0, 0},
     {0, 2, 0, 0, 0},
     {0, 0, 0, 0, 0}},

    {{0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0},
     {2, 1, 2, 0, 0},
     {2, 0, 0, 0, 0},
     {0, 0, 0, 0, 0}} 
    }
};

int TetrisType::getBlockType(int kind, int rotation, int row, int column) {
    return (int)blockType[kind][rotation][row][column];
}