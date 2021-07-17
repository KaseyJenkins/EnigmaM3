#include "PreferencesDialog.hpp"

PreferencesDialog::PreferencesDialog(wxWindow *parent)
        :
        PreferencesDialogBase(parent) {
    TransferDataToWindow();

    m_choice101->SetValidator(wxGenericValidator(&reflector_Value));

    // Rotor Settings
    m_choice2->SetValidator(wxGenericValidator(&rotor_SettingString_1));
    m_choice3->SetValidator(wxGenericValidator(&rotor_SettingString_2));
    m_choice4->SetValidator(wxGenericValidator(&rotor_SettingString_3));

    // Ring Settings
    m_choice5->SetValidator(wxGenericValidator(&ring_SettingString_1));
    m_choice6->SetValidator(wxGenericValidator(&ring_SettingString_2));
    m_choice7->SetValidator(wxGenericValidator(&ring_SettingString_3));

    // Initial Position
    m_choice8->SetValidator(wxGenericValidator(&initialPosition_1));
    m_choice9->SetValidator(wxGenericValidator(&initialPosition_2));
    m_choice10->SetValidator(wxGenericValidator(&initialPosition_3));

}

void PreferencesDialog::OnOkButtonClick(wxCommandEvent &event) {

    if (Validate() && TransferDataFromWindow()) {
        if (IsModal())
            EndModal(wxID_OK);
        else {
            SetReturnCode(wxID_OK);
            this->Show(false);
        }
    }

}

