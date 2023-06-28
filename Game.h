#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <vector>

class Game
{
public:
    Game();
    ~Game();

    void run();

private:
    void handleInput();
    void update();
    void draw();

    SDL_Window* window;
    SDL_Renderer* renderer;

    float playerX;
    float playerY;
    float playerDir;
    float playerSpeed;

    std::vector<std::vector<int>> map;
};

#endif
