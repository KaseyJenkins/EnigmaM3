#ifndef ENIGMAWXWIDGETS_USERPREFERENCES_HPP
#define ENIGMAWXWIDGETS_USERPREFERENCES_HPP


#include <wx/wxprec.h>
#include <wx/dde.h>
#include <wx/dnd.h>
#include <wx/filename.h>
#include <wx/hyperlink.h>
#include <wx/imaglist.h>
#include <wx/listctrl.h>
#include <wx/mstream.h>
#include <wx/power.h>
#include <wx/snglinst.h>
#include <wx/taskbar.h>
#include <wx/txtstrm.h>
#include <wx/valgen.h>
#include <wx/wfstream.h>
#include <shellapi.h>

#include <iostream>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

struct UserPreferences {
    UserPreferences() :

            Reflector(wxT("UKW-B")),

            Rotor1(wxT("I")),
            Rotor2(wxT("II")),
            Rotor3(wxT("VIII")),

            Ring1(wxT("0")),
            Ring2(wxT("0")),
            Ring3(wxT("0")),

            InitialPosition1(wxT("A")),
            InitialPosition2(wxT("A")),
            InitialPosition3(wxT("Z")),

            PlugBoardwxStringInput(wxT("ABCD")){}

    void Load();

    void Save() const;

    // Reflector
    wxString Reflector;
    // Rotor Settings
    wxString Rotor1;
    wxString Rotor2;
    wxString Rotor3;
    // Ring Settings
    wxString Ring1;
    wxString Ring2;
    wxString Ring3;
    // Initial Position
    wxString InitialPosition1;
    wxString InitialPosition2;
    wxString InitialPosition3;
    // PlugBoard
    wxString PlugBoardwxStringInput;

protected:
    wxString GetPreferencesFileName() const { return L"Configuration.xml"; }
};


#endif //ENIGMAWXWIDGETS_USERPREFERENCES_HPP
