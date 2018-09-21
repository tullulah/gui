#include "mainApp.h"


mainApp::mainApp() {
    
}

void mainApp::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {
    cout<< "Creating window with height " << height<<", width " << width<< ", title "<< title <<", at xpos " << xpos << ", ypos " << ypos<< " and fullscreen " << fullscreen <<endl;

    int flags = 0;
    if(fullscreen){
        flags &= SDL_WINDOW_FULLSCREEN;
    }

    flags &= SDL_WINDOW_ALLOW_HIGHDPI;

    if(SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "Subsystems initialized..." << endl;

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        
        if(window)
        {
            cout<< "Window Created!!" << endl;
        }

        windowSurface = SDL_GetWindowSurface(window);

        renderer = SDL_CreateRenderer(window, -1, 0);

        if(renderer){
            SDL_SetRenderDrawColor(renderer, 255,255,255,255);
            cout<< "Renderer Created!!" << endl;
        }
        isRunning = true;
    } else {
        isRunning = false;
    }

    configurationLoader *conf = new configurationLoader();
    configuration = new Configuration();
    
    screenSet = configuration->screenSet;

    if(!conf->loadScreenSetConfiguration(window, &screenSet))
    {
        cout<< "Error reading configuration file" <<endl;
    }
    
    viewManager = new ViewManager(configuration);

    for(vector<UIScreen*>::iterator iter = screenSet.begin(); iter!= screenSet.end(); ++iter){
        cout << (*iter)->mainScreen << endl;
        if((*iter)->mainScreen)
        {
            viewManager->setCurrentScreen((*iter));
        }
    }    

}

void mainApp::handleEvents(){
    SDL_Event event;
    SDL_PollEvent(&event);

    switch(event.type){
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}

void mainApp::render(){
    SDL_RenderClear(renderer);
    
    // add stuff to renderer
    viewManager->cleanCurrentScreen(renderer);
    viewManager->updateCurrentScreen(renderer);
    viewManager->renderCurrentScreen(renderer);

    SDL_RenderPresent(renderer);

}

void mainApp::clean(){
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();

    cout << "Application cleaned" <<endl;
}

void mainApp::update(){

}

mainApp::~mainApp() {

}

bool mainApp::running(){
    return isRunning;
}
