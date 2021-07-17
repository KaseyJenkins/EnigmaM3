#include "GraphicUserInterface.hpp"
#include "MainFrame.h"

bool GraphicUserInterface::OnInit() {
    wxFrame *mMainFrame = new MainFrame (nullptr);
    mMainFrame->Show (true);
    return true;
}
