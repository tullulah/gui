#include "ViewManager.h"

ViewManager::ViewManager(Configuration *configuration){
    screenSet = &configuration->screenSet;
}

void ViewManager::cleanCurrentScreen(){
    if(currentScreen)
    {
        currentScreen->clean();
    }
}

void ViewManager::renderCurrentScreen(){
    if(currentScreen)
    {
        currentScreen->render();
    }
}

void ViewManager::updateCurrentScreen(){
    if(currentScreen)
    {
        currentScreen->update();
    }
}
