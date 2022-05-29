#include<Windows.h>
#include<stdio.h>


DWORD WINAPI Task1(LPVOID a)
{
	for (;;)
	{
		printf("[Task 1 ] Xin Chao\r\n");
		Sleep(1000);
	}
}
DWORD WINAPI Task2(LPVOID b)
{
	for (;;)
	{
		printf("[Task 2 ] Say Hello\r\n");
		Sleep(2000);
	}
}

void main()
{
	CreateThread(0, 32, Task1, 0, 0, 0);
	CreateThread(0,32, Task2, 0, 0, 0);
	while (1)
	{

	}
}