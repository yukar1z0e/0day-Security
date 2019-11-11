#include <stdio.h>
#include <stdlib.h>

int comp(const void* _a, const void* _b)
{
	const int* a = (const int*)_a;
	const int* b= (const int*)_b;

	if (*a == *b)
		return 0;
	else
		if (*a < *b)
			return -1;
		else
			return 1;
}

int main(int argc, char argv[])
{
	int numbers[10] = { 1892,45,200,-98,4087,5,-12345,1087,88,-100000 };
	int i;

	qsort(numbers, 10, sizeof(int), comp);
	for (i = 0; i < 9; i++)
		printf("Number=%d\n", numbers[i]);
	return 0;
}

/*
--- C:\Users\test\0daySecurity\Callback\Callback.cpp ---------------------------
	 1: #include <stdio.h>
	 2: #include <stdlib.h>
	 3:
	 4: int comp(const void* _a, const void* _b)
	 5: {
008B1040 55                   push        ebp
008B1041 8B EC                mov         ebp,esp
	 6: 	const int* a = (const int*)_a;
	 7: 	const int* b= (const int*)_b;
	 8:
	 9: 	if (*a == *b)
008B1043 8B 45 08             mov         eax,dword ptr [_a]
008B1046 8B 08                mov         ecx,dword ptr [eax]
008B1048 8B 45 0C             mov         eax,dword ptr [_b]
008B104B 8B 10                mov         edx,dword ptr [eax]
008B104D 33 C0                xor         eax,eax
008B104F 3B CA                cmp         ecx,edx
008B1051 74 0A                je          comp+1Dh (08B105Dh)
	10: 		return 0;
	11: 	else
	12: 		if (*a < *b)
008B1053 0F 9D C0             setge       al
008B1056 8D 04 45 FF FF FF FF lea         eax,[eax*2-1]
	13: 			return -1;
	14: 		else
	15: 			return 1;
	16: }
008B105D 5D                   pop         ebp
008B105E C3                   ret
--- 无源文件 -----------------------------------------------------------------------
008B105F CC                   int         3
--- C:\Users\test\0daySecurity\Callback\Callback.cpp ---------------------------
	17:
	18: int main(int argc, char argv[])
	19: {
008B1060 55                   push        ebp
008B1061 8B EC                mov         ebp,esp
008B1063 83 EC 28             sub         esp,28h
	20: 	int numbers[10] = { 1892,45,200,-98,4087,5,-12345,1087,88,-100000 };
008B1066 0F 28 05 30 21 8B 00 movaps      xmm0,xmmword ptr [__xmm@ffffff9e000000c80000002d00000764 (08B2130h)]
	21: 	int i;
	22:
	23: 	qsort(numbers, 10, sizeof(int), comp);
008B106D 8D 45 D8             lea         eax,[numbers]
008B1070 56                   push        esi
008B1071 68 40 10 8B 00       push        offset comp (08B1040h)
008B1076 6A 04                push        4
008B1078 0F 11 45 D8          movups      xmmword ptr [numbers],xmm0
008B107C 6A 0A                push        0Ah
008B107E 0F 28 05 20 21 8B 00 movaps      xmm0,xmmword ptr [__xmm@0000043fffffcfc70000000500000ff7 (08B2120h)]
008B1085 50                   push        eax
	21: 	int i;
	22:
	23: 	qsort(numbers, 10, sizeof(int), comp);
008B1086 0F 11 45 E8          movups      xmmword ptr [ebp-18h],xmm0
008B108A C7 45 F8 58 00 00 00 mov         dword ptr [ebp-8],58h
008B1091 C7 45 FC 60 79 FE FF mov         dword ptr [ebp-4],0FFFE7960h
008B1098 FF 15 C4 20 8B 00    call        dword ptr [__imp__qsort (08B20C4h)]
008B109E 83 C4 10             add         esp,10h
008B10A1 33 F6                xor         esi,esi
008B10A3 0F 1F 40 00          nop         dword ptr [eax]
008B10A7 66 0F 1F 84 00 00 00 00 00 nop         word ptr [eax+eax]
	24: 	for (i = 0; i < 9; i++)
	25: 		printf("Number=%d\n", numbers[i]);
008B10B0 FF 74 B5 D8          push        dword ptr numbers[esi*4]
008B10B4 68 08 21 8B 00       push        8B2108h
008B10B9 E8 52 FF FF FF       call        printf (08B1010h)
008B10BE 46                   inc         esi
008B10BF 83 C4 08             add         esp,8
008B10C2 83 FE 09             cmp         esi,9
008B10C5 7C E9                jl          main+50h (08B10B0h)
	26: 	return 0;
008B10C7 33 C0                xor         eax,eax
008B10C9 5E                   pop         esi
	27: }
008B10CA 8B E5                mov         esp,ebp
008B10CC 5D                   pop         ebp
008B10CD C3                   ret
*/