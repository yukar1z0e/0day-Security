// scanf.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	int x;
	printf("Enter X:\n");

	scanf("%d", &x);

	printf("You entered %d...\n", x);

	return 0;
};


	//1: // scanf.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	//2 : //
	//3 :
	//4 : #include <stdio.h>
	//5 :
	//6 : int main()
	//7 : {
	//	005E1100 55                   push        ebp
	//	005E1101 8B EC                mov         ebp, esp
	//	005E1103 51                   push        ecx
	//8: 	int x;
	//9: 	printf("Enter X:\n");
	//	005E1104 68 08 21 5E 00       push        5E2108h
	//	005E1109 E8 42 FF FF FF       call        printf(05E1050h)
	//	005E110E 83 C4 04             add         esp, 4
	//10:
	//11 : scanf("%d", &x);
	//	005E1111 8D 45 FC             lea         eax, [x]
	//	005E1114 50                   push        eax
	//10:
	//11 : scanf("%d", &x);
	//	005E1115 68 14 21 5E 00       push        5E2114h
	//	005E111A E8 A1 FF FF FF       call        scanf(05E10C0h)
	//	005E111F 83 C4 08             add         esp, 8
	//	12:
	//13 : printf("You entered %d...\n", x);
	//	005E1122 8B 4D FC             mov         ecx, dword ptr[x]
	//	005E1125 51                   push        ecx
	//	005E1126 68 18 21 5E 00       push        5E2118h
	//	005E112B E8 20 FF FF FF       call        printf(05E1050h)
	//	005E1130 83 C4 08             add         esp, 8
	//	14:
	//15 : return 0;
	//	005E1133 33 C0 xor eax, eax
	//16: };
	//	005E1135 8B E5                mov         esp, ebp
	//	005E1137 5D                   pop         ebp
	//	005E1138 C3                   ret
