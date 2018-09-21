#include "UIComponent.h"

UIComponent::UIComponent(){

}

UIComponent::~UIComponent(){
    
}

void UIComponent::update(SDL_Renderer *renderer){
    cout<< "update not implemented" << endl;
}
void UIComponent::render(SDL_Renderer *renderer){
    cout<< "render not implemented" << endl;
}
void UIComponent::clean(SDL_Renderer *renderer){
    cout<< "clean not implemented" << endl;
}
