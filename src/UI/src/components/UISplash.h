#include <iostream>
#include "UIScreen.h"
#include <SDL2/SDL.h>

using namespace std;

#ifndef UI_SPLASH
#define UI_SPLASH

class UISplash : public UIScreen {
    public:
        UISplash(SDL_Window *w, string i);
        ~ UISplash();

        // polymorfism
        void update();
        void render();
        void clean();

    private:
        void buildLayout();
        int elapsedTime;
        int timeToClose;
        bool fadeOut;
        string image;
        SDL_Surface * imageSurface;
        SDL_Surface * windowSurface;
        SDL_Window * window;
};

#endif