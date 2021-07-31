#include "PlugBoardSettingsDialog.h"
#include "../GraphicUserInterface.hpp"
#include "PreferencesDialog.hpp"

wxString stringSplitterInTwo(wxString);
wxString stringConcatInTwo(wxString);

PlugBoardSettingsDialog::PlugBoardSettingsDialog(wxWindow *parent)
        :
        PlugBoardSettingsDialogBase(parent),
        Preferences(Gui->GetPreferences()) {

    for (const auto &item : Preferences.PlugBoardwxString) {
        toggleBtnNames[item]->SetValue(true);
    }

    m_textCtrl3->SetValidator(wxGenericValidator(&Preferences.PlugBoardwxString));

}


void PlugBoardSettingsDialog::OnResetButtonClick( wxCommandEvent& event ) {

    for (const auto& item : Preferences.PlugBoardwxString) {
        toggleBtnNames[item]->SetValue(false);
    }

    Preferences.PlugBoardwxString = "";

    m_textCtrl3->Clear();
    m_textCtrl3->AppendText(Preferences.PlugBoardwxString);
}

void PlugBoardSettingsDialog::OnOkButtonClick(wxCommandEvent &event) {
    if (Validate() && TransferDataFromWindow()) {
        if (IsModal() && ((Preferences.PlugBoardwxString.size()) % 2) == 0) {
            Gui->SetPreferences(Preferences);
            EndModal(wxID_OK);
        } else {
            SetReturnCode(wxID_OK);
            this->Show(false);
        }
    }
}

//wxString stringSplitterInTwo(wxString orStr) {
//    for (int i = 2, y = 0; i < orStr.size() - y; i += 2, ++y) {
//        orStr.insert(i + y, " ");
//    }
//    return orStr;
//}
//
//wxString stringConcatInTwo(wxString orStr) {
//    orStr.erase(std::remove(orStr.begin(), orStr.end(), ' '), orStr.end());
//    return orStr;
//}

/*void PlugBoardSettingsDialogHelper(char ch, wxToggleButton *toggleButton_ch, wxTextCtrl *textCtrlInput,
                                   UserPreferences &PreferencesF, std::unordered_map<char, wxToggleButton *> &toggleBtnF
) {
    if (toggleButton_ch->GetValue() && (PreferencesF.PlugBoardwxString.size() <= 19)) {
        PreferencesF.PlugBoardwxString.Append(ch);
        textCtrlInput->Clear();
        wxString tempToShow = stringSplitterInTwo(PreferencesF.PlugBoardwxString);
        textCtrlInput->AppendText(stringSplitterInTwo(PreferencesF.PlugBoardwxString));

    } else if (toggleButton_ch->GetValue() && (PreferencesF.PlugBoardwxString.size() == 20)) {
        toggleButton_ch->SetValue(false);
    } else if (!(toggleButton_ch->GetValue())) {
        wxString::size_type found = PreferencesF.PlugBoardwxString.find(ch);
        // ABC found B, ABCD found D or B
        if ((found != wxString::npos) && ((found % 2) != 0)) {
            toggleBtnF[PreferencesF.PlugBoardwxString[found - 1]]->SetValue(false);
            PreferencesF.PlugBoardwxString.erase(found - 1, 2);
            textCtrlInput->Clear();
            textCtrlInput->AppendText(stringSplitterInTwo(PreferencesF.PlugBoardwxString));
        }
            // ABCD found A or C
        else if ((found != wxString::npos) && ((found % 2) == 0) && ((PreferencesF.PlugBoardwxString.size() % 2) == 0)) {
            toggleBtnF[PreferencesF.PlugBoardwxString[found + 1]]->SetValue(false);
            PreferencesF.PlugBoardwxString.erase(found, 2);
            textCtrlInput->Clear();
            textCtrlInput->AppendText(stringSplitterInTwo(PreferencesF.PlugBoardwxString));
        }

            // ABC
        else if ((found != wxString::npos) && ((PreferencesF.PlugBoardwxString.size() % 2) != 0)) {
            // ABC found C
            if (found == ((PreferencesF.PlugBoardwxString.size() - 1))) {
                toggleBtnF[PreferencesF.PlugBoardwxString[found]]->SetValue(false);
                PreferencesF.PlugBoardwxString.erase(found, 1);
                textCtrlInput->Clear();
                textCtrlInput->AppendText(stringSplitterInTwo(PreferencesF.PlugBoardwxString));
            }
                // ABC found A
            else if (found != ((PreferencesF.PlugBoardwxString.size() - 1))) {
                toggleBtnF[PreferencesF.PlugBoardwxString[found + 1]]->SetValue(false);
                PreferencesF.PlugBoardwxString.erase(found, 2);
                textCtrlInput->Clear();
                textCtrlInput->AppendText(stringSplitterInTwo(PreferencesF.PlugBoardwxString));
            }
        }

    }
}*/




