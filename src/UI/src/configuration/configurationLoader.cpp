#include "configurationLoader.h"
#include <json.hpp>

// for convenience
using json = nlohmann::json;


bool configurationLoader::loadScreenSetConfiguration(Configuration* conf){
    std::ifstream i("configuration.json");
    json j;
    j<<i;

    
    
    return true;
}