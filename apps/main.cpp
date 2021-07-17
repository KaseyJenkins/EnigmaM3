#include "Application.hpp"


int main(int argc, char **argv) {
    // Initialize Application
    Application::Initialize();
    // Start Application
    ::wxEntry(argc, argv);
    return 0;
}




