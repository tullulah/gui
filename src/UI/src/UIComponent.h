#include <iostream>
#include <SDL2/SDL.h>


using namespace std;

#ifndef UI_COMPONENT
#define UI_COMPONENT
class UIComponent{
    public:
        UIComponent();
        ~UIComponent();

        virtual void update(SDL_Renderer *renderer);
        virtual void render(SDL_Renderer *renderer);
        virtual void clean(SDL_Renderer *renderer);

        string name ,type, background_image, background_color;

    private:
        
    protected:

    
};
#endif // UI_COMPONENT