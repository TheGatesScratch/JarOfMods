#pragma once

#include <filesystem>
#include <optional>

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"


// for all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWidgets headers)
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

namespace fs = std::filesystem;

namespace Tg_Jom
{
	class FileManager
	{
	public:
		static std::vector<fs::directory_entry> getFilesInDir(fs::path path, std::string extentionFilter);
		static bool isValidDirPath(std::string);
	};
}