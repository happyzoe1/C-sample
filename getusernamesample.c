#include <stdio.h>
#include <windows.h>
#include <tchar.h>

int main(void){

	
	TCHAR pcname[64];
	TCHAR username[64];
	DWORD size = 100;
	int ret;
	
	ret = GetComputerName(pcname,&size);
	
	if(ret=0){
			printf("ComputerFalse\n");
	}else{
			printf("ComputerSuccess\n");
	}

	ret = GetUserName(username,&size);

		
	if(ret=0){
			printf("UserFalse\n");
	}else{
			printf("UserSuccess\n");
	}
	
	printf("%s\n" , pcname);
	printf("%s\n" , username);
	return 0;


}