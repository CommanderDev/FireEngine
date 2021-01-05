#pragma once

#ifdef FE_PLATFORM_WINDOWS
	#ifdef FE_BUILD_DLL
		#define FireEngine_API __declspec(dllexport)	
	#else
		#define FireEngine_API __declspec(dllimport)	
	#endif
#else
	#error Fire Engine  Currently only supports windows.
#endif