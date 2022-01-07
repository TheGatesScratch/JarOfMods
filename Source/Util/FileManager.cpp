#include "FileManager.h"

using namespace Tg_Jom;

std::vector<fs::directory_entry> FileManager::getFiles(fs::path path, std::string extentionFilter)
{
	std::vector filteredFileList = std::vector<fs::directory_entry>();

	for (fs::directory_entry de : fs::directory_iterator(path))
	{
		if (de.path().extension().c_str() == extentionFilter)
			filteredFileList.emplace_back(de);

	}
	return filteredFileList;
}