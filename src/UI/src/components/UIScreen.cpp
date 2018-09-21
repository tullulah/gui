#include "UIScreen.h"

UIScreen::UIScreen(){
    mainScreen = false;
}

UIScreen::~UIScreen(){
    
}

void UIScreen::update(SDL_Renderer *renderer) {
   for(std::vector<UIComponent>::iterator it = componentList.begin(); it != componentList.end(); ++it) {
       std::cout<< (*it).type <<std::endl;
   }  
}

void UIScreen::clean(SDL_Renderer *renderer) {
    //renderer->clean();
}

void UIScreen::render(SDL_Renderer *renderer) {
    //renderer->render();
}
