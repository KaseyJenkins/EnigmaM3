#ifndef ENIGMA_GRAPHICUSERINTERFACE_HPP
#define ENIGMA_GRAPHICUSERINTERFACE_HPP


#include <wx/wxprec.h>

#ifndef WX_PRECOMP

#include <wx/wx.h>

#endif

#include "UserPreferences.hpp"


class GraphicUserInterface : public wxApp {
private:
public:
    virtual bool OnInit();

    virtual const UserPreferences &GetPreferences() const { return Preferences; }

    virtual void SetPreferences(const UserPreferences &preferences);

protected:
    UserPreferences Preferences;
};

extern GraphicUserInterface *Gui;

#endif //ENIGMA_GRAPHICUSERINTERFACE_HPP
