// Goto.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	printf("begin\n");
	goto exit;
	printf("skip me!\n");
exit:
	printf("end\n");
};

/*
	 1: // Goto.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
	 2: //
	 3:
	 4: #include <stdio.h>
	 5:
	 6: int main()
	 7: {
00941080 55                   push        ebp
00941081 8B EC                mov         ebp,esp
	 8: 	printf("begin\n");
00941083 68 08 21 94 00       push        942108h
00941088 E8 B3 FF FF FF       call        printf (0941040h)
0094108D 83 C4 04             add         esp,4
	 9: 	goto exit;
00941090 EB 0F                jmp         exit (09410A1h)
00941092 EB 0D                jmp         exit (09410A1h)
	10: 	printf("skip me!\n");
00941094 68 10 21 94 00       push        942110h
00941099 E8 A2 FF FF FF       call        printf (0941040h)
0094109E 83 C4 04             add         esp,4
	11: exit:
	12: 	printf("end\n");
009410A1 68 1C 21 94 00       push        94211Ch
009410A6 E8 95 FF FF FF       call        printf (0941040h)
	11: exit:
	12: 	printf("end\n");
009410AB 83 C4 04             add         esp,4
	13: };
009410AE 33 C0                xor         eax,eax
009410B0 5D                   pop         ebp
009410B1 C3                   ret
*/