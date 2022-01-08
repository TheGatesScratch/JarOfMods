#pragma once

#include "wx/wxprec.h"
#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif


namespace Tg_Jom
{
	class VectorHelper
	{
	public:
		static wxVector<wxVariant> createSingleElement(wxVariant);
	};
}