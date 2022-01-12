#pragma once

#include <filesystem>
#include <optional>
#include <fstream>

#include <rapidjson/document.h>

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"


// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers)
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

namespace fs = std::filesystem;
using namespace rapidjson;

namespace Tg_Jom
{
	class FileManager
	{
	public:
		static std::vector<fs::directory_entry> getFilesInDir(fs::path path, fs::path extentionFilter);
		static bool isValidDirPath(fs::path);
		static std::string readFileString(fs::path path);
		
		void loadDocument(fs::path path);
		std::string readKey(std::string);

		~FileManager();
		FileManager();
	private:
		Document* document;

	};
}