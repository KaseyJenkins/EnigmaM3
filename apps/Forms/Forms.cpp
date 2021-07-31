///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Forms.h"

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

    wxBoxSizer *bSizer5;
    bSizer5 = new wxBoxSizer(wxVERTICAL);

    m_panel6 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxStaticBoxSizer *sbSizer14;
    sbSizer14 = new wxStaticBoxSizer(new wxStaticBox(m_panel6, wxID_ANY, wxT("Reflector")), wxVERTICAL);

    wxBoxSizer *bSizer111;
    bSizer111 = new wxBoxSizer(wxHORIZONTAL);

    wxString ReflectorChoiceChoices[] = {wxT("UKW-B"), wxT("UKW-C")};
    int ReflectorChoiceNChoices = sizeof(ReflectorChoiceChoices) / sizeof(wxString);
    ReflectorChoice = new wxChoice(sbSizer14->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                   ReflectorChoiceNChoices, ReflectorChoiceChoices, 0);
    ReflectorChoice->SetSelection(0);
    bSizer111->Add(ReflectorChoice, 0, wxALL, 5);


    sbSizer14->Add(bSizer111, 0, wxEXPAND, 5);


    m_panel6->SetSizer(sbSizer14);
    m_panel6->Layout();
    sbSizer14->Fit(m_panel6);
    bSizer5->Add(m_panel6, 0, wxEXPAND | wxALL, 5);

    m_panel2 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    m_panel2->SetFont(
            wxFont(wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false,
                   wxEmptyString));

    wxStaticBoxSizer *sbSizer2;
    sbSizer2 = new wxStaticBoxSizer(new wxStaticBox(m_panel2, wxID_ANY, wxT("Rotor")), wxVERTICAL);

    wxBoxSizer *bSizer7;
    bSizer7 = new wxBoxSizer(wxHORIZONTAL);

    wxStaticBoxSizer *sbSizer5;
    sbSizer5 = new wxStaticBoxSizer(new wxStaticBox(sbSizer2->GetStaticBox(), wxID_ANY, wxT("1st Rotor")), wxVERTICAL);

    wxString Rotor1ChoiceChoices[] = {wxT("I"), wxT("II"), wxT("III"), wxT("IV"), wxT("V"), wxT("VI"), wxT("VII"),
                                      wxT("VII"), wxT("VIII")};
    int Rotor1ChoiceNChoices = sizeof(Rotor1ChoiceChoices) / sizeof(wxString);
    Rotor1Choice = new wxChoice(sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                Rotor1ChoiceNChoices, Rotor1ChoiceChoices, 0);
    Rotor1Choice->SetSelection(0);
    sbSizer5->Add(Rotor1Choice, 1, wxALL | wxEXPAND, 5);


    bSizer7->Add(sbSizer5, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer6;
    sbSizer6 = new wxStaticBoxSizer(new wxStaticBox(sbSizer2->GetStaticBox(), wxID_ANY, wxT("2nd Rotor")), wxVERTICAL);

    wxString Rotor2ChoiceChoices[] = {wxT("I"), wxT("II"), wxT("III"), wxT("IV"), wxT("V"), wxT("VI"), wxT("VII"),
                                      wxT("VII"), wxT("VIII")};
    int Rotor2ChoiceNChoices = sizeof(Rotor2ChoiceChoices) / sizeof(wxString);
    Rotor2Choice = new wxChoice(sbSizer6->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                Rotor2ChoiceNChoices, Rotor2ChoiceChoices, 0);
    Rotor2Choice->SetSelection(0);
    sbSizer6->Add(Rotor2Choice, 1, wxALL | wxEXPAND, 5);


    bSizer7->Add(sbSizer6, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer7;
    sbSizer7 = new wxStaticBoxSizer(new wxStaticBox(sbSizer2->GetStaticBox(), wxID_ANY, wxT("3rd Rotor")), wxVERTICAL);

    wxString Rotor3ChoiceChoices[] = {wxT("I"), wxT("II"), wxT("III"), wxT("IV"), wxT("V"), wxT("VI"), wxT("VII"),
                                      wxT("VII"), wxT("VIII")};
    int Rotor3ChoiceNChoices = sizeof(Rotor3ChoiceChoices) / sizeof(wxString);
    Rotor3Choice = new wxChoice(sbSizer7->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                Rotor3ChoiceNChoices, Rotor3ChoiceChoices, 0);
    Rotor3Choice->SetSelection(0);
    sbSizer7->Add(Rotor3Choice, 1, wxALL | wxEXPAND, 5);


    bSizer7->Add(sbSizer7, 1, wxEXPAND, 5);


    sbSizer2->Add(bSizer7, 0, wxEXPAND, 0);


    m_panel2->SetSizer(sbSizer2);
    m_panel2->Layout();
    sbSizer2->Fit(m_panel2);
    bSizer5->Add(m_panel2, 1, wxEXPAND | wxALL, 5);

    m_panel3 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxStaticBoxSizer *sbSizer3;
    sbSizer3 = new wxStaticBoxSizer(new wxStaticBox(m_panel3, wxID_ANY, wxT("Ring Setting")), wxVERTICAL);

    wxBoxSizer *bSizer8;
    bSizer8 = new wxBoxSizer(wxHORIZONTAL);

    wxStaticBoxSizer *sbSizer8;
    sbSizer8 = new wxStaticBoxSizer(new wxStaticBox(sbSizer3->GetStaticBox(), wxID_ANY, wxT("1st Rotor")), wxVERTICAL);

    wxString Ring1ChoiceChoices[] = {wxT("0"), wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5"), wxT("6"), wxT("7"),
                                     wxT("8"), wxT("9"), wxT("10"), wxT("11"), wxT("12"), wxT("13"), wxT("14"),
                                     wxT("15"), wxT("16"), wxT("17"), wxT("18"), wxT("19"), wxT("20"), wxT("21"),
                                     wxT("22"), wxT("23"), wxT("24"), wxT("25")};
    int Ring1ChoiceNChoices = sizeof(Ring1ChoiceChoices) / sizeof(wxString);
    Ring1Choice = new wxChoice(sbSizer8->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                               Ring1ChoiceNChoices, Ring1ChoiceChoices, 0);
    Ring1Choice->SetSelection(0);
    sbSizer8->Add(Ring1Choice, 0, wxALL | wxEXPAND, 5);


    bSizer8->Add(sbSizer8, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer9;
    sbSizer9 = new wxStaticBoxSizer(new wxStaticBox(sbSizer3->GetStaticBox(), wxID_ANY, wxT("2nd Rotor")), wxVERTICAL);

    wxString Ring2ChoiceChoices[] = {wxT("0"), wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5"), wxT("6"), wxT("7"),
                                     wxT("8"), wxT("9"), wxT("10"), wxT("11"), wxT("12"), wxT("13"), wxT("14"),
                                     wxT("15"), wxT("16"), wxT("17"), wxT("18"), wxT("19"), wxT("20"), wxT("21"),
                                     wxT("22"), wxT("23"), wxT("24"), wxT("25")};
    int Ring2ChoiceNChoices = sizeof(Ring2ChoiceChoices) / sizeof(wxString);
    Ring2Choice = new wxChoice(sbSizer9->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                               Ring2ChoiceNChoices, Ring2ChoiceChoices, 0);
    Ring2Choice->SetSelection(0);
    sbSizer9->Add(Ring2Choice, 0, wxALL | wxEXPAND, 5);


    bSizer8->Add(sbSizer9, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer10;
    sbSizer10 = new wxStaticBoxSizer(new wxStaticBox(sbSizer3->GetStaticBox(), wxID_ANY, wxT("3rd Rotor")), wxVERTICAL);

    wxString Ring3ChoiceChoices[] = {wxT("0"), wxT("1"), wxT("2"), wxT("3"), wxT("4"), wxT("5"), wxT("6"), wxT("7"),
                                     wxT("8"), wxT("9"), wxT("10"), wxT("11"), wxT("12"), wxT("13"), wxT("14"),
                                     wxT("15"), wxT("16"), wxT("17"), wxT("18"), wxT("19"), wxT("20"), wxT("21"),
                                     wxT("22"), wxT("23"), wxT("24"), wxT("25")};
    int Ring3ChoiceNChoices = sizeof(Ring3ChoiceChoices) / sizeof(wxString);
    Ring3Choice = new wxChoice(sbSizer10->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                               Ring3ChoiceNChoices, Ring3ChoiceChoices, 0);
    Ring3Choice->SetSelection(0);
    sbSizer10->Add(Ring3Choice, 0, wxALL | wxEXPAND, 5);


    bSizer8->Add(sbSizer10, 1, wxEXPAND, 5);


    sbSizer3->Add(bSizer8, 1, wxEXPAND, 5);


    m_panel3->SetSizer(sbSizer3);
    m_panel3->Layout();
    sbSizer3->Fit(m_panel3);
    bSizer5->Add(m_panel3, 1, wxEXPAND | wxALL, 5);

    m_panel4 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxStaticBoxSizer *sbSizer4;
    sbSizer4 = new wxStaticBoxSizer(new wxStaticBox(m_panel4, wxID_ANY, wxT("Initial Position")), wxVERTICAL);

    wxBoxSizer *bSizer9;
    bSizer9 = new wxBoxSizer(wxHORIZONTAL);

    wxStaticBoxSizer *sbSizer11;
    sbSizer11 = new wxStaticBoxSizer(new wxStaticBox(sbSizer4->GetStaticBox(), wxID_ANY, wxT("1st Rotor")), wxVERTICAL);

    wxString InitialPosition1ChoiceChoices[] = {wxT("A"), wxT("B"), wxT("C"), wxT("D"), wxT("E"), wxT("F"), wxT("G"),
                                                wxT("H"), wxT("I"), wxT("J"), wxT("K"), wxT("L"), wxT("M"), wxT("N"),
                                                wxT("O"), wxT("P"), wxT("Q"), wxT("R"), wxT("S"), wxT("T"), wxT("U"),
                                                wxT("V"), wxT("W"), wxT("X"), wxT("Y"), wxT("Z")};
    int InitialPosition1ChoiceNChoices = sizeof(InitialPosition1ChoiceChoices) / sizeof(wxString);
    InitialPosition1Choice = new wxChoice(sbSizer11->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                          InitialPosition1ChoiceNChoices, InitialPosition1ChoiceChoices, 0);
    InitialPosition1Choice->SetSelection(0);
    sbSizer11->Add(InitialPosition1Choice, 0, wxALL | wxEXPAND, 5);


    bSizer9->Add(sbSizer11, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer12;
    sbSizer12 = new wxStaticBoxSizer(new wxStaticBox(sbSizer4->GetStaticBox(), wxID_ANY, wxT("2nd Rotor")), wxVERTICAL);

    wxString InitialPosition2ChoiceChoices[] = {wxT("A"), wxT("B"), wxT("C"), wxT("D"), wxT("E"), wxT("F"), wxT("G"),
                                                wxT("H"), wxT("I"), wxT("J"), wxT("K"), wxT("L"), wxT("M"), wxT("N"),
                                                wxT("O"), wxT("P"), wxT("Q"), wxT("R"), wxT("S"), wxT("T"), wxT("U"),
                                                wxT("V"), wxT("W"), wxT("X"), wxT("Y"), wxT("Z")};
    int InitialPosition2ChoiceNChoices = sizeof(InitialPosition2ChoiceChoices) / sizeof(wxString);
    InitialPosition2Choice = new wxChoice(sbSizer12->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                          InitialPosition2ChoiceNChoices, InitialPosition2ChoiceChoices, 0);
    InitialPosition2Choice->SetSelection(0);
    sbSizer12->Add(InitialPosition2Choice, 0, wxALL | wxEXPAND, 5);


    bSizer9->Add(sbSizer12, 1, wxEXPAND, 5);

    wxStaticBoxSizer *sbSizer13;
    sbSizer13 = new wxStaticBoxSizer(new wxStaticBox(sbSizer4->GetStaticBox(), wxID_ANY, wxT("3rd Rotor")), wxVERTICAL);

    wxString InitialPosition3ChoiceChoices[] = {wxT("A"), wxT("B"), wxT("C"), wxT("D"), wxT("E"), wxT("F"), wxT("G"),
                                                wxT("H"), wxT("I"), wxT("J"), wxT("K"), wxT("L"), wxT("M"), wxT("N"),
                                                wxT("O"), wxT("P"), wxT("Q"), wxT("R"), wxT("S"), wxT("T"), wxT("U"),
                                                wxT("V"), wxT("W"), wxT("X"), wxT("Y"), wxT("Z")};
    int InitialPosition3ChoiceNChoices = sizeof(InitialPosition3ChoiceChoices) / sizeof(wxString);
    InitialPosition3Choice = new wxChoice(sbSizer13->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize,
                                          InitialPosition3ChoiceNChoices, InitialPosition3ChoiceChoices, 0);
    InitialPosition3Choice->SetSelection(0);
    sbSizer13->Add(InitialPosition3Choice, 0, wxALL | wxEXPAND, 5);


    bSizer9->Add(sbSizer13, 1, wxEXPAND, 5);


    sbSizer4->Add(bSizer9, 1, wxEXPAND, 5);


    m_panel4->SetSizer(sbSizer4);
    m_panel4->Layout();
    sbSizer4->Fit(m_panel4);
    bSizer5->Add(m_panel4, 1, wxEXPAND | wxALL, 5);

    m_panel5 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer *bSizer10;
    bSizer10 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *bSizer11;
    bSizer11 = new wxBoxSizer(wxHORIZONTAL);

    m_button4 = new wxButton(m_panel5, wxID_ANY, wxT("More Settings..."), wxDefaultPosition, wxDefaultSize, 0);
    m_menu4 = new wxMenu();
    wxMenuItem *PlugBoardSettingsMenuItem;
    PlugBoardSettingsMenuItem = new wxMenuItem(m_menu4, wxID_ANY, wxString(wxT("PlugBoard Settings...")), wxEmptyString,
                                               wxITEM_NORMAL);
    m_menu4->Append(PlugBoardSettingsMenuItem);

    //m_button4->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(PreferencesDialogBase::m_button4OnContextMenu), NULL, this);

    bSizer11->Add(m_button4, 14, wxALL, 5);

    m_button2 = new wxButton(m_panel5, wxID_ANY, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer11->Add(m_button2, 10, wxALL, 5);

    m_button3 = new wxButton(m_panel5, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer11->Add(m_button3, 10, wxALL, 5);


    bSizer10->Add(bSizer11, 1, wxEXPAND, 5);


    m_panel5->SetSizer(bSizer10);
    m_panel5->Layout();
    bSizer10->Fit(m_panel5);
    bSizer5->Add(m_panel5, 0, wxALL | wxEXPAND, 5);


    this->SetSizer(bSizer5);
    this->Layout();
    bSizer5->Fit(this);

    this->Centre(wxBOTH);

    // Connect Events
    m_button2->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &PreferencesDialogBase::OnOkButtonClick, this);
    m_button3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(PreferencesDialogBase::OnCancelButtonClick),
                       NULL, this);
    m_button4->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                       wxCommandEventHandler(PreferencesDialogBase::OnMoreSettingsButtonClick), NULL, this);
    m_menu4->Bind(wxEVT_COMMAND_MENU_SELECTED,
                  wxCommandEventHandler(PreferencesDialogBase::OnPlugBoardSettingsMenuItemSelected), this,
                  PlugBoardSettingsMenuItem->GetId());

}

PreferencesDialogBase::~PreferencesDialogBase() {
    // Disconnect Events
    m_button2->Unbind(wxEVT_COMMAND_BUTTON_CLICKED, &PreferencesDialogBase::OnOkButtonClick, this);
    m_button3->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                          wxCommandEventHandler(PreferencesDialogBase::OnCancelButtonClick), NULL, this);
    m_button4->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                          wxCommandEventHandler(PreferencesDialogBase::OnMoreSettingsButtonClick), NULL, this);


    delete m_menu4;
}

PlugBoardSettingsDialogBase::PlugBoardSettingsDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    wxBoxSizer* bSizer13;
    bSizer13 = new wxBoxSizer( wxVERTICAL );

    m_panel7 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer14;
    bSizer14 = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizer15;
    bSizer15 = new wxBoxSizer( wxHORIZONTAL );

    m_textCtrl3 = new wxTextCtrl( m_panel7, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    bSizer15->Add( m_textCtrl3, 1, wxALL|wxEXPAND, 5 );


    bSizer14->Add( bSizer15, 1, wxEXPAND, 5 );


    m_panel7->SetSizer( bSizer14 );
    m_panel7->Layout();
    bSizer14->Fit( m_panel7 );
    bSizer13->Add( m_panel7, 0, wxALL|wxEXPAND, 5 );

    m_panel8 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer18;
    bSizer18 = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizer19;
    bSizer19 = new wxBoxSizer( wxHORIZONTAL );

    m_toggleBtn_Q = new wxToggleButton( m_panel8, wxID_ANY, wxT("Q"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_Q, 1, wxALL, 5 );

    m_toggleBtn_W = new wxToggleButton( m_panel8, wxID_ANY, wxT("W"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_W, 1, wxALL, 5 );

    m_toggleBtn_E = new wxToggleButton( m_panel8, wxID_ANY, wxT("E"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_E, 1, wxALL, 5 );

    m_toggleBtn_R = new wxToggleButton( m_panel8, wxID_ANY, wxT("R"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_R, 1, wxALL, 5 );

    m_toggleBtn_T = new wxToggleButton( m_panel8, wxID_ANY, wxT("T"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_T, 1, wxALL, 5 );

    m_toggleBtn_Y = new wxToggleButton( m_panel8, wxID_ANY, wxT("Y"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_Y, 1, wxALL, 5 );

    m_toggleBtn_U = new wxToggleButton( m_panel8, wxID_ANY, wxT("U"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_U, 1, wxALL, 5 );

    m_toggleBtn_I = new wxToggleButton( m_panel8, wxID_ANY, wxT("I"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_I, 1, wxALL, 5 );

    m_toggleBtn_O = new wxToggleButton( m_panel8, wxID_ANY, wxT("O"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_O, 1, wxALL, 5 );

    m_toggleBtn_P = new wxToggleButton( m_panel8, wxID_ANY, wxT("P"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer19->Add( m_toggleBtn_P, 1, wxALL, 5 );


    bSizer18->Add( bSizer19, 1, wxEXPAND, 5 );

    wxBoxSizer* bSizer20;
    bSizer20 = new wxBoxSizer( wxHORIZONTAL );

    m_toggleBtn_A = new wxToggleButton( m_panel8, wxID_ANY, wxT("A"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_A, 1, wxALL, 5 );

    m_toggleBtn_S = new wxToggleButton( m_panel8, wxID_ANY, wxT("S"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_S, 1, wxALL, 5 );

    m_toggleBtn_D = new wxToggleButton( m_panel8, wxID_ANY, wxT("D"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_D, 1, wxALL, 5 );

    m_toggleBtn_F = new wxToggleButton( m_panel8, wxID_ANY, wxT("F"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_F, 1, wxALL, 5 );

    m_toggleBtn_G = new wxToggleButton( m_panel8, wxID_ANY, wxT("G"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_G, 1, wxALL, 5 );

    m_toggleBtn_H = new wxToggleButton( m_panel8, wxID_ANY, wxT("H"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_H, 1, wxALL, 5 );

    m_toggleBtn_J = new wxToggleButton( m_panel8, wxID_ANY, wxT("J"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_J, 1, wxALL, 5 );

    m_toggleBtn_K = new wxToggleButton( m_panel8, wxID_ANY, wxT("K"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_K, 1, wxALL, 5 );

    m_toggleBtn_L = new wxToggleButton( m_panel8, wxID_ANY, wxT("L"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer20->Add( m_toggleBtn_L, 1, wxALL, 5 );


    bSizer18->Add( bSizer20, 1, wxEXPAND, 5 );

    wxBoxSizer* bSizer21;
    bSizer21 = new wxBoxSizer( wxHORIZONTAL );

    m_toggleBtn_Z = new wxToggleButton( m_panel8, wxID_ANY, wxT("Z"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer21->Add( m_toggleBtn_Z, 1, wxALL, 5 );

    m_toggleBtn_X = new wxToggleButton( m_panel8, wxID_ANY, wxT("X"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer21->Add( m_toggleBtn_X, 1, wxALL, 5 );

    m_toggleBtn_C = new wxToggleButton( m_panel8, wxID_ANY, wxT("C"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer21->Add( m_toggleBtn_C, 1, wxALL, 5 );

    m_toggleBtn_V = new wxToggleButton( m_panel8, wxID_ANY, wxT("V"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer21->Add( m_toggleBtn_V, 1, wxALL, 5 );

    m_toggleBtn_B = new wxToggleButton( m_panel8, wxID_ANY, wxT("B"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer21->Add( m_toggleBtn_B, 1, wxALL, 5 );

    m_toggleBtn_N = new wxToggleButton( m_panel8, wxID_ANY, wxT("N"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer21->Add( m_toggleBtn_N, 1, wxALL, 5 );

    m_toggleBtn_M = new wxToggleButton( m_panel8, wxID_ANY, wxT("M"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
    bSizer21->Add( m_toggleBtn_M, 1, wxALL, 5 );


    bSizer18->Add( bSizer21, 1, wxEXPAND, 5 );


    m_panel8->SetSizer( bSizer18 );
    m_panel8->Layout();
    bSizer18->Fit( m_panel8 );
    bSizer13->Add( m_panel8, 0, wxEXPAND | wxALL, 5 );

    m_panel9 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
    wxBoxSizer* bSizer16;
    bSizer16 = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* bSizer17;
    bSizer17 = new wxBoxSizer( wxHORIZONTAL );

    m_button5 = new wxButton( m_panel9, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer17->Add( m_button5, 0, wxALL, 5 );

    m_button6 = new wxButton( m_panel9, wxID_ANY, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer17->Add( m_button6, 0, wxALL, 5 );

    m_button7 = new wxButton( m_panel9, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
    bSizer17->Add( m_button7, 0, wxALL, 5 );


    bSizer16->Add( bSizer17, 1, wxALIGN_RIGHT, 5 );


    m_panel9->SetSizer( bSizer16 );
    m_panel9->Layout();
    bSizer16->Fit( m_panel9 );
    bSizer13->Add( m_panel9, 0, wxALL|wxEXPAND, 5 );


    this->SetSizer( bSizer13 );
    this->Layout();
    bSizer13->Fit( this );

    this->Centre( wxBOTH );

    // Connect Events
    m_toggleBtn_Q->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_Q ), NULL, this );
    m_toggleBtn_W->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_W ), NULL, this );
    m_toggleBtn_E->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_E ), NULL, this );
    m_toggleBtn_R->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_R ), NULL, this );
    m_toggleBtn_T->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_T ), NULL, this );
    m_toggleBtn_Y->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_Y ), NULL, this );
    m_toggleBtn_U->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_U ), NULL, this );
    m_toggleBtn_I->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_I ), NULL, this );
    m_toggleBtn_O->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_O ), NULL, this );
    m_toggleBtn_P->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_P ), NULL, this );
    m_toggleBtn_A->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_A ), NULL, this );
    m_toggleBtn_S->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_S ), NULL, this );
    m_toggleBtn_D->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_D ), NULL, this );
    m_toggleBtn_F->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_F ), NULL, this );
    m_toggleBtn_G->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_G ), NULL, this );
    m_toggleBtn_H->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_H ), NULL, this );
    m_toggleBtn_J->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_J ), NULL, this );
    m_toggleBtn_K->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_K ), NULL, this );
    m_toggleBtn_L->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_L ), NULL, this );
    m_toggleBtn_Z->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_Z ), NULL, this );
    m_toggleBtn_X->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_X ), NULL, this );
    m_toggleBtn_C->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_C ), NULL, this );
    m_toggleBtn_V->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_V ), NULL, this );
    m_toggleBtn_B->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_B ), NULL, this );
    m_toggleBtn_N->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_N ), NULL, this );
    m_toggleBtn_M->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_M ), NULL, this );
    m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnResetButtonClick ), NULL, this );
    m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnOkButtonClick ), NULL, this );
    m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnCancelButtonClick ), NULL, this );
}

