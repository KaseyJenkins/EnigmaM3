
set(wxWidgets_ROOT_DIR ../../../../../_Libs/WxWidgetC)
# Request the required wxWidgets libs
find_package(wxWidgets 3.1 COMPONENTS core base REQUIRED)

if(wxWidgets_FOUND)
    # Include the wxWidgets use file to initialize various settings
    include(${wxWidgets_USE_FILE})
    include_directories(${wxWidgets_ROOT_DIR}/include)

    include_directories(Forms)

    # Define a variable containing a list of source files for the project
    set(SRC_FILES
            main.cpp main.hpp
            Application.cpp Application.hpp
            GraphicUserInterface.cpp GraphicUserInterface.hpp

            stringModifier.cpp stringModifier.hpp

            UserPreferences.cpp UserPreferences.hpp

            Forms/MainFrame.cpp Forms/MainFrame.h
            Forms/Forms.cpp Forms/Forms.h
            Forms/PreferencesDialog.cpp Forms/PreferencesDialog.hpp
            Forms/PlugBoardSettingsDialog.cpp
            Forms/PlugBoardSettingsDialog.h

            )

    # Define the build target for the executable
    add_executable(EnigmaM3-windows-x64 ${SRC_FILES})

    target_compile_features(EnigmaM3-windows-x64 PRIVATE cxx_std_17)

    # Link required libraries to the executable
    target_link_libraries(EnigmaM3-windows-x64 ${wxWidgets_LIBRARIES})
    target_link_libraries(EnigmaM3-windows-x64 -mwindows)
    target_link_libraries(EnigmaM3-windows-x64 enigma_library)

elseif(NOT wxWidgets_FOUND)
    message(FATAL_ERROR "Could not find WX!")
endif()