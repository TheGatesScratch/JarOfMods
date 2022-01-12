#include "MainFrame.h"

using namespace Tg_Jom;

const fs::path MainFrame::settingsFileName = "JomSettings.json";

MainFrame::MainFrame(wxWindow* parent) : MainFrameLayout(parent)
{
	fileManager = new FileManager();
}

void MainFrame::initDirectories()
{
	workingDirectory = wxGetCwd().ToStdWstring();
	settingsFilePath = workingDirectory / settingsFileName;
	fileManager->loadDocument(settingsFilePath);
	modsDirectory = fileManager->readKey("modsfolder");
}

void MainFrame::init()
{
	initDirectories();

	updateModsList();

	createBinds();
}

MainFrame::~MainFrame()
{
	removeBinds();
	delete(fileManager);
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
	modsDirectory = m_dirPicker->GetTextCtrlValue().ToStdString();
	updateModsList();
}

void MainFrame::fillList(wxDataViewListCtrl* list, std::vector<std::string> entries)
{
	m_dataViewListMods->ClearColumns();
	m_dataViewListMods->DeleteAllItems();

	m_dataViewListMods->AppendTextColumn("list");

	for (std::string s : entries)
	{
		m_dataViewListMods->AppendItem(VectorHelper::createSingleElement(s));
	}
}

// TODO async.
void MainFrame::updateModsList()
{
	if (!FileManager::isValidDirPath(modsDirectory))
	{
		return; // TODO Error handling.
	}
	std::vector<std::string> strings;
	for (fs::directory_entry entry : FileManager::getFilesInDir(modsDirectory, ".jar"))
	{
		strings.push_back(entry.path().stem().string());
	}
	fillList(m_dataViewListMods, strings);
}

void MainFrame::updateGroupsList()
{

}