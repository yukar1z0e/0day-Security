// Memcpy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

void my_memcpy(unsigned char* dst, unsigned char* src, size_t cnt)
{
	size_t i;
	for (i = 0; i < cnt; i++)
		dst[i] = src[i];
};

int main() {
	return 0;
}