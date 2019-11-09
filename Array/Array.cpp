// Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	int a[20];
	int i;
	for (i = 0; i < 20; i++)
		a[i] = i * 2;
	for (i = 0; i < 20; i++)
		printf("a[%d]=%d\n", i, a[i]);
	return 0;
}

/*
--- C:\Users\test\0daySecurity\Array\Array.cpp ---------------------------------
	 1: // Array.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: int main()
	 7: {
005B1080 55                   push        ebp
005B1081 8B EC                mov         ebp,esp
005B1083 83 EC 54             sub         esp,54h
	 8: 	int a[20];
	 9: 	int i;
	10: 	for (i = 0; i < 20; i++)
005B1086 C7 45 FC 00 00 00 00 mov         dword ptr [ebp-4],0
005B108D EB 09                jmp         005B1098
005B108F 8B 45 FC             mov         eax,dword ptr [ebp-4]
005B1092 83 C0 01             add         eax,1
005B1095 89 45 FC             mov         dword ptr [ebp-4],eax
005B1098 83 7D FC 14          cmp         dword ptr [ebp-4],14h
005B109C 7D 0E                jge         005B10AC
	11: 		a[i] = i * 2;
005B109E 8B 4D FC             mov         ecx,dword ptr [ebp-4]
005B10A1 D1 E1                shl         ecx,1
005B10A3 8B 55 FC             mov         edx,dword ptr [ebp-4]
005B10A6 89 4C 95 AC          mov         dword ptr [ebp+edx*4-54h],ecx
005B10AA EB E3                jmp         005B108F
	12: 	for (i = 0; i < 20; i++)
005B10AC C7 45 FC 00 00 00 00 mov         dword ptr [ebp-4],0
005B10B3 EB 09                jmp         005B10BE
005B10B5 8B 45 FC             mov         eax,dword ptr [ebp-4]
	12: 	for (i = 0; i < 20; i++)
005B10B8 83 C0 01             add         eax,1
005B10BB 89 45 FC             mov         dword ptr [ebp-4],eax
005B10BE 83 7D FC 14          cmp         dword ptr [ebp-4],14h
005B10C2 7D 1B                jge         005B10DF
	13: 		printf("a[%d]=%d\n", i, a[i]);
005B10C4 8B 4D FC             mov         ecx,dword ptr [ebp-4]
005B10C7 8B 54 8D AC          mov         edx,dword ptr [ebp+ecx*4-54h]
005B10CB 52                   push        edx
005B10CC 8B 45 FC             mov         eax,dword ptr [ebp-4]
005B10CF 50                   push        eax
005B10D0 68 08 21 5B 00       push        5B2108h
005B10D5 E8 66 FF FF FF       call        005B1040
005B10DA 83 C4 0C             add         esp,0Ch
005B10DD EB D6                jmp         005B10B5
	14: 	return 0;
005B10DF 33 C0                xor         eax,eax
	15: }
005B10E1 8B E5                mov         esp,ebp
005B10E3 5D                   pop         ebp
005B10E4 C3                   ret
*/