#include<stdio.h>
#include<conio.h>

int main()
{
	int x;
	printf("program validasi usia\n");
	printf("masukan usia anda:");
	scanf("%d",&x);
	
	if(x<1){
		printf("USIA ANDA TIDAK VALID",x);
	}
	if(x>100){
		printf("usia anda tidak valid",x);
	}
	else{
		printf("usia yang anda masukan valid",x);
	}
	return 0;
}
