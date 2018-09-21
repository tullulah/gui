#include "ViewManager.h"

ViewManager::ViewManager(Configuration *configuration){
    screenSet = &configuration->screenSet;
}

void ViewManager::cleanCurrentScreen(SDL_Renderer *renderer){
    if(currentScreen)
    {
        currentScreen->clean(renderer);
    }
}

void ViewManager::updateCurrentScreen(SDL_Renderer *renderer){
    if(currentScreen)
    {
        currentScreen->update(renderer);
    }
}

void ViewManager::renderCurrentScreen(SDL_Renderer *renderer){
    if(currentScreen)
    {
        currentScreen->render(renderer);
    }
}

void ViewManager::setCurrentScreen(UIScreen *screen){
    currentScreen = screen;
}