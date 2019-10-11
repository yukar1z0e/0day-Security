#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#define PASSWORD "1234567"
int verify_password(char* password)
{
	int authenticated;
	char buffer[44];
	authenticated = strcmp(password, PASSWORD);
	strcpy(buffer, password); //over flowed here! 
	return authenticated;
}
void main()
{
	printf("start\n");
	int valid_flag = 0;
	char password[1024];
	FILE * fp;
	LoadLibrary("user32.dll"); //prepare for messagebox 
	if (!(fp = fopen("C:\\Users\\test\\Desktop\\password.txt", "rw+")))
	{
		exit(0);
	}
	//fp = fopen("D:\Code\Notes\0day Security\test2\Debug\password.txt", "rw+");
	fscanf(fp, "%s", password);
	valid_flag = verify_password(password);
	if (valid_flag)
	{
		printf("incorrect password!\n");
	}
	else
	{
		printf("Congratulation! You have passed the verification!\n");
	}
	fclose(fp);
}
// test gitignore
