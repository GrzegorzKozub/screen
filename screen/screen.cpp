#include "pch.h"

#include <iostream>

#include <windows.h>
#include <shellscalingapi.h>

int main()
{
	try
	{
		HWND window = GetForegroundWindow();
		HMONITOR monitor = MonitorFromWindow(window, MONITOR_DEFAULTTONEAREST);

		UINT dpi = GetDpiForWindow(window);

		MONITORINFO monitorInfo;
		monitorInfo.cbSize = sizeof(MONITORINFO);
		GetMonitorInfo(monitor, &monitorInfo);
		RECT* monitorRect = &monitorInfo.rcMonitor;

		long width = monitorRect->right - monitorRect->left;
		long height = monitorRect->bottom - monitorRect->top;

		std::cout
			<< "{ "
			<< "\"width\": " << width << ", "
			<< "\"height\": " << height << ", "
			<< "\"dpi\": " << dpi
			<< " }";

		return 0;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what();
		return 1;
	}
}

