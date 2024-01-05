#include "helpers/common.h"
#include "../modules/Module/module.h"

class Controller{
    public:
    
        Controller();
        void init();
        void update();

    private:
    
        Module module;
};
