#pragma once

#ifdef RED_PLATFORM_WINDOWS
	#ifdef RED_BUILD_DLL
		#define RED_API __declspec(dllexport)
	#else
		#define RED_API __declspec(dllimport)
	#endif
#else
	#error Sorry, Red is Windows exclusive.
#endif