#include "PreferencesDialog.hpp"
#include "../GraphicUserInterface.hpp"
#include "PlugBoardSettingsDialog.h"





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

}

void PreferencesDialog::OnOkButtonClick(wxCommandEvent &event) {

    if (Validate() && TransferDataFromWindow()) {
        if (IsModal()) {
            /// TODO: Optimization
            Preferences.PlugBoardwxString = Gui->GetPreferences().PlugBoardwxString;
            Gui->SetPreferences(Preferences);
            EndModal(wxID_OK);
        } else {
            SetReturnCode(wxID_OK);
            this->Show(false);
        }
    }

}

void PreferencesDialog::OnMoreSettingsButtonClick( wxCommandEvent& event ) {
    m_button4->PopupMenu( m_menu4, 2, 2  );
}


void PreferencesDialog::OnPlugBoardSettingsMenuItemSelected( wxCommandEvent& event )
{
    PlugBoardSettingsDialog dialog(this);
    dialog.ShowModal();
}

