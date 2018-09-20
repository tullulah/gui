#include "../UIComponent.h"
#include <iostream>
#include <vector>

#ifndef UI_SCREEN
#define UI_SCREEN

class UIScreen : UIComponent{
    public:
        UIScreen();
        ~UIScreen();
        
        std::vector<UIComponent> componentList;

        // polymorfism
        void update();
        void render();
        void clean();
    private:
        
};

#endif // UI_SCREEN