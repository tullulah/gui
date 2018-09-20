#include <iostream>

using namespace std;

#ifndef UI_COMPONENT
#define UI_COMPONENT
class UIComponent{
    public:
        UIComponent();
        ~UIComponent();

        virtual void update();
        virtual void render();
        virtual void clean();

    private:
        int type;
    protected:

    
};
#endif // UI_COMPONENT