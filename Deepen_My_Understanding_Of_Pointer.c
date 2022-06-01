#include<stdio.h>
void pointer(int n, double* x_p);

int main(void)
{
	int a, b;
	int* p;//整数型ポインタ用いるために、pのポインタ関数を宣言する
	p = &a;//aのアドレスをpに入れる
	*p = 100;//pのメモリの中身は100である。
	b = *p + 1;//bにpのメモリの中身を代入する。このとき、aのアドレスを1000番地と仮定すると、bが入るアドレスは1004番地
	printf("a=%d,b=%d\n", a, b);//[結果]aのメモリは100
	int n;
	return 0;
}

void pointer(int n, double* x_p)
{
	///////
}