///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Forms.h"
#include "../EM3defs.h"

#include "../res/ENIGMA_M3.bmp.h"


///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos,
                             const wxSize &size, long style) : wxFrame(parent, id, title, pos, size, style) {
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

    MainMenuBar = new wxMenuBar(0);
    FileMenu = new wxMenu();
    wxMenuItem *PreferencesFileMenuItem;
    PreferencesFileMenuItem = new wxMenuItem(FileMenu, wxID_ANY, wxString(wxT("&Preferences...")), wxEmptyString,
                                             wxITEM_NORMAL);
    FileMenu->Append(PreferencesFileMenuItem);

    MainMenuBar->Append(FileMenu, wxT("&File"));

    HelpMenu = new wxMenu();
    wxMenuItem *CreateNewHelpMenuItem;
    CreateNewHelpMenuItem = new wxMenuItem(HelpMenu, wxID_ANY, wxString(wxT("About")), wxEmptyString, wxITEM_NORMAL);
    HelpMenu->Append(CreateNewHelpMenuItem);

    MainMenuBar->Append(HelpMenu, wxT("&Help"));

    this->SetMenuBar(MainMenuBar);

    wxBoxSizer *bSizer1;
    bSizer1 = new wxBoxSizer(wxVERTICAL);

    MainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer *bSizer11;
    bSizer11 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer8;
    bSizer8 = new wxBoxSizer(wxHORIZONTAL);

    m_textCtrlInput = new wxTextCtrl(MainPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    bSizer8->Add(m_textCtrlInput, 1, wxEXPAND, 1);


    bSizer11->Add(bSizer8, 1, wxEXPAND, 5);

    wxBoxSizer *bSizer9;
    bSizer9 = new wxBoxSizer(wxHORIZONTAL);

    m_textCtrlOutput = new wxTextCtrl(MainPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
                                      wxTE_READONLY);
    bSizer9->Add(m_textCtrlOutput, 1, wxEXPAND, 5);


    bSizer11->Add(bSizer9, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer1;
    sbSizer1 = new wxStaticBoxSizer(new wxStaticBox(MainPanel, wxID_ANY, wxEmptyString), wxVERTICAL);

    m_button1_Encrypt = new wxButton(sbSizer1->GetStaticBox(), wxID_ANY, wxT("Encrypt"), wxDefaultPosition,
                                     wxDefaultSize, 0);
    sbSizer1->Add(m_button1_Encrypt, 0, wxALIGN_RIGHT, 5);


    bSizer11->Add(sbSizer1, 0, wxEXPAND, 5);


    MainPanel->SetSizer(bSizer11);
    MainPanel->Layout();
    bSizer11->Fit(MainPanel);
    bSizer1->Add(MainPanel, 1, wxEXPAND | wxALL, 5);


    this->SetSizer(bSizer1);
    this->Layout();

    this->Centre(wxBOTH);
// Connect Events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MainFrameBase::OnClose));
    FileMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBase::OnPreferencesMenuItemSelected),
                   this, PreferencesFileMenuItem->GetId());
    HelpMenu->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBase::OnAboutMenuItemSelected), this,
                   CreateNewHelpMenuItem->GetId());
    m_textCtrlInput->Bind(wxEVT_COMMAND_TEXT_UPDATED, &MainFrameBase::OnTextInput, this);
    m_button1_Encrypt->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrameBase::OnEncryptButtonClick, this);
}

MainFrameBase::~MainFrameBase() {
    // Disconnect Events
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MainFrameBase::OnClose));
    m_textCtrlInput->Unbind(wxEVT_COMMAND_TEXT_UPDATED, &MainFrameBase::OnTextInput, this);
    m_button1_Encrypt->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &MainFrameBase::OnEncryptButtonClick, this);
}


