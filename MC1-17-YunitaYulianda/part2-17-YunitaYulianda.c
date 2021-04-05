#include<stdio.h>

int main(){
	int a=1;
	int b=5;
	int c;
	
	
//Program pertama untuk mengimplementasikan aturan decrement dan increment
	printf("--------------------------------------------------------------\n");
	printf("Program membentuk urutan angka dari 1 sampai 5 dan sebaliknya\n");
	printf("--------------------------------------------------------------\n\n");
	printf("1 ke 5\t\t5 ke 1\n");
	
	printf("  %i\t\t  %i\n",a,b);
	++a;
	--b;
	printf("  %i\t\t  %i\n",a,b);
	a++;
	b--;
	printf("  %i\t\t  %i\n",a,b);
	++a;
	--b;
	printf("  %i\t\t  %i\n",a,b);
	a++;
	b--;
	printf("  %i\t\t  %i\n\n",a,b);
	
	
	
	
//Program kedua untuk mengimplementasikan aturan casting
	printf("------------------------------------------------------\n");	
	printf("Program menghitung jumlah tahun dengan metode casting\n");
	printf("------------------------------------------------------\n\n");

	printf("Masukkan jumlah bulan = ");
	scanf("%i",&c);
	
	float tahun = (float)c/12;
	
	printf("\nJumlah tahun = %.1f tahun\n\n\n",tahun);
	
	
	
	
//Program ketiga untuk mengimplementasikan aturan konstanta
	printf("----------------------------------------\n");	
	printf("Program untuk penetapan nilai konstanta\n");
	printf("----------------------------------------\n\n");
	
	const int RADIUS=7;
	const double PHI=3.14;
	float area;
	area = PHI*RADIUS*RADIUS;
	printf("Area : %.2f", area);
	
	printf("\n");
	
//catatan untuk konstanta; konstanta bisa dideklarasikan dengan 2 cara yaitu dengan #define dibawah
//include atau dengan memakai "const" sebagai syarat untuk konstanta  
	
	return 0;
}
