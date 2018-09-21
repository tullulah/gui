#include "UISplash.h"

void UISplash::buildLayout(){
    windowSurface = SDL_GetWindowSurface(window);
    imageSurface = SDL_LoadBMP(image.c_str());
    
    if(!imageSurface)
    {
        cout<< "logo image not loaded: " << SDL_GetError() << endl;
    }

    if(!windowSurface)
    {
        cout<< "window surface not loaded: " << SDL_GetError() << endl;
    }

    SDL_BlitSurface(imageSurface, NULL, windowSurface, NULL);
}

UISplash::UISplash(SDL_Window *_window, string _image, int _splashTime, string _nextScreen, string _name, string _type, string _background_image, string _background_color){
    image=_image;
    window = _window;
    splashTime = splashTime;
    nextScreen = _nextScreen;
    name = _name;
    type = _type;
    background_image = _background_image;
    background_color = _background_color;
}

UISplash::~UISplash(){
    SDL_FreeSurface(imageSurface);
    imageSurface = NULL;
}

void UISplash::update(SDL_Renderer *renderer) {
    buildLayout();
}

void UISplash::clean(SDL_Renderer *renderer) {
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 0,255,255,255);
}

void UISplash::render(SDL_Renderer *renderer) {
    SDL_UpdateWindowSurface(window);
}
