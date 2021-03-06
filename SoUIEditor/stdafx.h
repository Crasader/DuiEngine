// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once

#include <duistd.h>
#include <duihostwnd.h>
#include <duictrls.h>
#include <duiwndnotify.h>
#include <DuiCSS.h>

#include "resource.h"	//win32 id

#include "FileHelper.h"

using namespace DuiEngine;
using namespace pugi;

#include "SoUIHelper.h"
#include "SkinView.h"
#include "colorpicker/DuiColorPicker.h"

#ifdef _DEBUG
	#ifdef DLL_DUI
	# pragma comment(lib, "duiengine_d.lib")
	#else
	# pragma comment(lib, "duiengine_static_d.lib")
	#endif
#else
	#ifdef DLL_DUI
	# pragma comment(lib, "duiengine.lib")
	#else
	# pragma comment(lib, "duiengine_static.lib")
	#endif

#endif





