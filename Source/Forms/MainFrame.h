#ifndef __MainFrame__
#define __MainFrame__

#include <filesystem>

#include <filesystem>
#include <optional>

#include "Layout.h"
#include "../Util/FileManager.h"
#include "../Util/VectorHelper.h"

namespace Tg_Jom
{
	namespace fs = std::filesystem;

	

	class MainFrame : public MainFrameLayout
	{
		
	public:
		MainFrame(wxWindow* parent);
		~MainFrame();

		void createBinds();
		void removeBinds();

		void fillModsList(std::vector<fs::directory_entry>);
		void updateModsList();

	protected:
		void handleDirPickerChanged(wxCommandEvent&);
	};
}
#endif
