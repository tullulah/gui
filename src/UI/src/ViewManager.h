#include <map>
#include <vector>
#include "components/UIScreen.h"
#include "configuration.h"

#ifndef VIEW_MANAGER
#define VIEW_MANAGER


/*class to control the workflow of the screens*/

class ViewManager{
    public:
        ViewManager (Configuration *configuration);

        void updateCurrentScreen();
        void renderCurrentScreen();
        void cleanCurrentScreen();

    private:
        std::vector<UIScreen*> *screenSet;
        UIScreen * currentScreen;
};

#endif