#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include "sysutil.h"
#include "api.h"


int main(int argc, char *argv[])
{

	printf("WinAPI hasing test\n");

	STARTUPINFO cif;
	ZeroMemory(&cif, sizeof(STARTUPINFO));
	PROCESS_INFORMATION pi;
	if (cCreateProcessA("c:\\windows\\notepad.exe", NULL,
		NULL, NULL, FALSE, NULL, NULL, NULL, &cif, &pi) == TRUE)
	{
		cSleep(1000);
	}


	cSleep(5000);

    system("pause");
    return 0;
}
