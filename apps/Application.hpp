#ifndef ENIGMA_APPLICATION_HPP
#define ENIGMA_APPLICATION_HPP

#include "GraphicUserInterface.hpp"

class Application {
public:
    static wxApp *CreateGuiApp();
    static void Initialize();

protected:
    static GraphicUserInterface *mUserInterface;

};


#endif //ENIGMA_APPLICATION_HPP
