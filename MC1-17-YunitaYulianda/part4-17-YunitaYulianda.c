#include<stdio.h>

int main(){
	int i=5;
	int perulangan;
	
	
//meminta input dari user
	printf("\t-------------------------------\n");	
	printf("\tProgram Perulangan Kelipatan 5\n");
	printf("\t-------------------------------\n\n");
	printf("Masukkan Batas perulangannya = ");
	scanf("%i",&perulangan);
	
//syarat agar terjadi perulangan kelipatan 5	
	while(i<=perulangan){
		printf("%i",i);
		printf("\n\n");
		i++;
		i+=4;
		
	}
	
	return 0;
}
