#include <windows.h>
char shellcode[] = "\x90\x90\x90\x90бнбн"; 
DWORD MyExceptionhandler(void)
{
printf("got an exception, press Enter to kill process!\n"); 
getchar();
ExitProcess(1);
}
void test(char * input)
{
char buf[200]; 
int zero=0;
__asm int 3 //used to break process for debug
__try
{
strcpy(buf,input); //overrun the stack 
zero=4/zero; //generate an exception
}
__except(MyExceptionhandler()){}
}
main()
{
test(shellcode);
}