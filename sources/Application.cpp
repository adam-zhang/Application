#include "Application.h"
#include <vector>

using namespace std;

Application::Application()
{
}

Application::~Application()
{
}

static basic_string<TCHAR> getFullApplicationName()
{
	vector<TCHAR> buffer(MAX_PATH);
	GetModuleFileName(NULL, &buffer[0], MAX_PATH);
	return &buffer[0];
}

std::basic_string<TCHAR> Application::applicationPath()
{
	basic_string<TCHAR> path = getFullApplicationName();
	size_t index = path.rfind(TEXT('\\'));
	return path.substr(0, index + 1);
}

std::basic_string<TCHAR> Application::applicationName()
{
	auto path = getFullApplicationName();
	auto index = path.rfind(TEXT('\\'));
	return path.substr(index + 1);
}

basic_string<TCHAR> Application::getFullApplicationName()
{
	return getFullApplicationName();
}
