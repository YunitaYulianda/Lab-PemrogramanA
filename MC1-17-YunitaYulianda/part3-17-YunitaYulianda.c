#include <stdio.h>

int main(){

   int nilai,a;
   
   	printf("\n~~Program Menentukan Grade dan Penentuan lulus/tidak ~~\n \n \n");
   	printf("Ingin mencari apa?\n1. Mencari grade dari sebuah nilai \n2. Penentuan lulus atau tidak dari sebuah nilai");
	printf("\n \nMasukkan pilihan anda (dalam angka) = ");
	scanf("%d", &a);
	
	switch (a){
		case 1:
			
	printf("\n------------------------------------");
	printf("\nProgram menentukan grade dari nilai");
	printf("\n------------------------------------");
	printf("\n\nMasukkan nilai yang anda dapatkan = ");
	scanf("%d",&nilai);
	
	if(nilai>80){
		printf("\nGrade anda adalah 'A'");
	}else if(nilai>60 && nilai<=80){
		printf("\nGrade anda adalah 'B'");
	}else if(nilai>40 && nilai<=60){
		printf("\nGrade anda adalah 'C'");
	}else if(nilai>20 && nilai<=40){
		printf("\nGrade anda adalah 'D'");
	}else{
		printf("\nGrade anda adalah 'E'");
	};
	
	printf("\n\n");
	printf("Yok Terus Semangat :)");
	break;
	
	
		case 2:
	
	printf("\n-----------------------------------------------");
	printf("\nProgram Penentuan lulus/tidak dari sebuah nilai\n");
	printf("-----------------------------------------------\n\n");		
	printf("Masukkan nilai = ");
	scanf("%d",&nilai);
	if(nilai>=60){
	printf("\nSelamat Anda lulus dengan nilai %i \n",nilai);
	}else{
	puts("\nMaaf, anda gagal.");
	}
	break;
   }
	
	return 0;
	
}
