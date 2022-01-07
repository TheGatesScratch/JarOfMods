///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/dataview.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/filepicker.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/gbsizer.h>
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
			wxDataViewListCtrl* m_dataViewList;
			wxDirPickerCtrl* m_directoryPicker;
			wxRichTextCtrl* m_richText;

		public:

			MainFrameLayout( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Jar of mods"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

			~MainFrameLayout();

	};

} // namespace Tg_Jom

