// Bit.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

#define LS_SET(flag,bit)  ((flag)&(bit))
#define SET_BIT(var,bit)  ((var)|=(bit))
#define REMOVE_BIT(var,bit)  ((var)&=~(bit))

int f(int a)
{
	int rt = a;
	SET_BIT(rt, 0x4000);
	REMOVE_BIT(rt, 0x200);
	return rt;
}

int main()
{
	f(0x12340678);
}

/*
--- C:\Users\test\0daySecurity\Bit\Bit.cpp -------------------------------------
	 1: // Bit.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: #define LS_SET(flag,bit)  ((flag)&(bit))
	 7: #define SET_BIT(var,bit)  ((var)|=(bit))
	 8: #define REMOVE_BIT(var,bit)  ((var)&=~(bit))
	 9:
	10: int f(int a)
	11: {
00451002 EC                   in          al,dx
00451003 51                   push        ecx
	12: 	int rt = a;
00451004 8B 45 08             mov         eax,dword ptr [a]
00451007 89 45 FC             mov         dword ptr [rt],eax
	13: 	SET_BIT(rt, 0x4000);
0045100A 8B 4D FC             mov         ecx,dword ptr [rt]
0045100D 81 C9 00 40 00 00    or          ecx,4000h
00451013 89 4D FC             mov         dword ptr [rt],ecx
	14: 	REMOVE_BIT(rt, 0x200);
00451016 8B 55 FC             mov         edx,dword ptr [rt]
00451019 81 E2 FF FD FF FF    and         edx,0FFFFFDFFh
0045101F 89 55 FC             mov         dword ptr [rt],edx
	15: 	return rt;
00451022 8B 45 FC             mov         eax,dword ptr [rt]
	16: }
00451025 8B E5                mov         esp,ebp
00451027 5D                   pop         ebp
00451028 C3                   ret
--- 无源文件 -----------------------------------------------------------------------
00451029 CC                   int         3
0045102A CC                   int         3
0045102B CC                   int         3
0045102C CC                   int         3
0045102D CC                   int         3
0045102E CC                   int         3
0045102F CC                   int         3
--- C:\Users\test\0daySecurity\Bit\Bit.cpp -------------------------------------
	17:
	18: int main()
	19: {
00451030 55                   push        ebp
00451031 8B EC                mov         ebp,esp
	20: 	f(0x12340678);
00451033 68 78 06 34 12       push        12340678h
00451038 E8 C3 FF FF FF       call        f (0451000h)
0045103D 83 C4 04             add         esp,4
	21: }
00451040 33 C0                xor         eax,eax
00451042 5D                   pop         ebp
00451043 C3                   ret
--- d:\agent\_work\4\s\src\vctools\crt\vcstartup\src\eh\i386\secchk.c ----------
00451044 3B 0D 04 30 45 00    cmp         ecx,dword ptr [__security_cookie (0453004h)]
0045104A F2 75 02             bnd jne     failure (045104Fh)
0045104D F2 C3                bnd ret
0045104F F2 E9 79 02 00 00    bnd jmp     __report_gsfailure (04512CEh)
*/