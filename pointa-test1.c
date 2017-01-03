#include <stdio.h>

void main(){
	
	int a = 12;
	int *ptr;
	
	ptr = &a;		//•Ï”a ‚Ìƒƒ‚ƒŠ”Ô’n‚ğŠi”[
	printf("a=%d\n", *ptr);
	a = *ptr * 3;
	printf("a=%d\n", a);
	return;	
	
}