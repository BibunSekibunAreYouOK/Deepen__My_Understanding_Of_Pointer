#include<stdio.h>
void pointer(int n, double* x_p);

int main(void)
{
	int a, b;
	int* p;//�����^�|�C���^�p���邽�߂ɁAp�̃|�C���^�֐���錾����
	p = &a;//a�̃A�h���X��p�ɓ����
	*p = 100;//p�̃������̒��g��100�ł���B
	b = *p + 1;//b��p�̃������̒��g��������B���̂Ƃ��Aa�̃A�h���X��1000�Ԓn�Ɖ��肷��ƁAb������A�h���X��1004�Ԓn
	printf("a=%d,b=%d\n", a, b);//[����]a�̃�������100
	int n;
	return 0;
}

void pointer(int n, double* x_p)
{
	///////
}