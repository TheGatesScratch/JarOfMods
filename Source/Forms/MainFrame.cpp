#include <filesystem>

#include "MainFrame.h"
#include "../Util/FileManager.h"

using namespace Tg_Jom;

namespace fs = std::filesystem;

MainFrame::MainFrame(wxWindow* parent) : MainFrameLayout(parent)
{
	
}

void MainFrame::fillModsList()
{
	if (!m_dataViewList->ClearColumns())
	{
		return;	//TODO Error handling.
	}

	m_dataViewList->AppendToggleColumn("Enabled");
	m_dataViewList->AppendTextColumn("File");

	std::vector<fs::directory_entry> files = FileManager::getFiles("C:/Users/mtkar/AppData/Roaming/.minecraft/mods", ".jar");

	for (fs::directory_entry de : files)
	{
		wxVector<wxVariant> data;
		data.push_back(wxVariant(false));
		// Stem = name without extention.
		data.push_back(wxVariant(de.path().stem().string()));
		m_dataViewList->AppendItem(data);
	}
}