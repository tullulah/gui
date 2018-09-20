#include "UISplash.h"

void UISplash::buildLayout(){
    windowSurface = SDL_GetWindowSurface(window);
    imageSurface = SDL_LoadBMP(image.c_str());
    
    if(!imageSurface)
    {
        cout<< "logo image not loaded: " << SDL_GetError() << endl;
    }
}

UISplash::UISplash(SDL_Window *w, string i){
    image=i;
    window = w;
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
