// Buffer_overflow.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	int a[20];
	int i;
	for (i = 0; i < 20; i++)
		a[i] = i * 2;
	printf("a[20]=%d\n", a[20]);
	return 0;
}

/*
--- C:\Users\test\0daySecurity\Buffer_overflow\Buffer_overflow.cpp -------------
	 1: // Buffer_overflow.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: int main()
	 7: {
00FC1080 55                   push        ebp
00FC1081 8B EC                mov         ebp,esp
00FC1083 83 EC 54             sub         esp,54h
	 8: 	int a[20];
	 9: 	int i;
	10: 	for (i = 0; i < 20; i++)
00FC1086 C7 45 FC 00 00 00 00 mov         dword ptr [ebp-4],0
00FC108D EB 09                jmp         00FC1098
00FC108F 8B 45 FC             mov         eax,dword ptr [ebp-4]
00FC1092 83 C0 01             add         eax,1
00FC1095 89 45 FC             mov         dword ptr [ebp-4],eax
00FC1098 83 7D FC 14          cmp         dword ptr [ebp-4],14h
00FC109C 7D 0E                jge         00FC10AC
	11: 		a[i] = i * 2;
00FC109E 8B 4D FC             mov         ecx,dword ptr [ebp-4]
00FC10A1 D1 E1                shl         ecx,1
00FC10A3 8B 55 FC             mov         edx,dword ptr [ebp-4]
00FC10A6 89 4C 95 AC          mov         dword ptr [ebp+edx*4-54h],ecx
00FC10AA EB E3                jmp         00FC108F
	12: 	printf("a[20]=%d\n", a[20]);
00FC10AC B8 04 00 00 00       mov         eax,4
00FC10B1 6B C8 14             imul        ecx,eax,14h
00FC10B4 8B 54 0D AC          mov         edx,dword ptr [ebp+ecx-54h]
	12: 	printf("a[20]=%d\n", a[20]);
00FC10B8 52                   push        edx
00FC10B9 68 08 21 FC 00       push        0FC2108h
00FC10BE E8 7D FF FF FF       call        00FC1040
00FC10C3 83 C4 08             add         esp,8
	13: 	return 0;
00FC10C6 33 C0                xor         eax,eax
	14: }
00FC10C8 8B E5                mov         esp,ebp
00FC10CA 5D                   pop         ebp
00FC10CB C3                   ret
*/