void PlugBoardSettingsDialogHelper(char ch, wxToggleButton *toggleButton_ch, wxTextCtrl *textCtrlInput,
                                   UserPreferences &PreferencesF, std::unordered_map<char, wxToggleButton *> &toggleBtnF
) {
    if (toggleButton_ch->GetValue() && (PreferencesF.PlugBoardwxString.size() <= 19)) {
        textCtrlInput->AppendText(ch);
        PreferencesF.PlugBoardwxString = textCtrlInput->GetValue();

    } else if (toggleButton_ch->GetValue() && (PreferencesF.PlugBoardwxString.size() == 20)) {
        toggleButton_ch->SetValue(false);
    } else if (!(toggleButton_ch->GetValue())) {
        wxString::size_type found = PreferencesF.PlugBoardwxString.find(ch);
        // ABC found B, ABCD found D or B
        if ((found != wxString::npos) && ((found % 2) != 0)) {
            toggleBtnF[PreferencesF.PlugBoardwxString[found - 1]]->SetValue(false);
            PreferencesF.PlugBoardwxString.erase(found - 1, 2);
            textCtrlInput->Clear();
            textCtrlInput->AppendText(PreferencesF.PlugBoardwxString);
        }
        // ABCD found A or C
        else if ((found != wxString::npos) && ((found % 2) == 0) && ((PreferencesF.PlugBoardwxString.size() % 2) == 0)) {
            toggleBtnF[PreferencesF.PlugBoardwxString[found + 1]]->SetValue(false);
            PreferencesF.PlugBoardwxString.erase(found, 2);
            textCtrlInput->Clear();
            textCtrlInput->AppendText(PreferencesF.PlugBoardwxString);
        }

        // ABC
        else if ((found != wxString::npos) && ((PreferencesF.PlugBoardwxString.size() % 2) != 0)) {
            // ABC found C
            if (found == ((PreferencesF.PlugBoardwxString.size() - 1))) {
                toggleBtnF[PreferencesF.PlugBoardwxString[found]]->SetValue(false);
                PreferencesF.PlugBoardwxString.erase(found, 1);
                textCtrlInput->Clear();
                textCtrlInput->AppendText(PreferencesF.PlugBoardwxString);
            }
            // ABC found A
            else if (found != ((PreferencesF.PlugBoardwxString.size() - 1))) {
                toggleBtnF[PreferencesF.PlugBoardwxString[found + 1]]->SetValue(false);
                PreferencesF.PlugBoardwxString.erase(found, 2);
                textCtrlInput->Clear();
                textCtrlInput->AppendText(PreferencesF.PlugBoardwxString);
            }
        }

    }
}


void PlugBoardSettingsDialog::OnToggleButton_Q( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('Q', m_toggleBtn_Q, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_W( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('W', m_toggleBtn_W, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_E( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('E', m_toggleBtn_E, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_R( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('R', m_toggleBtn_R, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_T( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('T', m_toggleBtn_T, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_Y( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('Y', m_toggleBtn_Y, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_U( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('U', m_toggleBtn_U, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_I( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('I', m_toggleBtn_I, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_O( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('O', m_toggleBtn_O, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_P( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('P', m_toggleBtn_P, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_A( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('A', m_toggleBtn_A, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_S( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('S', m_toggleBtn_S, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_D( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('D', m_toggleBtn_D, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_F( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('F', m_toggleBtn_F, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_G( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('G', m_toggleBtn_G, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_H( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('H', m_toggleBtn_H, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_J( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('J', m_toggleBtn_J, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_K( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('K', m_toggleBtn_K, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_L( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('L', m_toggleBtn_L, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_Z( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('Z', m_toggleBtn_Z, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_X( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('X', m_toggleBtn_X, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_C( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('C', m_toggleBtn_C, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_V( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('V', m_toggleBtn_V, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_B( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('B', m_toggleBtn_B, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_N( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('N', m_toggleBtn_N, m_textCtrl3, Preferences, toggleBtnNames);
}
void PlugBoardSettingsDialog::OnToggleButton_M( wxCommandEvent& event ) {
    PlugBoardSettingsDialogHelper('M', m_toggleBtn_M, m_textCtrl3, Preferences, toggleBtnNames);
}
