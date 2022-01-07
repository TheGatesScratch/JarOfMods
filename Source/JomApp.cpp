#include "JomApp.h"

using namespace Tg_Jom;

bool JomApp::OnInit()
{
	if (!wxApp::OnInit())
		return false;

	MainFrame* mainFrame = new MainFrame(NULL);

	mainFrame->fillModsList();

	mainFrame->Show(true);

	return true;
}