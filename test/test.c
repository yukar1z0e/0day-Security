#include <stdio.h>
#include <windows.h>
#define PASSWORD "1234567"
int verify_password(char *password)
{
	int authenticated;
	char buffer[44];
	authenticated=strcmp(password,PASSWORD);
	strcpy(buffer,password);
	return authenticated;
}
main()
{
	int valid_flag=0;
	char password[1024];
	FILE * fp;
	LoadLibrary("user32.dll");
	if(!(fp=fopen("password.txt","rw+")))
	{
		exit(0);
	}
	fscanf(fp,"%s",password);
	valid_flag=verify_password(password);
	if(valid_flag)
	{
		printf("incorrect");
	}
	else
	{
		printf("pass");
	}
	fclose(fp);
}