PlugBoardSettingsDialogBase::~PlugBoardSettingsDialogBase()
{
    // Disconnect Events
    m_toggleBtn_Q->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_Q ), NULL, this );
    m_toggleBtn_W->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_W ), NULL, this );
    m_toggleBtn_E->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_E ), NULL, this );
    m_toggleBtn_R->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_R ), NULL, this );
    m_toggleBtn_T->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_T ), NULL, this );
    m_toggleBtn_Y->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_Y ), NULL, this );
    m_toggleBtn_U->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_U ), NULL, this );
    m_toggleBtn_I->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_I ), NULL, this );
    m_toggleBtn_O->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_O ), NULL, this );
    m_toggleBtn_P->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_P ), NULL, this );
    m_toggleBtn_A->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_A ), NULL, this );
    m_toggleBtn_S->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_S ), NULL, this );
    m_toggleBtn_D->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_D ), NULL, this );
    m_toggleBtn_F->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_F ), NULL, this );
    m_toggleBtn_G->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_G ), NULL, this );
    m_toggleBtn_H->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_H ), NULL, this );
    m_toggleBtn_J->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_J ), NULL, this );
    m_toggleBtn_K->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_K ), NULL, this );
    m_toggleBtn_L->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_L ), NULL, this );
    m_toggleBtn_Z->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_Z ), NULL, this );
    m_toggleBtn_X->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_X ), NULL, this );
    m_toggleBtn_C->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_C ), NULL, this );
    m_toggleBtn_V->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_V ), NULL, this );
    m_toggleBtn_B->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_B ), NULL, this );
    m_toggleBtn_N->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_N ), NULL, this );
    m_toggleBtn_M->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnToggleButton_M ), NULL, this );
    m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnResetButtonClick ), NULL, this );
    m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnOkButtonClick ), NULL, this );
    m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PlugBoardSettingsDialogBase::OnCancelButtonClick ), NULL, this );

}