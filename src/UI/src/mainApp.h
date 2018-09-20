#ifndef MAINAPP_H
#define MAINAPP_H

#include "SDL2/SDL.h"
#include <iostream>
#include <vector>
#include "configuration.h"
#include "configuration/configurationLoader.h"
#include "components/UIScreen.h"

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

        SDL_Window *window;
        SDL_Renderer *renderer;

        SDL_Surface *windowSurface;

        std::vector<UIScreen> screenSet;

    private:
        bool isRunning;
        
        Configuration *configuration;
};

#endif // MAINAPP_H