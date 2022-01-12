#include "FileManager.h"

using namespace Tg_Jom;

std::vector<fs::directory_entry> FileManager::getFilesInDir(fs::path path, fs::path extentionFilter)
{
	std::vector filteredFileList = std::vector<fs::directory_entry>();

	if (!fs::exists(path))
	{
		return std::vector<fs::directory_entry>();
	}
	
	for (fs::directory_entry de : fs::directory_iterator(path))
	{
		if (de.path().extension() == extentionFilter)
			filteredFileList.emplace_back(de);
	}
	if (filteredFileList.empty())
	{
		return std::vector<fs::directory_entry>();
	}

	return filteredFileList;
}

bool FileManager::isValidDirPath(fs::path path)
{
	return (fs::exists(path) && fs::is_directory(path));
}

std::string FileManager::readFileString(fs::path path)
{
	if (!fs::exists(path))
	{
		return "NoPath";	// TODO Error handling.
	}
	if (fs::is_directory(path))
	{
		return "NoFile";
	}
	std::ifstream ifs(path);
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));	// Double () because parse bug TODO Verifiy version

	return content;
}

void FileManager::loadDocument(fs::path path)
{
	std::string json = readFileString(path);
	document->Parse(json.c_str());
}

std::string FileManager::readKey(std::string string)
{
	Value& v = (*document)[string.c_str()];
	
	return v.GetString();
}

Tg_Jom::FileManager::~FileManager()
{
	delete(document);
}

Tg_Jom::FileManager::FileManager()
{
	document = new Document();
}
