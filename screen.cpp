#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HDC dc = GetDC(NULL);
    cout
            << "{ "
            << "'width': " << GetDeviceCaps(dc, HORZRES) << ", "
            << "'height': " << GetDeviceCaps(dc, VERTRES) << ", "
            << "'dpi': " << GetDeviceCaps(dc, LOGPIXELSX)
            << " }";
    return 0;
}

