#ifndef ENIGMAWXWIDGETS_PREFERENCESDIALOG_HPP
#define ENIGMAWXWIDGETS_PREFERENCESDIALOG_HPP

/**
@file
Subclass of PreferencesDialogBase, which is generated by wxFormBuilder.
*/

#include "Forms.h"

//// end generated include


#include "../GlobalPreferencesValues.hpp"
#include <wx/valgen.h>

/** Implementing PreferencesDialogBase */
class PreferencesDialog : public PreferencesDialogBase {
public:

protected:
    // Handlers for PreferencesDialogBase events.
    void OnOkButtonClick(wxCommandEvent &event);

    void OnCancelButtonClick(wxCommandEvent &event) { Close(); }


public:
    /** Constructor */
    PreferencesDialog(wxWindow *parent);
    //// end generated class members

};

#endif //ENIGMAWXWIDGETS_PREFERENCESDIALOG_HPP