#include <iostream>
#include <fstream>
#include <map>
#include "../configuration.h"
#include "../components/UIScreen.h"
#include "../components/UIImage.h"



#ifndef CONFIGURATION_LOADER
#define CONFIGURATION_LOADER

using namespace std;

class configurationLoader{
    public:
        configurationLoader();
        ~configurationLoader();
        bool loadScreenSetConfiguration(Configuration* conf);

};

#endif // CONFIGURATION_LOADER