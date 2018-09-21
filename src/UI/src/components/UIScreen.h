#include "../UIComponent.h"
#include <iostream>
#include <vector>
#include <SDL2/SDL.h>

#ifndef UI_SCREEN
#define UI_SCREEN

class UIScreen : public UIComponent{
    public:
        UIScreen();
        ~UIScreen();

        std::vector<UIComponent> componentList;
        
        // polymorfism
        virtual void update(SDL_Renderer *renderer);
        virtual void render(SDL_Renderer *renderer);
        virtual void clean(SDL_Renderer *renderer);

        bool mainScreen;
    private:
        
        
};

#endif // UI_SCREEN