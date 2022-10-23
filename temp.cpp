#include <stdio.h>

int main()
{
	float huashidu , sheshidu;

	int least    , most    ;
	float jiange;
	least = 0;
	most  = 300;
	jiange= 0.001;
	huashidu=least;
	while(huashidu <= huashidu)
	{
		sheshidu = 5 * (huashidu - 32)/9;
		printf ("%f\t\t%f\n",huashidu, sheshidu);
		huashidu = huashidu + jiange ;
	}
	return 0;
 } 
