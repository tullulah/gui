#include <map>
#include <vector>
#include "UIScreen.h"

#ifndef VIEW_MANAGER
#define VIEW_MANAGER


/*class to control the workflow of the screens*/

class viewManager{
    public:
        viewManager (std::vector<UIScreen> *screenSet);

        void updateCurrentScreen();
        void renderCurrentScreen();
        void cleanCurrentScreen();

    private:
        std::vector<UIScreen> *screenSet;
        UIScreen * currentScreen;

};

#endif