#include <windows.h>
int main()
{
	HINSTANCE LibHandle;
	char dllbuf[11] = "user32.dll"; 
	LibHandle = LoadLibrary(dllbuf);
	_asm
	{
		sub sp,0x440 
		xor ebx,ebx
		push ebx // cut string 
		push 0x74736577
		push 0x6C696166//push failwest

		mov eax,esp //load address of failwest 
		push ebx
		push eax
		push eax
		push ebx
		mov eax,0x7DCBFD1E // address should be reset in different OS 
		call eax //call MessageboxA
		push ebx
		mov eax,0x7DD77A10
		call eax //call exit(0)
	}
}
