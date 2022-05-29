#include<stdio.h>

typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;

char kiem_tra(char* dieukien)
{
	if (dieukien[2] == 'f') return 0;
	if(dieukien[2]=='n') return 1;
	
}

void main()
{
	char* data = (char*)"HTTP1.1 200 OK\r\n{\r\n\"light\": \"on\",\r\n\"fan\": \"off\",\r\n\"motor\" : \"off\"\r\n}";
	printf("string: %s ", data);
	smartHome_t A = { 0 };
	char* thiet_bi_1 = "\"light\": ";
	char* thiet_bi_2= "\"fan\": ";
	char* thiet_bi_3 = "\"motor\" : ";

	//lay trang thai thiet bi 1
	char* ketqua1 = stradd(data, thiet_bi_1) + len(thiet_bi_1);
	int index = 0;
	char kq1[6] = { 0 };
	while (ketqua1[index] != ',')
	{
		kq1[index] = ketqua1[index];
		index++;
	}
	
	//lay trang thai thiet bi 2
	char* ketqua2 = stradd(data, thiet_bi_2) + len(thiet_bi_2);
	int index1 = 0;
	char kq2[6] = { 0 };
	while (ketqua2[index1] != ',')
	{
		kq2[index1] = ketqua2[index1];
		index1++;
	}
	//lay trang thai thiet bi 3
	char* ketqua3 = stradd(data, thiet_bi_3) + len(thiet_bi_3);
	int index2 = 0;
	char kq3[6] = { 0 };
	while (ketqua3[index2] != '}')
	{
		kq3[index2] = ketqua3[index2];
		index2++;
	}

	A.light = kiem_tra(kq1);
	A.fan = kiem_tra(kq2);
	A.motor= kiem_tra(kq3);
}