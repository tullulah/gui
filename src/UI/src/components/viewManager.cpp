#include "viewManager.h"

viewManager::viewManager(std::vector<UIScreen> *s){
    screenSet = s;
}

void viewManager::cleanCurrentScreen(){
    if(currentScreen)
    {
        currentScreen->clean();
    }
}

void viewManager::renderCurrentScreen(){
    if(currentScreen)
    {
        currentScreen->render();
    }
}

void viewManager::updateCurrentScreen(){
    if(currentScreen)
    {
        currentScreen->update();
    }
}