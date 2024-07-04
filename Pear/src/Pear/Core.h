#pragma once

#ifdef PE_PLATFORM_WINDOWS
	#ifdef PE_BUILD_DLL
		#define PEAR_API __declspec(dllexport)
	#else
		#define PEAR_API __declspec(dllimport)
	#endif
#endif