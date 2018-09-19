#ifndef MAINAPP_H
#define MAINAPP_H

#include "SDL2/SDL.h"
#include <iostream>
using namespace std;

class mainApp{
    public:
        mainApp();
        ~mainApp();

        void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

        void handleEvents();
        void update();
        void render();
        void clean();

        bool running();

    private:
        bool isRunning;
        SDL_Window *window;
        SDL_Renderer * renderer;
};

#endif // MAINAPP_H