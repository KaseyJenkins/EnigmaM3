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
#include <wx/choice.h>
#include <wx/tglbtn.h>
#include <wx/notebook.h>
#include <wx/dialog.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/hyperlink.h>
#include <wx/statline.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame {
private:

protected:
    wxMenuBar *MainMenuBar;
    wxMenu *FileMenu;
    wxMenu *HelpMenu;
    wxPanel *MainPanel;
    wxTextCtrl *m_textCtrlInput;
    wxTextCtrl *m_textCtrlOutput;
    wxButton *m_button1_Encrypt;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose(wxCloseEvent &event) { event.Skip(); }

    virtual void OnPreferencesMenuItemSelected(wxCommandEvent &event) { event.Skip(); }

    virtual void OnAboutMenuItemSelected(wxCommandEvent &event) { event.Skip(); }

    virtual void OnTextInput(wxCommandEvent &event) { event.Skip(); }

    virtual void OnEncryptButtonClick(wxCommandEvent &event) { event.Skip(); }


public:

    MainFrameBase(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxT("EnigmaM3"),
                  const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(573, 377),
                  long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

    ~MainFrameBase();

};


///////////////////////////////////////////////////////////////////////////////
/// Class PreferencesDialogBase
///////////////////////////////////////////////////////////////////////////////
class PreferencesDialogBase : public wxDialog {
private:

protected:
    wxNotebook *PreferencesNotebook;
    wxPanel *MainPreferencesPage;
    wxChoice *ReflectorChoice;
    wxChoice *Rotor1Choice;
    wxChoice *Rotor2Choice;
    wxChoice *Rotor3Choice;
    wxChoice *Ring1Choice;
    wxChoice *Ring2Choice;
    wxChoice *Ring3Choice;
    wxChoice *InitialPosition1Choice;
    wxChoice *InitialPosition2Choice;
    wxChoice *InitialPosition3Choice;
    wxPanel *PlugBoardSettingsPage;
    wxTextCtrl *PlugBoardwxStringField;
    wxToggleButton *m_toggleBtn_Q;
    wxToggleButton *m_toggleBtn_W;
    wxToggleButton *m_toggleBtn_E;
    wxToggleButton *m_toggleBtn_R;
    wxToggleButton *m_toggleBtn_T;
    wxToggleButton *m_toggleBtn_Y;
    wxToggleButton *m_toggleBtn_U;
    wxToggleButton *m_toggleBtn_I;
    wxToggleButton *m_toggleBtn_O;
    wxToggleButton *m_toggleBtn_P;
    wxToggleButton *m_toggleBtn_A;
    wxToggleButton *m_toggleBtn_S;
    wxToggleButton *m_toggleBtn_D;
    wxToggleButton *m_toggleBtn_F;
    wxToggleButton *m_toggleBtn_G;
    wxToggleButton *m_toggleBtn_H;
    wxToggleButton *m_toggleBtn_J;
    wxToggleButton *m_toggleBtn_K;
    wxToggleButton *m_toggleBtn_L;
    wxToggleButton *m_toggleBtn_Z;
    wxToggleButton *m_toggleBtn_X;
    wxToggleButton *m_toggleBtn_C;
    wxToggleButton *m_toggleBtn_V;
    wxToggleButton *m_toggleBtn_B;
    wxToggleButton *m_toggleBtn_N;
    wxToggleButton *m_toggleBtn_M;
    wxStdDialogButtonSizer *StdButtons;
    wxButton *StdButtonsOK;
    wxButton *StdButtonsCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnOkButtonClick(wxCommandEvent &event) { event.Skip(); }


    // ToDeprecate
//    virtual void OnCancelButtonClick(wxCommandEvent &event) { event.Skip(); }
//    virtual void OnResetButtonClick(wxCommandEvent &event) { event.Skip(); }


    virtual void OnToggleButton_Q(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_W(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_E(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_R(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_T(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_Y(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_U(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_I(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_O(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_P(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_A(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_S(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_D(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_F(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_G(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_H(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_J(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_K(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_L(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_Z(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_X(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_C(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_V(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_B(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_N(wxCommandEvent &event) { event.Skip(); }

    virtual void OnToggleButton_M(wxCommandEvent &event) { event.Skip(); }


public:

    PreferencesDialogBase(wxWindow *parent, wxWindowID id = wxID_ANY,
                          const wxString &title = wxT("EnigmaM3 - Preferences"), const wxPoint &pos = wxDefaultPosition,
                          const wxSize &size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE);

    ~PreferencesDialogBase();

};


///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialogBase
///////////////////////////////////////////////////////////////////////////////
class AboutDialogBase : public wxDialog {
private:

protected:
    wxPanel *m_panel12;
    wxStaticBitmap *m_bitmap1;
    wxStaticText *VersionStaticText;
    wxStaticText *CopyrightStaticText;
    wxHyperlinkCtrl *WebsiteHyperlink;
    wxStaticLine *m_staticline7;
    wxButton *OKButton;

    // Virtual event handlers, overide them in your derived class
    virtual void OnWebsiteHyperlinkClick(wxHyperlinkEvent &event) { event.Skip(); }


public:

    AboutDialogBase(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxT("About EnigmaM3"),
                    const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(-1, -1),
                    long style = wxDEFAULT_DIALOG_STYLE);

    ~AboutDialogBase();

};


#endif //ENIGMAWXWIDGETS_FORMS1_HPP





