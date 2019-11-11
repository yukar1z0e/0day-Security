// Random.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdint.h>

#define RNG_a 1664525
#define RNG_c 1013904223

static uint32_t rand_state;

void my_srand(uint32_t init)
{
	rand_state = init
}

int my_rand()
{
	rand_state = rand_state * RNG_a;
	rand_state = rand_state + RNG_c;
	return rand_state & 0x7fff;
}
