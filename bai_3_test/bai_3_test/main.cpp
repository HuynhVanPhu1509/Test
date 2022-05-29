#include <stdio.h>
#include <math.h>

class phuong_trinh_bac_2
{
public:
	float a;
	float b;
	float c;
	void khoi_tao(float a, float b, float c);
	char kiem_tra_dieu_kien(float a, float b, float c);
	void giai_phuong_trinh(char dieu_kien);
};

char phuong_trinh_bac_2::kiem_tra_dieu_kien(float a, float b, float c)
{
	if (a == 0 && b == 0 && c == 0)
	{
		return 1;
	}
	else if (a == 0 && b == 0 && !c == 0)
	{
		return 0;
	}
	else if (a == 0 && !b == 0)
	{
		return 2;
	}
	else
	{
		return 3;
	}
}

void phuong_trinh_bac_2::giai_phuong_trinh(char dieukien)
{
	if(dieukien==1) printf("phuong trinh co vo so nghiem \r\n");
	if (dieukien == 0) printf("phuong trinh vo nghiem\r\n");
	if (dieukien == 2) 
	{
		printf("phuong trinh da cho la phuong trinh bac nhat \r\n");
		printf("nghiem phuong trinh x= %.03f", -c / b);
	}
	if (dieukien == 3)
	{
		float delta = b * b - 4 * a*c;
		if (delta > 0)
		{
			printf("phuong trinh co hai nghiem phan biet: x1=%0.3f, x2=%0.3f \r\n", (-b + sqrt(delta)) / 2 * a, (-b - sqrt(delta)) / 2 * a);
		}
		else if (delta == 0)
		{
			printf("phuong trinh co nhiem kep: x1=x2= %0.3f \r\n", (-b) / 2 * a);
		}
		else
		{
			printf("phuong trinh vo nghiem");
		}
	}
}

void phuong_trinh_bac_2::khoi_tao(float _a, float _b, float _c)
{
	this-> a = _a;
	this->b = _b;
	this->c = _c;

}

void main()
{
	phuong_trinh_bac_2 A = { 0 };
	A.khoi_tao(1, 2, 1);
	char dieukien = A.kiem_tra_dieu_kien(A.a, A.b, A.c);
	A.giai_phuong_trinh(dieukien);
}