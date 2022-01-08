#include "VectorHelper.h"

using namespace Tg_Jom;

wxVector<wxVariant> VectorHelper::createSingleElement(wxVariant v)
{
	wxVector<wxVariant> vector;
	vector.push_back(v);
	return vector;
}