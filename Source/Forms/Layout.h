///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/dataview.h>
#include <wx/filepicker.h>
#include <wx/sizer.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/panel.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

namespace Tg_Jom
{
	///////////////////////////////////////////////////////////////////////////////
	/// Class MainFrameLayout
	///////////////////////////////////////////////////////////////////////////////
	class MainFrameLayout : public wxFrame
	{
		private:

		protected:
			wxStaticText* m_staticTextMods;
			wxDataViewListCtrl* m_dataViewListMods;
			wxDirPickerCtrl* m_dirPicker;
			wxStaticText* m_staticTextDescription;
			wxRichTextCtrl* m_richTextDescription;
			wxStaticText* m_staticTextControl;
			wxPanel* m_buttonsPanel;
			wxStaticText* m_staticTextPanelMods;
			wxButton* m_buttonAddMod;
			wxButton* m_buttonRemoveMod;
			wxStaticText* m_staticTextPanelGroup;
			wxButton* m_buttonAddGroup;
			wxButton* m_buttonRemoveGroup;
			wxButton* m_buttonAddGroup1;
			wxStaticText* m_staticTextGroups;
			wxDataViewListCtrl* m_dataViewListGroups;

		public:

			MainFrameLayout( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Jar of mods"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

			~MainFrameLayout();

	};

} // namespace Tg_Jom