PreferencesDialogBase::PreferencesDialogBase(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos,
                                             const wxSize &size, long style) : wxDialog(parent, id, title, pos, size,
                                                                                        style) {
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetFont(
            wxFont(wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false,
                   wxEmptyString));
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

    wxBoxSizer *bSizer5;
    bSizer5 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer21;
    bSizer21 = new wxBoxSizer(wxVERTICAL);

    PreferencesNotebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
    //PreferencesNotebook->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

    MainPreferencesPage = new wxPanel(PreferencesNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer *bSizer27;
    bSizer27 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer28;
    bSizer28 = new wxBoxSizer(wxVERTICAL);

    wxStaticBoxSizer *sbSizer141;
    sbSizer141 = new wxStaticBoxSizer(new wxStaticBox(MainPreferencesPage, wxID_ANY, wxT("Reflector")), wxHORIZONTAL);

    wxString ReflectorChoiceChoices[] = {wxT("UKW-B"), wxT("UKW-C")};
    int ReflectorChoiceNChoices = sizeof(ReflectorChoiceChoices) / sizeof(wxString);
    ReflectorChoice = new wxChoice(sbSizer141->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                   ReflectorChoiceNChoices, ReflectorChoiceChoices, 0);
    ReflectorChoice->SetSelection(0);
    sbSizer141->Add(ReflectorChoice, 0, wxALL, 5);


    bSizer28->Add(sbSizer141, 0, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer21;
    sbSizer21 = new wxStaticBoxSizer(new wxStaticBox(MainPreferencesPage, wxID_ANY, wxT("Rotor")), wxHORIZONTAL);

    wxStaticBoxSizer *sbSizer511;
    sbSizer511 = new wxStaticBoxSizer(new wxStaticBox(sbSizer21->GetStaticBox(), wxID_ANY, wxT("1st Rotor")),
                                      wxVERTICAL);

    wxString Rotor1ChoiceChoices[] = {wxT("I"), wxT("II"), wxT("III"), wxT("IV"), wxT("V"), wxT("VI"), wxT("VII"),
                                      wxT("VII"), wxT("VIII")};
    int Rotor1ChoiceNChoices = sizeof(Rotor1ChoiceChoices) / sizeof(wxString);
    Rotor1Choice = new wxChoice(sbSizer511->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                Rotor1ChoiceNChoices, Rotor1ChoiceChoices, 0);
    Rotor1Choice->SetSelection(5);
    sbSizer511->Add(Rotor1Choice, 1, wxALL | wxEXPAND, 5);


    sbSizer21->Add(sbSizer511, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer611;
    sbSizer611 = new wxStaticBoxSizer(new wxStaticBox(sbSizer21->GetStaticBox(), wxID_ANY, wxT("2nd Rotor")),
                                      wxVERTICAL);

    wxString Rotor2ChoiceChoices[] = {wxT("I"), wxT("II"), wxT("III"), wxT("IV"), wxT("V"), wxT("VI"), wxT("VII"),
                                      wxT("VII"), wxT("VIII")};
    int Rotor2ChoiceNChoices = sizeof(Rotor2ChoiceChoices) / sizeof(wxString);
    Rotor2Choice = new wxChoice(sbSizer611->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                Rotor2ChoiceNChoices, Rotor2ChoiceChoices, 0);
    Rotor2Choice->SetSelection(0);
    sbSizer611->Add(Rotor2Choice, 1, wxALL | wxEXPAND, 5);


    sbSizer21->Add(sbSizer611, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer711;
    sbSizer711 = new wxStaticBoxSizer(new wxStaticBox(sbSizer21->GetStaticBox(), wxID_ANY, wxT("3rd Rotor")),
                                      wxVERTICAL);

    wxString Rotor3ChoiceChoices[] = {wxT("I"), wxT("II"), wxT("III"), wxT("IV"), wxT("V"), wxT("VI"), wxT("VII"),
                                      wxT("VII"), wxT("VIII")};
    int Rotor3ChoiceNChoices = sizeof(Rotor3ChoiceChoices) / sizeof(wxString);
    Rotor3Choice = new wxChoice(sbSizer711->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                Rotor3ChoiceNChoices, Rotor3ChoiceChoices, 0);
    Rotor3Choice->SetSelection(0);
    sbSizer711->Add(Rotor3Choice, 1, wxALL | wxEXPAND, 5);


    sbSizer21->Add(sbSizer711, 1, wxEXPAND, 5);


    bSizer28->Add(sbSizer21, 0, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer31;
    sbSizer31 = new wxStaticBoxSizer(new wxStaticBox(MainPreferencesPage, wxID_ANY, wxT("Ring Setting")), wxHORIZONTAL);

    wxStaticBoxSizer *sbSizer811;
    sbSizer811 = new wxStaticBoxSizer(new wxStaticBox(sbSizer31->GetStaticBox(), wxID_ANY, wxT("1st Rotor")),
                                      wxVERTICAL);

    wxString Ring1ChoiceChoices[] = {wxT("0"), wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5"), wxT("6"), wxT("7"),
                                     wxT("8"), wxT("9"), wxT("10"), wxT("11"), wxT("12"), wxT("13"), wxT("14"),
                                     wxT("15"), wxT("16"), wxT("17"), wxT("18"), wxT("19"), wxT("20"), wxT("21"),
                                     wxT("22"), wxT("23"), wxT("24"), wxT("25")};
    int Ring1ChoiceNChoices = sizeof(Ring1ChoiceChoices) / sizeof(wxString);
    Ring1Choice = new wxChoice(sbSizer811->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                               Ring1ChoiceNChoices, Ring1ChoiceChoices, 0);
    Ring1Choice->SetSelection(0);
    sbSizer811->Add(Ring1Choice, 0, wxALL | wxEXPAND, 5);


    sbSizer31->Add(sbSizer811, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer911;
    sbSizer911 = new wxStaticBoxSizer(new wxStaticBox(sbSizer31->GetStaticBox(), wxID_ANY, wxT("2nd Rotor")),
                                      wxVERTICAL);

    wxString Ring2ChoiceChoices[] = {wxT("0"), wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5"), wxT("6"), wxT("7"),
                                     wxT("8"), wxT("9"), wxT("10"), wxT("11"), wxT("12"), wxT("13"), wxT("14"),
                                     wxT("15"), wxT("16"), wxT("17"), wxT("18"), wxT("19"), wxT("20"), wxT("21"),
                                     wxT("22"), wxT("23"), wxT("24"), wxT("25")};
    int Ring2ChoiceNChoices = sizeof(Ring2ChoiceChoices) / sizeof(wxString);
    Ring2Choice = new wxChoice(sbSizer911->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                               Ring2ChoiceNChoices, Ring2ChoiceChoices, 0);
    Ring2Choice->SetSelection(0);
    sbSizer911->Add(Ring2Choice, 0, wxALL | wxEXPAND, 5);


    sbSizer31->Add(sbSizer911, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer1011;
    sbSizer1011 = new wxStaticBoxSizer(new wxStaticBox(sbSizer31->GetStaticBox(), wxID_ANY, wxT("3rd Rotor")),
                                       wxVERTICAL);

    wxString Ring3ChoiceChoices[] = {wxT("0"), wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5"), wxT("6"), wxT("7"),
                                     wxT("8"), wxT("9"), wxT("10"), wxT("11"), wxT("12"), wxT("13"), wxT("14"),
                                     wxT("15"), wxT("16"), wxT("17"), wxT("18"), wxT("19"), wxT("20"), wxT("21"),
                                     wxT("22"), wxT("23"), wxT("24"), wxT("25")};
    int Ring3ChoiceNChoices = sizeof(Ring3ChoiceChoices) / sizeof(wxString);
    Ring3Choice = new wxChoice(sbSizer1011->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                               Ring3ChoiceNChoices, Ring3ChoiceChoices, 0);
    Ring3Choice->SetSelection(0);
    sbSizer1011->Add(Ring3Choice, 0, wxALL | wxEXPAND, 5);


    sbSizer31->Add(sbSizer1011, 1, wxEXPAND, 5);


    bSizer28->Add(sbSizer31, 0, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer41;
    sbSizer41 = new wxStaticBoxSizer(new wxStaticBox(MainPreferencesPage, wxID_ANY, wxT("Initial Position")),
                                     wxHORIZONTAL);

    wxStaticBoxSizer *sbSizer111;
    sbSizer111 = new wxStaticBoxSizer(new wxStaticBox(sbSizer41->GetStaticBox(), wxID_ANY, wxT("1st Rotor")),
                                      wxVERTICAL);

    wxString InitialPosition1ChoiceChoices[] = {wxT("A"), wxT("B"), wxT("C"), wxT("D"), wxT("E"), wxT("F"), wxT("G"),
                                                wxT("H"), wxT("I"), wxT("J"), wxT("K"), wxT("L"), wxT("M"), wxT("N"),
                                                wxT("O"), wxT("P"), wxT("Q"), wxT("R"), wxT("S"), wxT("T"), wxT("U"),
                                                wxT("V"), wxT("W"), wxT("X"), wxT("Y"), wxT("Z")};
    int InitialPosition1ChoiceNChoices = sizeof(InitialPosition1ChoiceChoices) / sizeof(wxString);
    InitialPosition1Choice = new wxChoice(sbSizer111->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                          InitialPosition1ChoiceNChoices, InitialPosition1ChoiceChoices, 0);
    InitialPosition1Choice->SetSelection(0);
    sbSizer111->Add(InitialPosition1Choice, 0, wxALL | wxEXPAND, 5);


    sbSizer41->Add(sbSizer111, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer121;
    sbSizer121 = new wxStaticBoxSizer(new wxStaticBox(sbSizer41->GetStaticBox(), wxID_ANY, wxT("2nd Rotor")),
                                      wxVERTICAL);

    wxString InitialPosition2ChoiceChoices[] = {wxT("A"), wxT("B"), wxT("C"), wxT("D"), wxT("E"), wxT("F"), wxT("G"),
                                                wxT("H"), wxT("I"), wxT("J"), wxT("K"), wxT("L"), wxT("M"), wxT("N"),
                                                wxT("O"), wxT("P"), wxT("Q"), wxT("R"), wxT("S"), wxT("T"), wxT("U"),
                                                wxT("V"), wxT("W"), wxT("X"), wxT("Y"), wxT("Z")};
    int InitialPosition2ChoiceNChoices = sizeof(InitialPosition2ChoiceChoices) / sizeof(wxString);
    InitialPosition2Choice = new wxChoice(sbSizer121->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                          InitialPosition2ChoiceNChoices, InitialPosition2ChoiceChoices, 0);
    InitialPosition2Choice->SetSelection(0);
    sbSizer121->Add(InitialPosition2Choice, 0, wxALL | wxEXPAND, 5);


    sbSizer41->Add(sbSizer121, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer131;
    sbSizer131 = new wxStaticBoxSizer(new wxStaticBox(sbSizer41->GetStaticBox(), wxID_ANY, wxT("3rd Rotor")),
                                      wxVERTICAL);

    wxString InitialPosition3ChoiceChoices[] = {wxT("A"), wxT("B"), wxT("C"), wxT("D"), wxT("E"), wxT("F"), wxT("G"),
                                                wxT("H"), wxT("I"), wxT("J"), wxT("K"), wxT("L"), wxT("M"), wxT("N"),
                                                wxT("O"), wxT("P"), wxT("Q"), wxT("R"), wxT("S"), wxT("T"), wxT("U"),
                                                wxT("V"), wxT("W"), wxT("X"), wxT("Y"), wxT("Z")};
    int InitialPosition3ChoiceNChoices = sizeof(InitialPosition3ChoiceChoices) / sizeof(wxString);
    InitialPosition3Choice = new wxChoice(sbSizer131->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                          InitialPosition3ChoiceNChoices, InitialPosition3ChoiceChoices, 0);
    InitialPosition3Choice->SetSelection(0);
    sbSizer131->Add(InitialPosition3Choice, 0, wxALL | wxEXPAND, 5);


    sbSizer41->Add(sbSizer131, 1, wxEXPAND, 5);


    bSizer28->Add(sbSizer41, 0, wxEXPAND, 5);


    bSizer27->Add(bSizer28, 1, wxEXPAND, 5);


    MainPreferencesPage->SetSizer(bSizer27);
    MainPreferencesPage->Layout();
    bSizer27->Fit(MainPreferencesPage);
    PreferencesNotebook->AddPage(MainPreferencesPage, wxT("Main"), false);
    PlugBoardSettingsPage = new wxPanel(PreferencesNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                        wxTAB_TRAVERSAL);
    wxBoxSizer *bSizer44;
    bSizer44 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer45;
    bSizer45 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer15;
    bSizer15 = new wxBoxSizer(wxHORIZONTAL);

    PlugBoardwxStringField = new wxTextCtrl(PlugBoardSettingsPage, wxID_ANY, wxEmptyString, wxDefaultPosition,
                                            wxDefaultSize, wxTE_READONLY);
    bSizer15->Add(PlugBoardwxStringField, 1, wxALL | wxEXPAND, 5);


    bSizer45->Add(bSizer15, 1, wxEXPAND, 5);


    bSizer44->Add(bSizer45, 0, wxEXPAND, 5);

    wxBoxSizer *bSizer18;
    bSizer18 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer19;
    bSizer19 = new wxBoxSizer(wxHORIZONTAL);

    m_toggleBtn_Q = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("Q"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_Q, 1, wxALL, 5);

    m_toggleBtn_W = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("W"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_W, 1, wxALL, 5);

    m_toggleBtn_E = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("E"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_E, 1, wxALL, 5);

    m_toggleBtn_R = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("R"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_R, 1, wxALL, 5);

    m_toggleBtn_T = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("T"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_T, 1, wxALL, 5);

    m_toggleBtn_Y = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("Y"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_Y, 1, wxALL, 5);

    m_toggleBtn_U = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("U"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_U, 1, wxALL, 5);

    m_toggleBtn_I = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("I"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_I, 1, wxALL, 5);

    m_toggleBtn_O = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("O"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_O, 1, wxALL, 5);

    m_toggleBtn_P = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("P"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer19->Add(m_toggleBtn_P, 1, wxALL, 5);


    bSizer18->Add(bSizer19, 1, wxEXPAND, 5);

    wxBoxSizer *bSizer20;
    bSizer20 = new wxBoxSizer(wxHORIZONTAL);

    m_toggleBtn_A = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("A"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_A, 1, wxALL, 5);

    m_toggleBtn_S = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("S"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_S, 1, wxALL, 5);

    m_toggleBtn_D = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("D"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_D, 1, wxALL, 5);

    m_toggleBtn_F = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("F"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_F, 1, wxALL, 5);

    m_toggleBtn_G = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("G"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_G, 1, wxALL, 5);

    m_toggleBtn_H = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("H"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_H, 1, wxALL, 5);

    m_toggleBtn_J = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("J"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_J, 1, wxALL, 5);

    m_toggleBtn_K = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("K"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_K, 1, wxALL, 5);

    m_toggleBtn_L = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("L"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer20->Add(m_toggleBtn_L, 1, wxALL, 5);


    bSizer18->Add(bSizer20, 1, wxEXPAND, 5);

    wxBoxSizer *bSizer211;
    bSizer211 = new wxBoxSizer(wxHORIZONTAL);

    m_toggleBtn_Z = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("Z"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer211->Add(m_toggleBtn_Z, 1, wxALL, 5);

    m_toggleBtn_X = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("X"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer211->Add(m_toggleBtn_X, 1, wxALL, 5);

    m_toggleBtn_C = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("C"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer211->Add(m_toggleBtn_C, 1, wxALL, 5);

    m_toggleBtn_V = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("V"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer211->Add(m_toggleBtn_V, 1, wxALL, 5);

    m_toggleBtn_B = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("B"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer211->Add(m_toggleBtn_B, 1, wxALL, 5);

    m_toggleBtn_N = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("N"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer211->Add(m_toggleBtn_N, 1, wxALL, 5);

    m_toggleBtn_M = new wxToggleButton(PlugBoardSettingsPage, wxID_ANY, wxT("M"), wxDefaultPosition, wxDefaultSize,
                                       wxBU_EXACTFIT);
    bSizer211->Add(m_toggleBtn_M, 1, wxALL, 5);


    bSizer18->Add(bSizer211, 1, wxEXPAND, 5);

    bSizer44->Add(bSizer18, 0, wxEXPAND, 5);


    PlugBoardSettingsPage->SetSizer(bSizer44);
    PlugBoardSettingsPage->Layout();
    bSizer44->Fit(PlugBoardSettingsPage);
    PreferencesNotebook->AddPage(PlugBoardSettingsPage, wxT("PlugBoard"), false);

    bSizer21->Add(PreferencesNotebook, 1, wxEXPAND | wxALL, 5);

    StdButtons = new wxStdDialogButtonSizer();
    StdButtonsOK = new wxButton(this, wxID_OK);
    StdButtons->AddButton(StdButtonsOK);
    StdButtonsCancel = new wxButton(this, wxID_CANCEL);
    StdButtons->AddButton(StdButtonsCancel);
    StdButtons->Realize();

    bSizer21->Add(StdButtons, 0, wxBOTTOM | wxEXPAND, 5);


    bSizer5->Add(bSizer21, 1, wxEXPAND, 5);


    this->SetSizer(bSizer5);
    this->Layout();
    bSizer5->Fit(this);

    this->Centre(wxBOTH);

    // Connect Events
    m_toggleBtn_Q->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_Q), NULL, this);
    m_toggleBtn_W->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_W), NULL, this);
    m_toggleBtn_E->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_E), NULL, this);
    m_toggleBtn_R->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_R), NULL, this);
    m_toggleBtn_T->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_T), NULL, this);
    m_toggleBtn_Y->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_Y), NULL, this);
    m_toggleBtn_U->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_U), NULL, this);
    m_toggleBtn_I->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_I), NULL, this);
    m_toggleBtn_O->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_O), NULL, this);
    m_toggleBtn_P->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_P), NULL, this);
    m_toggleBtn_A->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_A), NULL, this);
    m_toggleBtn_S->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_S), NULL, this);
    m_toggleBtn_D->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_D), NULL, this);
    m_toggleBtn_F->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_F), NULL, this);
    m_toggleBtn_G->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_G), NULL, this);
    m_toggleBtn_H->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_H), NULL, this);
    m_toggleBtn_J->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_J), NULL, this);
    m_toggleBtn_K->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_K), NULL, this);
    m_toggleBtn_L->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_L), NULL, this);
    m_toggleBtn_Z->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_Z), NULL, this);
    m_toggleBtn_X->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_X), NULL, this);
    m_toggleBtn_C->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_C), NULL, this);
    m_toggleBtn_V->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_V), NULL, this);
    m_toggleBtn_B->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_B), NULL, this);
    m_toggleBtn_N->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_N), NULL, this);
    m_toggleBtn_M->Connect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                           wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_M), NULL, this);
    StdButtonsOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreferencesDialogBase::OnOkButtonClick),
                          NULL, this);
}

