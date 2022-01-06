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
	m_mgr.SetManagedWindow(this);
	m_mgr.SetFlags(wxAUI_MGR_DEFAULT);

	m_dirPicker = new wxDirPickerCtrl( this, DirPickerID, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxDefaultSize, wxDIRP_DEFAULT_STYLE );
	m_mgr.AddPane( m_dirPicker, wxAuiPaneInfo() .Left() .CloseButton( false ).PinButton( true ).Dock().Resizable().FloatingSize( wxSize( 206,62 ) ).Layer( 1 ) );


	m_mgr.Update();
	this->Centre( wxBOTH );
}

MainFrameLayout::~MainFrameLayout()
{
	m_mgr.UnInit();

}
