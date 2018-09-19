#include "../UIComponent.h"
#include <iostream>
#include <vector>

#ifndef UI_SCREEN
#define UI_SCREEN

class UIScreen : UIComponent{
    public:
        std::vector<UIComponent> componentList;
    private:
        
};

#endif // UI_SCREEN