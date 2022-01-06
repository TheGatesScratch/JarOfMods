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
#include <wx/filepicker.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/frame.h>
#include <wx/aui/aui.h>

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
			enum
			{
				DirPickerID = 1000
			};

			wxDirPickerCtrl* m_dirPicker;

		public:

			MainFrameLayout( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Jar of mods"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
			wxAuiManager m_mgr;

			~MainFrameLayout();

	};

} // namespace Tg_Jom

