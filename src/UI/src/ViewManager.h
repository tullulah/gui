#include <map>
#include <vector>
#include "components/UIScreen.h"
#include "configuration.h"
#include <SDL2/SDL.h>

#ifndef VIEW_MANAGER
#define VIEW_MANAGER


/*class to control the workflow of the screens*/

class ViewManager{
    public:
        ViewManager (Configuration *configuration);

        void updateCurrentScreen(SDL_Renderer *renderer);
        void renderCurrentScreen(SDL_Renderer * renderer);
        void cleanCurrentScreen(SDL_Renderer *renderer);

        void setCurrentScreen(UIScreen *screen);

    private:
        std::vector<UIScreen*> *screenSet;
        UIScreen * currentScreen;
};

#endif