#include "MainFrame.h"
#include "PreferencesDialog.hpp"
#include "../stringModifier.hpp"
#include <wx/msgdlg.h>

MainFrame::MainFrame(wxWindow *parent) : MainFrameBase(parent) {

}


void MainFrame::OnPreferencesMenuItemSelected(wxCommandEvent &event) {

    PreferencesDialog dialog(this);
    dialog.ShowModal();

}

void MainFrame::OnTextInput(wxCommandEvent &event) {

}

void MainFrame::OnEncryptButtonClick(wxCommandEvent &event) {
    m_textCtrlOutput->Clear();
    wxString inputWxString = m_textCtrlInput->GetLineText(0);

        if (!(std::all_of(inputWxString.cbegin(), inputWxString.cend(), isupper))) {
            wxMessageBox(wxT("All letters must be capital!"));
            m_textCtrlInput->Clear();
        } else {
            m_textCtrlOutput->AppendText(mainFunc(inputWxString));
        }

}


