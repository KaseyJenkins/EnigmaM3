#include "GraphicUserInterface.hpp"
#include "MainFrame.h"

bool GraphicUserInterface::OnInit() {
    Gui = this;

    wxFrame *mMainFrame = new MainFrame(nullptr);
    mMainFrame->Show(true);
    return true;
}

GraphicUserInterface *Gui = nullptr;

void GraphicUserInterface::SetPreferences(const UserPreferences &preferences) {
    Preferences = preferences;
}

