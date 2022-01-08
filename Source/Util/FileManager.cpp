#include "FileManager.h"

using namespace Tg_Jom;

std::vector<fs::directory_entry> FileManager::getFilesInDir(fs::path path, std::string extentionFilter)
{
	std::vector filteredFileList = std::vector<fs::directory_entry>();

	if (!fs::exists(path))
	{
		return std::vector<fs::directory_entry>();
	}
	
	for (fs::directory_entry de : fs::directory_iterator(path))
	{
		if (de.path().extension().c_str() == extentionFilter)
			filteredFileList.emplace_back(de);
	}
	if (filteredFileList.empty())
	{
		return std::vector<fs::directory_entry>();
	}

	return filteredFileList;
}

bool FileManager::isValidDirPath(std::string path)
{
	return (fs::exists(path) && fs::is_directory(path));
}