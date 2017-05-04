#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    HDC dc = GetDC(NULL);
    cout << GetDeviceCaps(dc, HORZRES) << "," << GetDeviceCaps(dc, VERTRES) << "," << GetDeviceCaps(dc, LOGPIXELSX);
    return 0;
}

