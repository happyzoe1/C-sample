#include <stdio.h>

void main(){
	
	int a = 12;
	int *ptr;
	
	ptr = &a;		//変数a のメモリ番地を格納
	printf("a=%d\n", *ptr);
	a = *ptr * 3;
	printf("a=%d\n", a);
	return;	
	
}