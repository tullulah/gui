#include <iostream>
#include "../mainApp.h"
#include "../UIComponent.h"
#include <SDL2/SDL.h>

using namespace std;

class UISplash : public UIComponent{
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
        mainApp *app;
        SDL_Surface * imageSurface;
        SDL_Surface * windowSurface;
};