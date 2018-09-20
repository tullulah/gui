#include "configurationLoader.h"
#include <json.hpp>


// for convenience
using json = nlohmann::json;

configurationLoader::configurationLoader(){

}

bool configurationLoader::loadScreenSetConfiguration(SDL_Window *window, vector<UIScreen*> *screenSet){
        
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
            string image = o["image-src"];
            UISplash *splash = new UISplash(window, image);

            //cout << "Current vector size:" << screenSet->size();
            
            screenSet->insert(screenSet->begin(), new UIScreen());
            screenSet->push_back(splash);
        }
                
        if(o["components"].is_array()){
            cout << "is array!" << endl;
        }  
    }
        
    return true;
}