PreferencesDialogBase::~PreferencesDialogBase() {
    // Disconnect Events
    m_toggleBtn_Q->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_Q), NULL, this);
    m_toggleBtn_W->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_W), NULL, this);
    m_toggleBtn_E->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_E), NULL, this);
    m_toggleBtn_R->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_R), NULL, this);
    m_toggleBtn_T->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_T), NULL, this);
    m_toggleBtn_Y->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_Y), NULL, this);
    m_toggleBtn_U->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_U), NULL, this);
    m_toggleBtn_I->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_I), NULL, this);
    m_toggleBtn_O->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_O), NULL, this);
    m_toggleBtn_P->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_P), NULL, this);
    m_toggleBtn_A->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_A), NULL, this);
    m_toggleBtn_S->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_S), NULL, this);
    m_toggleBtn_D->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_D), NULL, this);
    m_toggleBtn_F->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_F), NULL, this);
    m_toggleBtn_G->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_G), NULL, this);
    m_toggleBtn_H->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_H), NULL, this);
    m_toggleBtn_J->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_J), NULL, this);
    m_toggleBtn_K->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_K), NULL, this);
    m_toggleBtn_L->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_L), NULL, this);
    m_toggleBtn_Z->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_Z), NULL, this);
    m_toggleBtn_X->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_X), NULL, this);
    m_toggleBtn_C->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_C), NULL, this);
    m_toggleBtn_V->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_V), NULL, this);
    m_toggleBtn_B->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_B), NULL, this);
    m_toggleBtn_N->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_N), NULL, this);
    m_toggleBtn_M->Disconnect(wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,
                              wxCommandEventHandler(PreferencesDialogBase::OnToggleButton_M), NULL, this);
    StdButtonsOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                             wxCommandEventHandler(PreferencesDialogBase::OnOkButtonClick), NULL, this);

}


