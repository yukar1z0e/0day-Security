// printf.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

int main()
{
	printf("a=%d; b=%d; c=%d", 1, 2, 3);
	/*
	00F91040 6A 03                push        3
	00F91042 6A 02                push        2
	00F91044 6A 01                push        1
	00F91046 68 08 21 F9 00       push        offset string "a=%d; b=%d; c=%d" (0F92108h)
	00F9104B E8 C0 FF FF FF       call        printf(0F91010h)
	00F91050 83 C4 10             add         esp, 10h
	*/
	return 0;
}
