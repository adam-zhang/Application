#ifndef __APPLICATION__H
#define __APPLICATION__H

#include <string>
#include <windows.h>

class Application
{
    private:
        Application();
        ~Application();
    public:
	static std::basic_string<TCHAR> applicationPath();
	static std::basic_string<TCHAR> applicationName();
	static std::basic_string<TCHAR> applicationFullName();
};
#endif//__APPLICATION__H
