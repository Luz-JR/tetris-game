#include <raylib.h>
#include "game.h"

int main() 
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    LBlock block = LBlock();
    block.Move(4,3);

    while(WindowShouldClose()== false)
    {
        game.HandleInput();
        BeginDrawing();
        ClearBackground(darkBlue);
        EndDrawing();
    }
   CloseWindow();
}