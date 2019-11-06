// caller.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int f(int a, int b, int c)
{
	return a * b + c;
};

int main()
{
	printf("%d\n", f(1, 2, 3));
	return 0;
};

/*
--- C:\Users\test\0daySecurity\caller\caller.cpp -------------------------------
	 1: // caller.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: int f(int a, int b, int c)
	 7: {
00A81080 55                   push        ebp
00A81081 8B EC                mov         ebp,esp
	 8: 	return a * b + c;
00A81083 8B 45 08             mov         eax,dword ptr [a]
00A81086 0F AF 45 0C          imul        eax,dword ptr [b]
00A8108A 03 45 10             add         eax,dword ptr [c]
	 9: };
00A8108D 5D                   pop         ebp
00A8108E C3                   ret
--- 无源文件 -----------------------------------------------------------------------
00A8108F CC                   int         3
--- C:\Users\test\0daySecurity\caller\caller.cpp -------------------------------
	10:
	11: int main()
	12: {
00A81090 55                   push        ebp
00A81091 8B EC                mov         ebp,esp
	13: 	printf("%d\n", f(1, 2, 3));
00A81093 6A 03                push        3
00A81095 6A 02                push        2
00A81097 6A 01                push        1
00A81099 E8 E2 FF FF FF       call        f (0A81080h)
00A8109E 83 C4 0C             add         esp,0Ch
00A810A1 50                   push        eax
	13: 	printf("%d\n", f(1, 2, 3));
00A810A2 68 08 21 A8 00       push        0A82108h
00A810A7 E8 94 FF FF FF       call        printf (0A81040h)
00A810AC 83 C4 08             add         esp,8
	14: 	return 0;
00A810AF 33 C0                xor         eax,eax
	15: };
00A810B1 5D                   pop         ebp
00A810B2 C3                   ret
*/
