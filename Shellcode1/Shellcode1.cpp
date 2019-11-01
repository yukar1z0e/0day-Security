// Shellcode1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 使用release模式。调试模式（至少在最近的编译器上）将以相反的顺序输出函数，并插入许多位置相关的调用。
// 禁用优化。编译器会优化认为绝对没有使用的功能，这是我们绝对需要的。
// 禁用堆栈缓冲区检查（ /Gs标志）。在函数的开头和结尾处调用的堆栈cookie检查器函数位于二进制文件中与位置相关的静态位置，因此，输出的任何函数都无法重定位且对于shellcode无效。

#include <stdio.h>
#include <Windows.h>

void shell_code()
{
	for (;;)
		;
}

DWORD __stdcall unicode_ror13_hash(const WCHAR* unicode_string)
{
	DWORD hash = 0;

	while (*unicode_string != 0)
	{
		DWORD val = (DWORD)*unicode_string++;
		hash = (hash >> 13) | (hash << 19); // ROR 13
		hash += val;
	}
	return hash;
}

DWORD __stdcall ror13_hash(const char* string)
{
	DWORD hash = 0;

	while (*string) {
		DWORD val = (DWORD)*string++;
		hash = (hash >> 13) | (hash << 19);  // ROR 13
		hash += val;
	}
	return hash;
}

PEB:PPEB __declspec(naked) get_peb(void)
{
	__asm {
		mov eax, fs: [0x30]
		ret
	}
}

void __declspec(naked) END_SHELLCODE(void) {}

int main(int argc, char* argv[])
{
	int sizeofshellcode = (int)END_SHELLCODE - (int)shell_code;

	// Show some info about our shellcode buffer
	printf("Shellcode starts at %p and is %d bytes long", shell_code,sizeofshellcode);

	// Now we can test out the shellcode by calling it from C!
	shell_code();

	return 0;
}
