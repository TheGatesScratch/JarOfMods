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
	this->SetSizeHints( wxSize( 500,300 ), wxDefaultSize );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	this->SetBackgroundColour( wxColour( 70, 70, 70 ) );

	wxBoxSizer* m_horSizer;
	m_horSizer = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* m_leftSizer;
	m_leftSizer = new wxBoxSizer( wxVERTICAL );

	m_staticTextMods = new wxStaticText( this, wxID_ANY, wxT("Mods"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMods->Wrap( -1 );
	m_staticTextMods->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_staticTextMods->SetForegroundColour( wxColour( 185, 185, 200 ) );

	m_leftSizer->Add( m_staticTextMods, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );

	m_dataViewListMods = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_MULTIPLE|wxDV_NO_HEADER|wxBORDER_NONE );
	m_dataViewListMods->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift Light") ) );
	m_dataViewListMods->SetBackgroundColour( wxColour( 90, 90, 90 ) );

	m_leftSizer->Add( m_dataViewListMods, 1, wxALL|wxEXPAND, 5 );

	m_dirPicker = new wxDirPickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE|wxDIRP_USE_TEXTCTRL );
	m_dirPicker->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );

	m_leftSizer->Add( m_dirPicker, 0, wxALL|wxEXPAND, 5 );


	m_horSizer->Add( m_leftSizer, 1, wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5 );

	wxBoxSizer* m_middleSizer;
	m_middleSizer = new wxBoxSizer( wxVERTICAL );

	m_staticTextDescription = new wxStaticText( this, wxID_ANY, wxT("Description"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDescription->Wrap( -1 );
	m_staticTextDescription->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_staticTextDescription->SetForegroundColour( wxColour( 185, 185, 200 ) );

	m_middleSizer->Add( m_staticTextDescription, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );

	m_richTextDescription = new wxRichTextCtrl( this, wxID_ANY, wxT("Empty..."), wxDefaultPosition, wxDefaultSize, 0|wxBORDER_NONE|wxHSCROLL|wxVSCROLL|wxWANTS_CHARS );
	m_richTextDescription->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_richTextDescription->SetBackgroundColour( wxColour( 110, 110, 110 ) );

	m_middleSizer->Add( m_richTextDescription, 10, wxEXPAND|wxALL, 5 );

	m_staticTextControl = new wxStaticText( this, wxID_ANY, wxT("Control"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextControl->Wrap( -1 );
	m_staticTextControl->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_staticTextControl->SetForegroundColour( wxColour( 185, 185, 200 ) );

	m_middleSizer->Add( m_staticTextControl, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );

	m_buttonsPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonsPanel->SetBackgroundColour( wxColour( 111, 120, 121 ) );

	wxBoxSizer* m_buttonsPanelSizer;
	m_buttonsPanelSizer = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* m_panelModsSizer;
	m_panelModsSizer = new wxBoxSizer( wxVERTICAL );

	m_staticTextPanelMods = new wxStaticText( m_buttonsPanel, wxID_ANY, wxT("Mods"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPanelMods->Wrap( -1 );
	m_staticTextPanelMods->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift SemiBold") ) );
	m_staticTextPanelMods->SetForegroundColour( wxColour( 185, 185, 200 ) );

	m_panelModsSizer->Add( m_staticTextPanelMods, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* m_modsButtonsSizer;
	m_modsButtonsSizer = new wxBoxSizer( wxHORIZONTAL );

	m_buttonAddMod = new wxButton( m_buttonsPanel, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAddMod->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift Light") ) );
	m_buttonAddMod->SetBackgroundColour( wxColour( 173, 188, 171 ) );

	m_modsButtonsSizer->Add( m_buttonAddMod, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buttonRemoveMod = new wxButton( m_buttonsPanel, wxID_ANY, wxT("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonRemoveMod->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift Light") ) );
	m_buttonRemoveMod->SetBackgroundColour( wxColour( 186, 173, 173 ) );

	m_modsButtonsSizer->Add( m_buttonRemoveMod, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	m_panelModsSizer->Add( m_modsButtonsSizer, 0, wxALIGN_CENTER_HORIZONTAL|wxBOTTOM, 5 );


	m_buttonsPanelSizer->Add( m_panelModsSizer, 1, wxEXPAND, 5 );

	wxBoxSizer* m_panelGroupSizer;
	m_panelGroupSizer = new wxBoxSizer( wxVERTICAL );

	m_staticTextPanelGroup = new wxStaticText( m_buttonsPanel, wxID_ANY, wxT("Group"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPanelGroup->Wrap( -1 );
	m_staticTextPanelGroup->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift SemiBold") ) );
	m_staticTextPanelGroup->SetForegroundColour( wxColour( 185, 185, 200 ) );

	m_panelGroupSizer->Add( m_staticTextPanelGroup, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

	wxBoxSizer* m_GroupButtonsSizer;
	m_GroupButtonsSizer = new wxBoxSizer( wxHORIZONTAL );

	m_buttonAddGroup = new wxButton( m_buttonsPanel, wxID_ANY, wxT("Create"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAddGroup->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift Light") ) );
	m_buttonAddGroup->SetBackgroundColour( wxColour( 173, 188, 171 ) );

	m_GroupButtonsSizer->Add( m_buttonAddGroup, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buttonRemoveGroup = new wxButton( m_buttonsPanel, wxID_ANY, wxT("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonRemoveGroup->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift Light") ) );
	m_buttonRemoveGroup->SetBackgroundColour( wxColour( 186, 173, 173 ) );

	m_GroupButtonsSizer->Add( m_buttonRemoveGroup, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_buttonAddGroup1 = new wxButton( m_buttonsPanel, wxID_ANY, wxT("Activate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAddGroup1->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift Light") ) );
	m_buttonAddGroup1->SetBackgroundColour( wxColour( 170, 168, 191 ) );

	m_GroupButtonsSizer->Add( m_buttonAddGroup1, 0, wxALL, 5 );


	m_panelGroupSizer->Add( m_GroupButtonsSizer, 0, wxALIGN_CENTER_HORIZONTAL|wxBOTTOM, 5 );


	m_buttonsPanelSizer->Add( m_panelGroupSizer, 1, wxEXPAND, 5 );


	m_buttonsPanel->SetSizer( m_buttonsPanelSizer );
	m_buttonsPanel->Layout();
	m_buttonsPanelSizer->Fit( m_buttonsPanel );
	m_middleSizer->Add( m_buttonsPanel, 6, wxALL|wxEXPAND, 5 );


	m_horSizer->Add( m_middleSizer, 1, wxEXPAND|wxTOP|wxBOTTOM, 5 );

	wxBoxSizer* m_rightSizer;
	m_rightSizer = new wxBoxSizer( wxVERTICAL );

	m_staticTextGroups = new wxStaticText( this, wxID_ANY, wxT("Groups"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextGroups->Wrap( -1 );
	m_staticTextGroups->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift") ) );
	m_staticTextGroups->SetForegroundColour( wxColour( 185, 185, 200 ) );

	m_rightSizer->Add( m_staticTextGroups, 0, wxALIGN_CENTER_HORIZONTAL|wxRIGHT|wxLEFT, 5 );

	m_dataViewListGroups = new wxDataViewListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_NO_HEADER|wxDV_SINGLE|wxBORDER_NONE );
	m_dataViewListGroups->SetBackgroundColour( wxColour( 130, 130, 130 ) );

	m_rightSizer->Add( m_dataViewListGroups, 1, wxALL|wxEXPAND, 5 );


	m_horSizer->Add( m_rightSizer, 1, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 5 );


	this->SetSizer( m_horSizer );
	this->Layout();

	// White text in richtext window (No foreground)
	wxRichTextAttr attr = m_richTextDescription->GetBasicStyle();
	attr.SetTextColour(wxColour(185,185,200));
	m_richTextDescription->SetBasicStyle(attr);

	// Create dirpicker font and colors
	wxFont font = wxFont(12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bahnschrift Light"));
	wxTextCtrl* textControl = m_dirPicker->GetTextCtrl();
	textControl->SetFont(font);
	textControl->SetBackgroundColour(wxColour(194, 194, 147));
	m_dirPicker->GetPickerCtrl()->SetFont(font);
	m_dirPicker->GetPickerCtrl()->SetBackgroundColour(wxColour(181, 181, 141));

	this->Centre( wxBOTH );
}

MainFrameLayout::~MainFrameLayout()
{
}