AboutDialogBase::AboutDialogBase(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos,
                                 const wxSize &size, long style) : wxDialog(parent, id, title, pos, size, style) {
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer *bSizer68;
    bSizer68 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer69;
    bSizer69 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer70;
    bSizer70 = new wxBoxSizer(wxVERTICAL);

    bSizer70->SetMinSize(wxSize(-1, 78));
    m_panel12 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    m_panel12->SetBackgroundColour(wxColour(10, 108, 205));

    wxBoxSizer *bSizer71;
    bSizer71 = new wxBoxSizer(wxVERTICAL);


    bSizer71->Add(0, 0, 1, wxEXPAND, 5);

    wxBoxSizer *bSizer72;
    bSizer72 = new wxBoxSizer(wxVERTICAL);

    m_bitmap1 = new wxStaticBitmap(m_panel12, wxID_ANY, ENIGMA_M3_bmp_to_wx_bitmap(), wxDefaultPosition, wxDefaultSize,
                                   0);

    bSizer72->Add(m_bitmap1, 0, wxALL, 5);


    bSizer71->Add(bSizer72, 1, wxEXPAND, 5);


    m_panel12->SetSizer(bSizer71);
    m_panel12->Layout();
    bSizer71->Fit(m_panel12);
    bSizer70->Add(m_panel12, 1, wxEXPAND, 5);


    bSizer69->Add(bSizer70, 0, wxEXPAND, 5);

    wxBoxSizer *bSizer74;
    bSizer74 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer75;
    bSizer75 = new wxBoxSizer(wxVERTICAL);

    VersionStaticText = new wxStaticText(this, wxID_ANY, wxT(EM3_APP_NAME " v" VERSION_STRING), wxDefaultPosition,
                                         wxDefaultSize, 0);
    VersionStaticText->Wrap(-1);
    bSizer75->Add(VersionStaticText, 0, wxALL, 5);


    bSizer75->Add(0, 0, 1, wxEXPAND, 5);

    CopyrightStaticText = new wxStaticText(this, wxID_ANY, wxT(EM3_STR_RELEASED_BY), wxDefaultPosition, wxDefaultSize,
                                           0);

    CopyrightStaticText->Wrap(-1);
    bSizer75->Add(CopyrightStaticText, 0, wxALL, 5);


    bSizer75->Add(0, 0, 1, wxEXPAND, 5);

    WebsiteHyperlink = new wxHyperlinkCtrl(this, wxID_ANY, wxT("https://github.com/KaseyJenkins/EnigmaM3"),
                                           wxT("https://github.com/KaseyJenkins/EnigmaM3"), wxDefaultPosition,
                                           wxDefaultSize, wxHL_DEFAULT_STYLE);
    bSizer75->Add(WebsiteHyperlink, 0, wxALL, 5);


    bSizer74->Add(bSizer75, 1, wxEXPAND, 5);


    bSizer69->Add(bSizer74, 1, wxALL | wxEXPAND, 15);

    m_staticline7 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    bSizer69->Add(m_staticline7, 0, wxALL | wxEXPAND, 5);

    wxBoxSizer *bSizer73;
    bSizer73 = new wxBoxSizer(wxHORIZONTAL);


    bSizer73->Add(0, 0, 1, wxEXPAND, 5);

    OKButton = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer73->Add(OKButton, 0, wxALL, 5);


    bSizer73->Add(0, 0, 1, wxEXPAND, 5);


    bSizer69->Add(bSizer73, 0, wxEXPAND, 5);


    bSizer68->Add(bSizer69, 1, wxEXPAND, 5);


    this->SetSizer(bSizer68);
    this->Layout();
    bSizer68->Fit(this);

    this->Centre(wxBOTH);

    // Connect Events
    WebsiteHyperlink->Connect(wxEVT_COMMAND_HYPERLINK,
                              wxHyperlinkEventHandler(AboutDialogBase::OnWebsiteHyperlinkClick), NULL, this);

}

AboutDialogBase::~AboutDialogBase() {
    // Disconnect Events
    WebsiteHyperlink->Disconnect(wxEVT_COMMAND_HYPERLINK,
                                 wxHyperlinkEventHandler(AboutDialogBase::OnWebsiteHyperlinkClick), NULL, this);
}
