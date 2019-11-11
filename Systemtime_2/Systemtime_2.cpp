// Systemtime_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <Windows.h>
#include <stdio.h>

void main()
{
	SYSTEMTIME* t;
	t = (SYSTEMTIME*)malloc(sizeof(SYSTEMTIME));
	GetSystemTime(t);
	printf("%04d-%02d-%02d %02d:%02d:%02d\n", t->wYear, t->wMonth, t->wDay, t->wHour, t->wMinute, t->wSecond);
	free(t);
	return;
}

/*
--- C:\Users\test\0daySecurity\Systemtime_2\Systemtime_2.cpp -------------------
	 1: // Systemtime_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <Windows.h>
	 5: #include <stdio.h>
	 6:
	 7: void main()
	 8: {
00C61040 56                   push        esi
	 9: 	SYSTEMTIME* t;
	10: 	t = (SYSTEMTIME*)malloc(sizeof(SYSTEMTIME));
00C61041 6A 10                push        10h
00C61043 FF 15 54 20 C6 00    call        dword ptr [__imp__malloc (0C62054h)]
00C61049 83 C4 04             add         esp,4
00C6104C 8B F0                mov         esi,eax
	11: 	GetSystemTime(t);
00C6104E 56                   push        esi
00C6104F FF 15 00 20 C6 00    call        dword ptr [__imp__GetSystemTime@4 (0C62000h)]
	12: 	printf("%04d-%02d-%02d %02d:%02d:%02d\n", t->wYear, t->wMonth, t->wDay, t->wHour, t->wMinute, t->wSecond);
00C61055 0F B7 4E 0C          movzx       ecx,word ptr [esi+0Ch]
00C61059 0F B7 46 02          movzx       eax,word ptr [esi+2]
00C6105D 51                   push        ecx
00C6105E 0F B7 4E 0A          movzx       ecx,word ptr [esi+0Ah]
00C61062 51                   push        ecx
	12: 	printf("%04d-%02d-%02d %02d:%02d:%02d\n", t->wYear, t->wMonth, t->wDay, t->wHour, t->wMinute, t->wSecond);
00C61063 0F B7 4E 08          movzx       ecx,word ptr [esi+8]
00C61067 51                   push        ecx
00C61068 0F B7 4E 06          movzx       ecx,word ptr [esi+6]
00C6106C 51                   push        ecx
00C6106D 50                   push        eax
00C6106E 0F B7 06             movzx       eax,word ptr [esi]
00C61071 50                   push        eax
00C61072 68 08 21 C6 00       push        0C62108h
00C61077 E8 94 FF FF FF       call        printf (0C61010h)
	13: 	free(t);
00C6107C 56                   push        esi
00C6107D FF 15 50 20 C6 00    call        dword ptr [__imp__free (0C62050h)]
00C61083 83 C4 20             add         esp,20h
	14: 	return;
	15: }
00C61086 33 C0                xor         eax,eax
00C61088 5E                   pop         esi
00C61089 C3                   ret
*/