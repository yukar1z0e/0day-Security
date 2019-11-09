// Loop.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void printing_function(int i)
{
	printf("f(%d)\n", i);
}

int main()
{
	int i;
	for (i = 2; i < 10; i++)
		printing_function(i);
	return 0;
}

/*
--- C:\Users\test\0daySecurity\Loop\Loop.cpp -----------------------------------
	 1: // Loop.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: void printing_function(int i)
	 7: {
00981080 55                   push        ebp
00981081 8B EC                mov         ebp,esp
	 8: 	printf("f(%d)\n", i);
00981083 8B 45 08             mov         eax,dword ptr [ebp+8]
00981086 50                   push        eax
00981087 68 08 21 98 00       push        982108h
0098108C E8 AF FF FF FF       call        00981040
00981091 83 C4 08             add         esp,8
	 9: }
00981094 5D                   pop         ebp
	 9: }
00981095 C3                   ret
--- 无源文件 -----------------------------------------------------------------------
00981096 CC                   int         3
00981097 CC                   int         3
00981098 CC                   int         3
00981099 CC                   int         3
0098109A CC                   int         3
0098109B CC                   int         3
0098109C CC                   int         3
0098109D CC                   int         3
0098109E CC                   int         3
0098109F CC                   int         3
--- C:\Users\test\0daySecurity\Loop\Loop.cpp -----------------------------------
	10:
	11: int main()
	12: {
009810A0 55                   push        ebp
009810A1 8B EC                mov         ebp,esp
009810A3 51                   push        ecx
	13: 	int i;
	14: 	for (i = 2; i < 10; i++)
009810A4 C7 45 FC 02 00 00 00 mov         dword ptr [ebp-4],2
009810AB EB 09                jmp         009810B6
009810AD 8B 45 FC             mov         eax,dword ptr [ebp-4]
009810B0 83 C0 01             add         eax,1
009810B3 89 45 FC             mov         dword ptr [ebp-4],eax
009810B6 83 7D FC 0A          cmp         dword ptr [ebp-4],0Ah
009810BA 7D 0E                jge         009810CA
	15: 		printing_function(i);
009810BC 8B 4D FC             mov         ecx,dword ptr [ebp-4]
009810BF 51                   push        ecx
009810C0 E8 BB FF FF FF       call        00981080
009810C5 83 C4 04             add         esp,4
009810C8 EB E3                jmp         009810AD
	16: 	return 0;
009810CA 33 C0                xor         eax,eax
	17: }
009810CC 8B E5                mov         esp,ebp
009810CE 5D                   pop         ebp
	17: }
009810CF C3                   ret
*/