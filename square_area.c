#include <stdio.h>

int main(void)
{
	float x=1; //����
	float sq=1;//����
	float num2=0; // �ι�° ��

	while(sq-num2>=0.0000009)
	{
		printf("x�� %f �϶� ������ ���̴� %f - %f = %f\n",x,sq,num2,sq-num2);
		
		x/=2;
		num2=sq;
		sq=num2+(x*x);
	}

	return 0;

}