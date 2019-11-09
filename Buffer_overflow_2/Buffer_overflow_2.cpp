// Buffer_overflow_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	int a[20];
	int i;
	for (i = 0; i < 30; i++)
		a[i] = i;
	return 0;
}
/*
--- C:\Users\test\0daySecurity\Buffer_overflow_2\Buffer_overflow_2.cpp ---------
	 1: // Buffer_overflow_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: int main()
	 7: {
00B21000 55                   push        ebp
00B21001 8B EC                mov         ebp,esp
00B21003 83 EC 54             sub         esp,54h
	 8: 	int a[20];
	 9: 	int i;
	10: 	for (i = 0; i < 30; i++)
00B21006 C7 45 FC 00 00 00 00 mov         dword ptr [ebp-4],0
00B2100D EB 09                jmp         00B21018
00B2100F 8B 45 FC             mov         eax,dword ptr [ebp-4]
00B21012 83 C0 01             add         eax,1
00B21015 89 45 FC             mov         dword ptr [ebp-4],eax
00B21018 83 7D FC 1E          cmp         dword ptr [ebp-4],1Eh
00B2101C 7D 0C                jge         00B2102A
	11: 		a[i] = i;
00B2101E 8B 4D FC             mov         ecx,dword ptr [ebp-4]
00B21021 8B 55 FC             mov         edx,dword ptr [ebp-4]
00B21024 89 54 8D AC          mov         dword ptr [ebp+ecx*4-54h],edx
00B21028 EB E5                jmp         00B2100F
	12: 	return 0;
00B2102A 33 C0                xor         eax,eax
	13: }
00B2102C 8B E5                mov         esp,ebp
00B2102E 5D                   pop         ebp
00B2102F C3                   ret
*/