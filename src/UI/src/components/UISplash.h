#include <iostream>
#include "UIScreen.h"
#include <SDL2/SDL.h>

using namespace std;

#ifndef UI_SPLASH
#define UI_SPLASH

class UISplash : public UIScreen {
    public:
        UISplash(SDL_Window *_window, string _image, int _splashTime, string _nextScreen, string _name, string _type, string _background_image, string _background_color);
        ~ UISplash();

        // polymorfism
        void update(SDL_Renderer *renderer);
        void render(SDL_Renderer *renderer);
        void clean(SDL_Renderer *renderer);

    private:
        void buildLayout();
        int elapsedTime;
        int splashTime;
        string nextScreen;
        bool fadeOut;
        string image;
        SDL_Surface * imageSurface;
        SDL_Surface * windowSurface;
        SDL_Window * window;
};

#endif