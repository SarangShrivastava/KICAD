///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 14 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Properties.h"

///////////////////////////////////////////////////////////////////////////

Properties::Properties( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_panel2 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText1 = new wxStaticText( m_panel2, wxID_ANY, wxT("Offset:"), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	fgSizer1->Add( m_staticText1, 0, wxALL, 5 );
	
	Offset_Field = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	Offset_Field->SetMaxLength( 0 ); 
	fgSizer1->Add( Offset_Field, 1, wxALL|wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( m_panel2, wxID_ANY, wxT("Amplitude:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	fgSizer1->Add( m_staticText3, 0, wxALL, 5 );
	
	Amplitude_Field = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	Amplitude_Field->SetMaxLength( 0 ); 
	fgSizer1->Add( Amplitude_Field, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText5 = new wxStaticText( m_panel2, wxID_ANY, wxT("Frequency:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer1->Add( m_staticText5, 0, wxALL, 5 );
	
	Frequency_Field = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	Frequency_Field->SetMaxLength( 0 ); 
	fgSizer1->Add( Frequency_Field, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText6 = new wxStaticText( m_panel2, wxID_ANY, wxT("Delay:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer1->Add( m_staticText6, 0, wxALL, 5 );
	
	Delay_Field = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	Delay_Field->SetMaxLength( 0 ); 
	fgSizer1->Add( Delay_Field, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText8 = new wxStaticText( m_panel2, wxID_ANY, wxT("Damping Factor:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer1->Add( m_staticText8, 0, wxALL, 5 );
	
	DampingFactor_Field = new wxTextCtrl( m_panel2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_TAB );
	DampingFactor_Field->SetMaxLength( 0 ); 
	fgSizer1->Add( DampingFactor_Field, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer5->Add( fgSizer1, 1, wxEXPAND, 5 );
	
	m_staticline1 = new wxStaticLine( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer5->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	Close_Button = new wxButton( m_panel2, wxID_ANY, wxT("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( Close_Button, 0, wxALL, 5 );
	
	Ok_Button = new wxButton( m_panel2, wxID_ANY, wxT("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( Ok_Button, 0, wxALL, 5 );
	
	
	bSizer5->Add( bSizer4, 0, wxALIGN_RIGHT, 5 );
	
	
	m_panel2->SetSizer( bSizer5 );
	m_panel2->Layout();
	bSizer5->Fit( m_panel2 );
	bSizer3->Add( m_panel2, 1, wxEXPAND|wxALL, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	// Connect Events
	Close_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Properties::CloseOnClick ), NULL, this );
	Ok_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Properties::OkOnClick ), NULL, this );
}

Properties::~Properties()
{
	// Disconnect Events
	Close_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Properties::CloseOnClick ), NULL, this );
	Ok_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Properties::OkOnClick ), NULL, this );
	
}
