
#include"windows.h"
#include <iostream>
#include"fstream"
#include"cdebug.h"
int main()
{
    system("title cantidebug usermode test.exe");
    printf("[+] sent innit request !\n");
    cdebug::innit();
    Sleep(1000);
    printf("[+] sent dbgkill request !\n");
    cdebug::debugkill();
    Sleep(1000);
    printf("[+] sent dbgcheck request !\n");
    cdebug::debugcheck();
    Sleep(1000);
    system("pause >nul");
}


