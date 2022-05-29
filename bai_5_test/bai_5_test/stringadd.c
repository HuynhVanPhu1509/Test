#include "stringadd.h"
char* stradd(char* str, char *str1)
{
	char *ketqua = 0;
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == str1[0])
		{
			int j = 0;
			char kiemtra = 0;
			while (str1[j] != 0)
			{
				if (str[i + j] != str1[j])
				{
					kiemtra = 1; break;

				}
				else kiemtra = 2;
				j++;
			}
			if (kiemtra == 2) {
				ketqua = &str[i];
				break;
			}
		}
		i++;
	}
	return ketqua;

}