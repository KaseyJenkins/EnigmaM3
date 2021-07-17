///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef ENIGMAWXWIDGETS_FORMS_HPP
#define ENIGMAWXWIDGETS_FORMS_HPP

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/choice.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame
{
private:

protected:
    wxMenuBar* MainMenuBar;
    wxMenu* FileMenu;
    wxMenu* HelpMenu;
    wxPanel* MainPanel;
    wxTextCtrl* m_textCtrlInput;
    wxTextCtrl* m_textCtrlOutput;
    wxButton* m_button1_Encrypt;

    // Virtual event handlers, overide them in your derived class
    virtual void OnPreferencesMenuItemSelected( wxCommandEvent& event ) { event.Skip(); }
    virtual void OnTextInput( wxCommandEvent& event ) { event.Skip(); }
    virtual void OnEncryptButtonClick( wxCommandEvent& event ) { event.Skip(); }


public:

    MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnigmaM3"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 573,377 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

    ~MainFrameBase();

};



///////////////////////////////////////////////////////////////////////////////
/// Class PreferencesDialogBase
///////////////////////////////////////////////////////////////////////////////
class PreferencesDialogBase : public wxDialog
{
private:

protected:
    wxPanel* m_panel6;
    wxChoice* m_choice101;
    wxPanel* m_panel2;
    wxChoice* m_choice2;
    wxChoice* m_choice3;
    wxChoice* m_choice4;
    wxPanel* m_panel3;
    wxChoice* m_choice5;
    wxChoice* m_choice6;
    wxChoice* m_choice7;
    wxPanel* m_panel4;
    wxChoice* m_choice8;
    wxChoice* m_choice9;
    wxChoice* m_choice10;
    wxPanel* m_panel5;
    wxButton* m_button2;
    wxButton* m_button3;

    // Virtual event handlers, overide them in your derived class
    virtual void OnOkButtonClick( wxCommandEvent& event ) { event.Skip(); }
    virtual void OnCancelButtonClick( wxCommandEvent& event ) { event.Skip(); }

public:

    PreferencesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EnigmaM3 - Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
    ~PreferencesDialogBase();

};


#endif //ENIGMAWXWIDGETS_FORMS1_HPP





