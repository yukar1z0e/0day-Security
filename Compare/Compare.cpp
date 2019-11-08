// Compare.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f_signed(int a, int b)
{
	if (a > b)
		printf("a>b\n");
	if (a == b)
		printf("a==b\n");
	if (a < b)
		printf("a<b\n");
};

void f_unsigned(unsigned int a, unsigned int b)
{
	if (a > b)
		printf("a>b\n");
	if (a == b)
		printf("a==b\n");
	if (a < b)
		printf("a<b\n");
};

int main()
{
	f_signed(1, 2);
	f_unsigned(1, 2);
	return 0;
};

/*
--- C:\Users\test\0daySecurity\Compare\Compare.cpp -----------------------------
	 1: // Compare.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: void f_signed(int a, int b)
	 7: {
00FA1080 55                   push        ebp
00FA1081 8B EC                mov         ebp,esp
	 8: 	if (a > b)
00FA1083 8B 45 08             mov         eax,dword ptr [a]
00FA1086 3B 45 0C             cmp         eax,dword ptr [b]
00FA1089 7E 0D                jle         f_signed+18h (0FA1098h)
	 9: 		printf("a>b\n");
00FA108B 68 08 21 FA 00       push        0FA2108h
00FA1090 E8 AB FF FF FF       call        printf (0FA1040h)
00FA1095 83 C4 04             add         esp,4
	10: 	if (a == b)
00FA1098 8B 4D 08             mov         ecx,dword ptr [a]
00FA109B ??                   ?? ??
00FA109C ??                   ?? ??
00FA109D ??                   ?? ??
00FA109E ??                   ?? ??
00FA109F ??                   ?? ??
00FA10A0 ??                   ?? ??
00FA10A1 ??                   ?? ??
00FA10A2 ??                   ?? ??
00FA10A3 ??                   ?? ??
00FA10A4 ??                   ?? ??
00FA10A5 ??                   ?? ??
00FA10A6 ??                   ?? ??
00FA10A7 ??                   ?? ??
00FA10A8 ??                   ?? ??
00FA10A9 ??                   ?? ??
00FA10AA ??                   ?? ??
	11: 		printf("a==b\n");
00FA10AB C4 04 8B             les         eax,fword ptr [ebx+ecx*4]
	12: 	if (a < b)
00FA10AE 55                   push        ebp
00FA10AF 08 3B                or          byte ptr [ebx],bh
00FA10B1 55                   push        ebp
00FA10B2 0C 7D                or          al,7Dh
00FA10B4 0D 68 18 21 FA       or          eax,0FA211868h
	13: 		printf("a<b\n");
00FA10B9 00 E8                add         al,ch
00FA10BB 81 FF FF FF 83 C4    cmp         edi,0C483FFFFh
	13: 		printf("a<b\n");
00FA10C1 04 5D                add         al,5Dh
	14: };
00FA10C3 C3                   ret
--- 无源文件 -----------------------------------------------------------------------
00FA10C4 CC                   int         3
00FA10C5 CC                   int         3
00FA10C6 CC                   int         3
00FA10C7 CC                   int         3
00FA10C8 CC                   int         3
00FA10C9 CC                   int         3
00FA10CA CC                   int         3
00FA10CB CC                   int         3
00FA10CC CC                   int         3
00FA10CD CC                   int         3
00FA10CE CC                   int         3
00FA10CF CC                   int         3
--- C:\Users\test\0daySecurity\Compare\Compare.cpp -----------------------------
	15:
	16: void f_unsigned(unsigned int a, unsigned int b)
	17: {
00FA10D0 55                   push        ebp
00FA10D1 8B EC                mov         ebp,esp
	18: 	if (a > b)
00FA10D3 8B 45 08             mov         eax,dword ptr [a]
00FA10D6 3B 45 0C             cmp         eax,dword ptr [b]
00FA10D9 76 0D                jbe         f_unsigned+18h (0FA10E8h)
	19: 		printf("a>b\n");
00FA10DB 68 20 21 FA 00       push        0FA2120h
00FA10E0 E8 5B FF FF FF       call        printf (0FA1040h)
00FA10E5 83 C4 04             add         esp,4
	20: 	if (a == b)
00FA10E8 8B 4D 08             mov         ecx,dword ptr [a]
00FA10EB 3B 4D 0C             cmp         ecx,dword ptr [b]
00FA10EE 75 0D                jne         f_unsigned+2Dh (0FA10FDh)
	21: 		printf("a==b\n");
00FA10F0 68 28 21 FA 00       push        0FA2128h
00FA10F5 E8 46 FF FF FF       call        printf (0FA1040h)
00FA10FA 83 C4 04             add         esp,4
	22: 	if (a < b)
00FA10FD 8B 55 08             mov         edx,dword ptr [a]
00FA1100 3B 55 0C             cmp         edx,dword ptr [b]
00FA1103 73 0D                jae         f_unsigned+42h (0FA1112h)
	23: 		printf("a<b\n");
00FA1105 68 30 21 FA 00       push        0FA2130h
00FA110A E8 31 FF FF FF       call        printf (0FA1040h)
00FA110F 83 C4 04             add         esp,4
	24: };
00FA1112 5D                   pop         ebp
00FA1113 C3                   ret
--- 无源文件 -----------------------------------------------------------------------
00FA1114 CC                   int         3
00FA1115 CC                   int         3
00FA1116 CC                   int         3
00FA1117 CC                   int         3
00FA1118 CC                   int         3
00FA1119 CC                   int         3
00FA111A CC                   int         3
00FA111B CC                   int         3
00FA111C CC                   int         3
00FA111D CC                   int         3
00FA111E CC                   int         3
00FA111F CC                   int         3
--- C:\Users\test\0daySecurity\Compare\Compare.cpp -----------------------------
	25:
	26: int main()
	27: {
00FA1120 55                   push        ebp
00FA1121 8B EC                mov         ebp,esp
	28: 	f_signed(1, 2);
00FA1123 6A 02                push        2
00FA1125 6A 01                push        1
00FA1127 E8 54 FF FF FF       call        f_signed (0FA1080h)
00FA112C 83 C4 08             add         esp,8
	29: 	f_unsigned(1, 2);
00FA112F 6A 02                push        2
00FA1131 6A 01                push        1
00FA1133 E8 98 FF FF FF       call        f_unsigned (0FA10D0h)
00FA1138 83 C4 08             add         esp,8
	30: 	return 0;
00FA113B 33 C0                xor         eax,eax
	31: };
00FA113D 5D                   pop         ebp
	31: };
00FA113E C3                   ret
--- d:\agent\_work\4\s\src\vctools\crt\vcstartup\src\eh\i386\secchk.c ----------
*/
