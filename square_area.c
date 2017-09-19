#include <stdio.h>

int main(void)
{
	float x=1; //길이
	float sq=1;//넓이
	float num2=0; // 두번째 값

	while(sq-num2>=0.0000009)
	{
		printf("x가 %f 일때 넓이의 차이는 %f - %f = %f\n",x,sq,num2,sq-num2);
		
		x/=2;
		num2=sq;
		sq=num2+(x*x);
	}

	return 0;

}