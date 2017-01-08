#include <stdio.h>
#include <windows.h>
#include <tchar.h>

int main(void){

	
	TCHAR pcname[64];
	DWORD size = 100;
	int ret;
	
	TCHAR* text1 = _T("hello");
	
	TCHAR* text2 = _T("‚±‚ñ‚É‚¿‚Í");
	printf("%s\n" , text2);
	
	ret = GetComputerName(pcname,&size);
	
	if(ret=0){
			printf("false\n");
	}else{
			printf("success\n");
	}
	
	printf("%s\n" , pcname);
	printf("%d" , ret);
	return 0;


}