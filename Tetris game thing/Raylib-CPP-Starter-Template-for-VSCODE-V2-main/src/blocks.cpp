#include "block.h"
#include "position.h"

class LBlock :public Block
{
    LBlock(){
        id = 1;
        cells[0] = {Position(0, 2), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 1), Position(2, 1), Position(2, 2)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(2, 1)};
    }
};

class JBlock :public Block
{
    JBlock(){
        id = 2;
        cells[0] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(0, 2), Position(1, 1), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 2)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2, 0), Position(2, 1)};
    }
};

class IBlock :public Block
{
    IBlock(){
        id = 3;
        cells[0] = {Position(0, 0), Position(1, 0), Position(2, 0), Position(3, 0)};
        cells[1] = {Position(0, 0), Position(0, 1), Position(0, 2), Position(0, 3)};
        cells[2] = {Position(0, 0), Position(1, 0), Position(2, 0), Position(3, 0)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(0, 2), Position(0, 3)};
        Move(-1, 3);
    }
}

class OBlock :public Block
{
    OBlock(){
        id = 4;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[1] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[2] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        cells[3] = {Position(0, 0), Position(0, 1), Position(1, 0), Position(1, 1)};
        Move(0,4);
    }
}

class SBlock :public Block
{
    SBlock(){
        id = 5;
        cells[0] = {Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1)};
        cells[1] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1)};
        cells[2] = {Position(0, 1), Position(0, 2), Position(1, 0), Position(1, 1)};
        cells[3] = {Position(0, 0), Position(1, 0), Position(1, 1), Position(2, 1)};
        Move(0, 3);
    }
}

class TBlock :public Block
{
    TBlock(){
        id = 6;
        cells[0] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1)};
        cells[2] = {Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 1)};
        cells[3] = {Position(0, 1), Position(1, 1), Position(2, 0), Position(2, 1)};
        Move(0, 3);
    }
}

class ZBlock :public Block
{
    ZBlock(){
        id = 7;
        cells[0] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2)};
        cells[1] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0)};
        cells[2] = {Position(0, 0), Position(0, 1), Position(1, 1), Position(1, 2)};
        cells[3] = {Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 0)};
        Move(0, 3);
    }
}