///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Layout.h"

///////////////////////////////////////////////////////////////////////////
using namespace Tg_Jom;

MainFrameLayout::MainFrameLayout( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxGridBagSizer* m_mainSizer;
	m_mainSizer = new wxGridBagSizer( 0, 0 );
	m_mainSizer->SetFlexibleDirection( wxBOTH );
	m_mainSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_dataViewList = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_MULTIPLE|wxDV_NO_HEADER|wxBORDER_NONE|wxTAB_TRAVERSAL );
	m_dataViewList->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_dataViewList->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_dataViewList->SetBackgroundColour( wxColour( 184, 187, 220 ) );

	m_mainSizer->Add( m_dataViewList, wxGBPosition( 0, 0 ), wxGBSpan( 1, 1 ), wxEXPAND|wxALL, 5 );

	m_directoryPicker = new wxDirPickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxSize( -1,-1 ), wxDIRP_DEFAULT_STYLE|wxDIRP_USE_TEXTCTRL );
	m_directoryPicker->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_directoryPicker->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_directoryPicker->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_directoryPicker->SetToolTip( wxT("Select your mods folder.") );
	m_directoryPicker->SetMinSize( wxSize( -1,25 ) );

	m_mainSizer->Add( m_directoryPicker, wxGBPosition( 1, 0 ), wxGBSpan( 1, 1 ), wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );

	m_richText = new wxRichTextCtrl( this, wxID_ANY, wxT("NaN"), wxDefaultPosition, wxDefaultSize, 0|wxVSCROLL|wxHSCROLL|wxNO_BORDER|wxWANTS_CHARS );
	m_richText->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_richText->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	m_richText->SetBackgroundColour( wxColour( 184, 187, 220 ) );

	m_mainSizer->Add( m_richText, wxGBPosition( 0, 1 ), wxGBSpan( 2, 1 ), wxALL|wxEXPAND, 5 );


	m_mainSizer->AddGrowableCol( 0 );
	m_mainSizer->AddGrowableCol( 1 );
	m_mainSizer->AddGrowableRow( 0 );

	this->SetSizer( m_mainSizer );
	this->Layout();

	this->Centre( wxBOTH );
}

MainFrameLayout::~MainFrameLayout()
{
}
