#include "MainFrame.h"

using namespace Tg_Jom;

MainFrame::MainFrame(wxWindow* parent) : MainFrameLayout(parent)
{
	createBinds();
	m_dirPicker->SetPath(wxGetUserHome() + "\\AppData\\Roaming\\.minecraft\\mods");
	updateModsList();
}

MainFrame::~MainFrame()
{
	removeBinds();
}

void MainFrame::createBinds()
{
	m_dirPicker->Bind(wxEVT_DIRPICKER_CHANGED, &MainFrame::handleDirPickerChanged, this);
}

void MainFrame::removeBinds()
{
	m_dirPicker->Unbind(wxEVT_DIRPICKER_CHANGED, &MainFrame::handleDirPickerChanged, this);
}

void MainFrame::handleDirPickerChanged(wxCommandEvent& e)
{
	updateModsList();
}

void MainFrame::fillModsList(std::vector<fs::directory_entry> entries)
{
	m_dataViewListMods->ClearColumns();
	m_dataViewListMods->DeleteAllItems();

	m_dataViewListMods->AppendTextColumn("mods");

	for (fs::directory_entry de : entries)
	{
		m_dataViewListMods->AppendItem(VectorHelper::createSingleElement(de.path().stem().string()));
	}
}

void MainFrame::updateModsList()
{
	std::string path = m_dirPicker->GetTextCtrlValue().ToStdString();

	if (!FileManager::isValidDirPath(path))
	{
		return;
	}
	fillModsList(FileManager::getFilesInDir(path, ".jar"));
}