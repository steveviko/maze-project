#include "Game.h"

int main(int argc, char* args[])
{
    Game game;
    game.run();
    return 0;
}

Game.h:
#pragma once
#include <SDL.h>

class Game
{
public:
    Game();
    ~Game();
    void run();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
};
