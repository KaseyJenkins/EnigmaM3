#ifndef __PlugBoardSettingsDialog__
#define __PlugBoardSettingsDialog__

/**
@file
Subclass of PlugBoardSettingsDialogBase, which is generated by wxFormBuilder.
*/

#include "Forms.h"

//// end generated include

#include "../UserPreferences.hpp"

/** Implementing PlugBoardSettingsDialogBase */
class PlugBoardSettingsDialog : public PlugBoardSettingsDialogBase {
protected:
    // Handlers for PlugBoardSettingsDialogBase events.
    void OnResetButtonClick(wxCommandEvent &event) override;

    void OnOkButtonClick(wxCommandEvent &event) override;

    void OnCancelButtonClick(wxCommandEvent &event) override { Close(); }

    void OnToggleButton_Q(wxCommandEvent &event) override;

    void OnToggleButton_W(wxCommandEvent &event) override;

    void OnToggleButton_E(wxCommandEvent &event) override;

    void OnToggleButton_R(wxCommandEvent &event) override;

    void OnToggleButton_T(wxCommandEvent &event) override;

    void OnToggleButton_Y(wxCommandEvent &event) override;

    void OnToggleButton_U(wxCommandEvent &event) override;

    void OnToggleButton_I(wxCommandEvent &event) override;

    void OnToggleButton_O(wxCommandEvent &event) override;

    void OnToggleButton_P(wxCommandEvent &event) override;

    void OnToggleButton_A(wxCommandEvent &event) override;

    void OnToggleButton_S(wxCommandEvent &event) override;

    void OnToggleButton_D(wxCommandEvent &event) override;

    void OnToggleButton_F(wxCommandEvent &event) override;

    void OnToggleButton_G(wxCommandEvent &event) override;

    void OnToggleButton_H(wxCommandEvent &event) override;

    void OnToggleButton_J(wxCommandEvent &event) override;

    void OnToggleButton_K(wxCommandEvent &event) override;

    void OnToggleButton_L(wxCommandEvent &event) override;

    void OnToggleButton_Z(wxCommandEvent &event) override;

    void OnToggleButton_X(wxCommandEvent &event) override;

    void OnToggleButton_C(wxCommandEvent &event) override;

    void OnToggleButton_V(wxCommandEvent &event) override;

    void OnToggleButton_B(wxCommandEvent &event) override;

    void OnToggleButton_N(wxCommandEvent &event) override;

    void OnToggleButton_M(wxCommandEvent &event) override;


    UserPreferences Preferences;

    std::unordered_map<char, wxToggleButton *> toggleBtnNames = {
            {'A', m_toggleBtn_A},
            {'B', m_toggleBtn_B},
            {'C', m_toggleBtn_C},
            {'D', m_toggleBtn_D},
            {'E', m_toggleBtn_E},
            {'F', m_toggleBtn_F},
            {'G', m_toggleBtn_G},
            {'H', m_toggleBtn_H},
            {'I', m_toggleBtn_I},
            {'J', m_toggleBtn_J},
            {'K', m_toggleBtn_K},
            {'L', m_toggleBtn_L},
            {'M', m_toggleBtn_M},
            {'N', m_toggleBtn_N},
            {'O', m_toggleBtn_O},
            {'P', m_toggleBtn_P},
            {'Q', m_toggleBtn_Q},
            {'R', m_toggleBtn_R},
            {'S', m_toggleBtn_S},
            {'T', m_toggleBtn_T},
            {'U', m_toggleBtn_U},
            {'V', m_toggleBtn_V},
            {'W', m_toggleBtn_W},
            {'X', m_toggleBtn_X},
            {'Y', m_toggleBtn_Y},
            {'Z', m_toggleBtn_Z}

    };
public:
    /** Constructor */
    PlugBoardSettingsDialog(wxWindow *parent);

    //// end generated class members

};

#endif // __PlugBoardSettingsDialog__