// Systemtime.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
typedef struct _SYSTEMTIME {
	WORD wYear;
	WORD wMonth;
	WORD wDayOfWeek;
	WORD wDay;
	WORD wHour;
	WORD wMinute;
	WORD wSecond;
	WORD wMilliseconds;
} SYSTEMTIME,*PSYSTEMTIME;
*/


#include <Windows.h>
#include <stdio.h>

void main()
{
	SYSTEMTIME t;
	GetSystemTime(&t);

	printf("%04d-%02d-%02d %02d:%02d:%02d\n", t.wYear, t.wMonth, t.wDay, t.wHour, t.wMinute, t.wSecond);
	return;
}


//--- C:\Users\test\0daySecurity\Systemtime\Systemtime.cpp -----------------------
//     1: // Systemtime.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//     2: //
//     3: /*
//     4: typedef struct _SYSTEMTIME {
//     5: 	WORD wYear;
//     6: 	WORD wMonth;
//     7: 	WORD wDayOfWeek;
//     8: 	WORD wDay;
//     9: 	WORD wHour;
//    10: 	WORD wMinute;
//    11: 	WORD wSecond;
//    12: 	WORD wMilliseconds;  
//    13: } SYSTEMTIME,*PSYSTEMTIME;
//    14: */
//    15: 
//    16: 
//    17: #include <Windows.h>
//    18: #include <stdio.h>
//    19: 
//    20: void main()
//    21: {
//00141080 55                   push        ebp  
//00141081 8B EC                mov         ebp,esp  
//     1: // Systemtime.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//     2: //
//     3: /*
//     4: typedef struct _SYSTEMTIME {
//     5: 	WORD wYear;
//     6: 	WORD wMonth;
//     7: 	WORD wDayOfWeek;
//     8: 	WORD wDay;
//     9: 	WORD wHour;
//    10: 	WORD wMinute;
//    11: 	WORD wSecond;
//    12: 	WORD wMilliseconds;
//    13: } SYSTEMTIME,*PSYSTEMTIME;
//    14: */
//    15: 
//    16: 
//    17: #include <Windows.h>
//    18: #include <stdio.h>
//    19: 
//    20: void main()
//    21: {
//00141083 83 EC 10             sub         esp,10h  
//    22: 	SYSTEMTIME t;
//    23: 	GetSystemTime(&t);
//00141086 8D 45 F0             lea         eax,[t]  
//00141089 50                   push        eax  
//0014108A FF 15 00 20 14 00    call        dword ptr [__imp__GetSystemTime@4 (0142000h)]  
//    24: 
//    25: 	printf("%04d-%02d-%02d %02d:%02d:%02d\n", t.wYear, t.wMonth, t.wDay, t.wHour, t.wMinute, t.wSecond);
//00141090 0F B7 4D FC          movzx       ecx,word ptr [ebp-4]  
//00141094 51                   push        ecx  
//00141095 0F B7 55 FA          movzx       edx,word ptr [ebp-6]  
//00141099 52                   push        edx  
//0014109A 0F B7 45 F8          movzx       eax,word ptr [ebp-8]  
//0014109E 50                   push        eax  
//0014109F 0F B7 4D F6          movzx       ecx,word ptr [ebp-0Ah]  
//001410A3 51                   push        ecx  
//001410A4 0F B7 55 F2          movzx       edx,word ptr [ebp-0Eh]  
//001410A8 52                   push        edx  
//001410A9 0F B7 45 F0          movzx       eax,word ptr [t]  
//001410AD 50                   push        eax  
//001410AE 68 08 21 14 00       push        142108h  
//001410B3 E8 88 FF FF FF       call        printf (0141040h)  
//001410B8 83 C4 1C             add         esp,1Ch  
//    26: 	return;
//    27: }
//001410BB 33 C0                xor         eax,eax  
//001410BD 8B E5                mov         esp,ebp  
//001410BF 5D                   pop         ebp  
//001410C0 C3                   ret  

