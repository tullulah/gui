#include <iostream>
#include "../../UI/src/mainApp.h"
#include "../../UI/src/UIComponent.h"

using namespace std;

mainApp* app = nullptr;
bool running = true;

void AppLoop(){
    while(app->running()){
        app->handleEvents();
        app->update();
        app->render();
    }

    app->clean();
}

int main(){
    app = new mainApp();

    app->init("UI Testing App", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1024, 768, false);

    cout << "Hola caracola" << endl;

    AppLoop();

    return 0;
}
