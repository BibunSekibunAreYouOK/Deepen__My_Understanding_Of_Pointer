#include<stdio.h>

int main(void)
{
	int a, b;
	int* p;//整数型ポインタ用いるために、pのポインタ関数を宣言する
	p = &a;//aのアドレスをpに入れる
	*p = 100;//pのアドレスの中身は100である。

}