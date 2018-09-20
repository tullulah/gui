#include "configurationLoader.h"
#include <json.hpp>


// for convenience
using json = nlohmann::json;

configurationLoader::configurationLoader(){

}

bool configurationLoader::loadScreenSetConfiguration(Configuration* conf){
        
    std::ifstream i("configuration.json");
    json j;
    j<<i;
     
    // iterate throug the parent windows array
    for (json::iterator it = j.begin(); it != j.end(); ++it) {
        json o = json::parse(it.value().dump());
        
        /*common properties*/
        string name = o["name"];
        string type = o["type"];
        string background_image = o["background-image"];
        string background_color = o["background-color"];
        
        if(type == "UISplash")
        {
            
        }
        
        
        if(o["components"].is_array()){
            cout << "is array!" << endl;
        }  
    }

    
    
    return true;
}