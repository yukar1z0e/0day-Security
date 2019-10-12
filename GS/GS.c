#define _CRT_SECURE_NO_WARNINGS
#include"string.h"

int vulfuction(char* str)
{
	char arry[4];
	strcpy(arry, str);
	return 1;
}
int main(int argc, char* argv[])
{
	char* str = "yeah,the fuction is without GS";
	vulfuction(str);
	return 0;
}