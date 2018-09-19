#include "components/UIScreen.h"
#include <vector>
#include <array>

#ifndef CONFIGURATION
#define CONFIGURATION

class Configuration{
    public:
        Configuration();
        ~Configuration();

        std::vector<UIScreen> *screenSet;
};

#endif