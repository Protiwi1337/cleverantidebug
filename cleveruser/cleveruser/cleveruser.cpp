
#include"windows.h"
#include <iostream>
#include"fstream"
#include"cdebug.h"
int main()
{
    system("title cantidebug usermode test.exe");
    printf("[+] sent innit request !\n");
    //calling innit code that will start the debugengine
    cdebug::innit();
    Sleep(1000);
    printf("[+] sent dbgkill request !\n");
    //calling debugkill code that will send request to the clever engine to kill all known debug programs
    cdebug::debugkill();
    Sleep(1000);
    printf("[+] sent dbgcheck request !\n");
    //call debugcheck cod that will send request to the clever enginge to check for debugger drivers that are loaded
    cdebug::debugcheck();
    Sleep(1000);
    cdebug::servicekill();
    system("pause >nul");
}


