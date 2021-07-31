#include "AboutDialog.h"
#include "../EM3defs.h"

AboutDialog::AboutDialog(wxWindow *parent)
        :
        AboutDialogBase(parent) {


    wxFont versionStaticTextFont = VersionStaticText->GetFont();
    versionStaticTextFont.SetWeight (wxFONTWEIGHT_BOLD);
    VersionStaticText->SetFont (versionStaticTextFont);

    VersionStaticText->SetLabel(EM3_APP_NAME " v" VERSION_STRING);

    CopyrightStaticText->SetLabel(EM3_STR_RELEASED_BY);

    WebsiteHyperlink->SetLabel(wxT("https://github.com/KaseyJenkins/EnigmaM3"));

}



