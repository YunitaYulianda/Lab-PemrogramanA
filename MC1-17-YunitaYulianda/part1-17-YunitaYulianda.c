#include<stdio.h>

int main(){
	char nama[25];//deklarasi variabel char karena string yang diinputkan
	int nilai;
	
//program yang menghasilkan output untuk nilai seorang mahasiswa
	printf("***Program untuk fungsi input dan output***");
	
	//meminta input dari user
	printf("\n\nMasukkan nama  : ");
	scanf("%[^\n]s", nama);
	
	printf("\nMasukkan nilai : ");
	scanf("%i", &nilai);
	
	//hasil dari inputkan user
	printf("\nMahasiswa atas nama %s mendapatkan nilai %i",nama,nilai);
	
	printf("\n");
	
	return 0;
}
