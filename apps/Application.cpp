#include "Application.hpp"

wxApp *Application::CreateGuiApp() {
    mUserInterface =new GraphicUserInterface;
    return mUserInterface;
}

void Application::Initialize() {
    wxAppInitializer wxTheAppInitializer((wxAppInitializerFunction) CreateGuiApp);
}

GraphicUserInterface *Application::mUserInterface = nullptr;
