#ifndef __MainFrame__
#define __MainFrame__

#include <filesystem>
#include <fstream>
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

		void init();

		void updateModsList();
		void updateGroupsList();

	protected:
		void handleDirPickerChanged(wxCommandEvent&);

	private:
		const static fs::path settingsFileName;
		fs::path modsDirectory;
		fs::path settingsFilePath;
		fs::path workingDirectory;

		FileManager* fileManager;

		void initDirectories();

		void fillList(wxDataViewListCtrl*, std::vector<std::string>);

		void createBinds();
		void removeBinds();

		
	};
}
#endif
