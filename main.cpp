#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include "sysutil.h"
#include "api.h"

UINT lenAA(LPCSTR input_string)
{
	UINT			out_length = 0;
	PCHAR			ptr;

	ptr = (PCHAR)input_string;
	out_length = 0;
	while (*ptr != 0) {
		out_length++;
		ptr++;
	}

	return out_length;
}

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
