#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include "../configuration.h"
#include "../components/UIScreen.h"
#include "../components/UIImage.h"
#include "../components/UISplash.h"

#ifndef CONFIGURATION_LOADER
#define CONFIGURATION_LOADER

using namespace std;

class configurationLoader{
    public:
        configurationLoader();
        ~configurationLoader();
        bool loadScreenSetConfiguration(SDL_Window *window, vector<UIScreen*> *screenSet);

};

#endif // CONFIGURATION_LOADER