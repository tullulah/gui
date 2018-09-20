#include "UISplash.h"

void UISplash::buildLayout(){
    app->windowSurface = SDL_GetWindowSurface(app->window);
    imageSurface = SDL_LoadBMP(".././../logo.bmp");
    
    if(!imageSurface)
    {
        cout<< "logo image not loaded: " << SDL_GetError() << endl;
    }
}

UISplash::UISplash(SDL_Window *w, string i){
    image=i;
    

    buildLayout();
}

UISplash::~UISplash(){

}

void UISplash::update() {
    cout << "implementation of uptate in UISplash" <<endl;
}

void UISplash::clean() {
    cout << "implementation of clean in UISplash" <<endl;
}

void UISplash::render() {
    cout << "implementation of render in UISplash" <<endl;
}
