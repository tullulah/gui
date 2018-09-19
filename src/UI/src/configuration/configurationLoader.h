#include <iostream>
#include <fstream>
#include "../configuration.h"

#ifndef CONFIGURATION_LOADER
#define CONFIGURATION_LOADER

using namespace std;

class configurationLoader{
    public:
        bool loadScreenSetConfiguration(Configuration* conf);

};

#endif // CONFIGURATION_LOADER