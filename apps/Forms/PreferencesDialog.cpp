#include "PreferencesDialog.hpp"
#include "../GraphicUserInterface.hpp"


PreferencesDialog::PreferencesDialog(wxWindow *parent)
        :
        PreferencesDialogBase(parent),
        Preferences(Gui->GetPreferences()) {

#define EM3_CHOICE_VALIDATOR(NAME) (EM3_JOIN(NAME,Choice))->SetValidator (wxGenericValidator (&Preferences.NAME));

    EM3_CHOICE_VALIDATOR(Reflector);

    EM3_CHOICE_VALIDATOR(Rotor1);
    EM3_CHOICE_VALIDATOR(Rotor2);
    EM3_CHOICE_VALIDATOR(Rotor3);

    EM3_CHOICE_VALIDATOR(Ring1);
    EM3_CHOICE_VALIDATOR(Ring2);
    EM3_CHOICE_VALIDATOR(Ring3);

    EM3_CHOICE_VALIDATOR(InitialPosition1);
    EM3_CHOICE_VALIDATOR(InitialPosition2);
    EM3_CHOICE_VALIDATOR(InitialPosition3);

    PlugBoardwxStringField->SetValidator(wxGenericValidator(&Preferences.PlugBoardwxStringInput));

    for (const auto &item : Preferences.PlugBoardwxStringInput) {
        toggleBtnNames[item]->SetValue(true);
    }

}

void PreferencesDialog::OnOkButtonClick(wxCommandEvent &event) {

    if (Validate() && TransferDataFromWindow()) {
        if (IsModal()) {
            Gui->SetPreferences(Preferences);
            EndModal(wxID_OK);
        } else {
            SetReturnCode(wxID_OK);
            this->Show(false);
        }
    }

}

void PlugBoardSettingsDialogHelper(char ch, wxToggleButton *toggleButton_ch, wxTextCtrl *textCtrlInput,
                                   UserPreferences &PreferencesF, std::unordered_map<char, wxToggleButton *> &toggleBtnF
) {
    if (toggleButton_ch->GetValue() && (PreferencesF.PlugBoardwxStringInput.size() <= 19)) {
        textCtrlInput->AppendText(ch);
        PreferencesF.PlugBoardwxStringInput = textCtrlInput->GetValue();

    } else if (toggleButton_ch->GetValue() && (PreferencesF.PlugBoardwxStringInput.size() == 20)) {
        toggleButton_ch->SetValue(false);
    } else if (!(toggleButton_ch->GetValue())) {
        wxString::size_type found = PreferencesF.PlugBoardwxStringInput.find(ch);
        // ABC found B, ABCD found D or B
        if ((found != wxString::npos) && ((found % 2) != 0)) {
            toggleBtnF[PreferencesF.PlugBoardwxStringInput[found - 1]]->SetValue(false);
            PreferencesF.PlugBoardwxStringInput.erase(found - 1, 2);
            textCtrlInput->Clear();
            textCtrlInput->AppendText(PreferencesF.PlugBoardwxStringInput);
        }
            // ABCD found A or C
        else if ((found != wxString::npos) && ((found % 2) == 0) &&
                 ((PreferencesF.PlugBoardwxStringInput.size() % 2) == 0)) {
            toggleBtnF[PreferencesF.PlugBoardwxStringInput[found + 1]]->SetValue(false);
            PreferencesF.PlugBoardwxStringInput.erase(found, 2);
            textCtrlInput->Clear();
            textCtrlInput->AppendText(PreferencesF.PlugBoardwxStringInput);
        }

            // ABC
        else if ((found != wxString::npos) && ((PreferencesF.PlugBoardwxStringInput.size() % 2) != 0)) {
            // ABC found C
            if (found == ((PreferencesF.PlugBoardwxStringInput.size() - 1))) {
                toggleBtnF[PreferencesF.PlugBoardwxStringInput[found]]->SetValue(false);
                PreferencesF.PlugBoardwxStringInput.erase(found, 1);
                textCtrlInput->Clear();
                textCtrlInput->AppendText(PreferencesF.PlugBoardwxStringInput);
            }
                // ABC found A
            else if (found != ((PreferencesF.PlugBoardwxStringInput.size() - 1))) {
                toggleBtnF[PreferencesF.PlugBoardwxStringInput[found + 1]]->SetValue(false);
                PreferencesF.PlugBoardwxStringInput.erase(found, 2);
                textCtrlInput->Clear();
                textCtrlInput->AppendText(PreferencesF.PlugBoardwxStringInput);
            }
        }

    }
}


void PreferencesDialog::OnToggleButton_Q(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('Q', m_toggleBtn_Q, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_W(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('W', m_toggleBtn_W, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_E(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('E', m_toggleBtn_E, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_R(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('R', m_toggleBtn_R, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_T(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('T', m_toggleBtn_T, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_Y(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('Y', m_toggleBtn_Y, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_U(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('U', m_toggleBtn_U, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_I(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('I', m_toggleBtn_I, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_O(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('O', m_toggleBtn_O, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_P(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('P', m_toggleBtn_P, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_A(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('A', m_toggleBtn_A, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_S(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('S', m_toggleBtn_S, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_D(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('D', m_toggleBtn_D, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_F(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('F', m_toggleBtn_F, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_G(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('G', m_toggleBtn_G, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_H(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('H', m_toggleBtn_H, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_J(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('J', m_toggleBtn_J, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_K(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('K', m_toggleBtn_K, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_L(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('L', m_toggleBtn_L, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_Z(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('Z', m_toggleBtn_Z, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_X(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('X', m_toggleBtn_X, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_C(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('C', m_toggleBtn_C, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_V(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('V', m_toggleBtn_V, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_B(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('B', m_toggleBtn_B, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_N(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('N', m_toggleBtn_N, PlugBoardwxStringField, Preferences, toggleBtnNames);
}

void PreferencesDialog::OnToggleButton_M(wxCommandEvent &event) {
    PlugBoardSettingsDialogHelper('M', m_toggleBtn_M, PlugBoardwxStringField, Preferences, toggleBtnNames);
}





