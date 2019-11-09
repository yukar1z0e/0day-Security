// Switch.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
void f(int a)
{
	switch (a)
	{
	case 0: printf("zero\n");
	case 1: printf("one\n");
	case 2: printf("two\n");
	default: printf("something unknown\n"); break;
	}
}

int main()
{
    f(2);
}

/*
--- C:\Users\test\0daySecurity\Switch\Switch.cpp -------------------------------
	 1: // Switch.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5: void f(int a)
	 6: {
00F41080 55                   push        ebp
00F41081 8B EC                mov         ebp,esp
00F41083 51                   push        ecx
	 7: 	switch (a)
00F41084 8B 45 08             mov         eax,dword ptr [ebp+8]
00F41087 89 45 FC             mov         dword ptr [ebp-4],eax
00F4108A 83 7D FC 00          cmp         dword ptr [ebp-4],0
00F4108E 74 0E                je          00F4109E
00F41090 83 7D FC 01          cmp         dword ptr [ebp-4],1
00F41094 74 15                je          00F410AB
00F41096 83 7D FC 02          cmp         dword ptr [ebp-4],2
00F4109A 74 1C                je          00F410B8
00F4109C EB 27                jmp         00F410C5
	 8: 	{
	 9: 	case 0: printf("zero\n");
00F4109E 68 08 21 F4 00       push        0F42108h
00F410A3 E8 98 FF FF FF       call        00F41040
00F410A8 83 C4 04             add         esp,4
	10: 	case 1: printf("one\n");
00F410AB 68 10 21 F4 00       push        0F42110h
00F410B0 E8 8B FF FF FF       call        00F41040
00F410B5 83 C4 04             add         esp,4
	11: 	case 2: printf("two\n");
00F410B8 68 18 21 F4 00       push        0F42118h
00F410BD E8 7E FF FF FF       call        00F41040
00F410C2 83 C4 04             add         esp,4
	12: 	default: printf("something unknown\n"); break;
00F410C5 68 20 21 F4 00       push        0F42120h
00F410CA E8 71 FF FF FF       call        00F41040
00F410CF 83 C4 04             add         esp,4
	13: 	}
	14: }
00F410D2 8B E5                mov         esp,ebp
00F410D4 5D                   pop         ebp
00F410D5 C3                   ret
--- 无源文件 -----------------------------------------------------------------------
00F410D6 CC                   int         3
00F410D7 CC                   int         3
00F410D8 CC                   int         3
00F410D9 CC                   int         3
00F410DA CC                   int         3
00F410DB CC                   int         3
00F410DC CC                   int         3
00F410DD CC                   int         3
00F410DE CC                   int         3
00F410DF CC                   int         3
--- C:\Users\test\0daySecurity\Switch\Switch.cpp -------------------------------
	15:
	16: int main()
	17: {
00F410E0 55                   push        ebp
00F410E1 8B EC                mov         ebp,esp
	18:     f(2);
00F410E3 6A 02                push        2
00F410E5 E8 96 FF FF FF       call        00F41080
00F410EA 83 C4 04             add         esp,4
	19: }
00F410ED 33 C0                xor         eax,eax
00F410EF 5D                   pop         ebp
00F410F0 C3                   ret
*/

