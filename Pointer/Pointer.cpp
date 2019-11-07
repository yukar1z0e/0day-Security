// Pointer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void f1(int x, int y, int* sum, int* product)
{
	*sum = x + y;
	*product = x * y;
};

int sum, product;

void main()
{
	f1(123, 456, &sum, &product);
	printf("sum=%d, product=%d\n", sum, product);
};

/*
--- C:\Users\test\0daySecurity\Pointer\Pointer.cpp -----------------------------
	 1: // Pointer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: void f1(int x, int y, int* sum, int* product)
	 7: {
004E1080 55                   push        ebp
004E1081 8B EC                mov         ebp,esp
	 8: 	*sum = x + y;
004E1083 8B 45 08             mov         eax,dword ptr [x]
004E1086 03 45 0C             add         eax,dword ptr [y]
004E1089 8B 4D 10             mov         ecx,dword ptr [sum]
004E108C 89 01                mov         dword ptr [ecx],eax
	 9: 	*product = x * y;
004E108E 8B 55 08             mov         edx,dword ptr [x]
004E1091 0F AF 55 0C          imul        edx,dword ptr [y]
004E1095 8B 45 14             mov         eax,dword ptr [product]
004E1098 89 10                mov         dword ptr [eax],edx
	10: };
004E109A 5D                   pop         ebp
004E109B C3                   ret
--- 无源文件 -----------------------------------------------------------------------
004E109C CC                   int         3
004E109D CC                   int         3
004E109E CC                   int         3
004E109F CC                   int         3
--- C:\Users\test\0daySecurity\Pointer\Pointer.cpp -----------------------------
	11:
	12: int sum, product;
	13:
	14: void main()
	15: {
004E10A0 55                   push        ebp
004E10A1 8B EC                mov         ebp,esp
	16: 	f1(123, 456, &sum, &product);
004E10A3 68 78 33 4E 00       push        offset product (04E3378h)
004E10A8 68 74 33 4E 00       push        offset sum (04E3374h)
004E10AD 68 C8 01 00 00       push        1C8h
004E10B2 6A 7B                push        7Bh
004E10B4 E8 C7 FF FF FF       call        f1 (04E1080h)
004E10B9 83 C4 10             add         esp,10h
	17: 	printf("sum=%d, product=%d\n", sum, product);
004E10BC A1 78 33 4E 00       mov         eax,dword ptr [product (04E3378h)]
004E10C1 50                   push        eax
004E10C2 8B 0D 74 33 4E 00    mov         ecx,dword ptr [sum (04E3374h)]
004E10C8 51                   push        ecx
004E10C9 68 08 21 4E 00       push        4E2108h
004E10CE E8 6D FF FF FF       call        printf (04E1040h)
004E10D3 83 C4 0C             add         esp,0Ch
	18: };
004E10D6 33 C0                xor         eax,eax
004E10D8 5D                   pop         ebp
004E10D9 C3                   ret
*/
