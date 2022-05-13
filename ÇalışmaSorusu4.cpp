#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


//int öðrenciID,char[dizi] öðrenciAdý, int öðrenciSýnýf, int öðrenciDönemOrt, int Kaldýðýderssayýsý,char[Dizi] enSevilenDers;
//verilen fieldleri struct a verin main içinde deðil structa bir diziye data olarak kaydedin sonra tekrar sorup o dataya ulaþýn;

struct HG{
	int  ogrenciID[30];
	char *ogrenciAdi[30];
	int  ogreciSinif[30];
	int  ogrenciOrt[30];
	int  kaldigiDers[30];
	char *enSevilenDers[30];
}ogrenci;

int main (){
	
	int secim,ID=0;
	char kelime[255];
	
	setlocale(LC_ALL, "Turkish");
	for(int sinir=1;sinir!=0;){
		printf("1- öðrenci ekle\n2-öðrenci verisine ulaþ\n3-programi kapat\nNe yapmak istersin : ");
		scanf("%d",&secim);
		if(secim==1){
			printf("öðrencinin ID girin : ");
			scanf("%d",&ogrenci.ogrenciID[ID]);
			
			printf("öðrencinin Adýný girin : ");
			scanf("%s",kelime);
			ogrenci.ogrenciAdi[ID]=(char*) malloc ((strlen(kelime))*sizeof(char));
			strcpy(ogrenci.ogrenciAdi[ID],kelime);
			
			printf("öðrencinin sýnýfýný girin : ");
			scanf("%d",&ogrenci.ogreciSinif[ID]);
			
			printf("öðrencinin Ortalamasý girin : ");
			scanf("%d",&ogrenci.ogrenciOrt[ID]);
			
			printf("öðrencinin kadlýðý ders sayýsý girin : ");
			scanf("%d",&ogrenci.kaldigiDers[ID]);
			
			printf("öðrencinin en sevdiði ders girin : ");
			scanf("%s",kelime);
			ogrenci.enSevilenDers[ID]=(char*) malloc ((strlen(kelime))*sizeof(char));
			strcpy(ogrenci.enSevilenDers[ID],kelime);
			
			
			ID++;
		}
		
		else if(secim==2){
			printf("Hangi sýralý ðrenciye ulaþmak istiyoesun : ");
			scanf("%d",&secim);
			
			printf("ID : %d\nAdý : %s\nSýnfý : %d\nOrtalamasý : %d\nKaldýðý Ders sayýsý : %d\nEn sevdiði ders : %s\n",ogrenci.ogrenciID[secim],ogrenci.ogrenciAdi[secim],ogrenci.ogreciSinif[secim],ogrenci.ogrenciOrt[secim],ogrenci.kaldigiDers[secim],ogrenci.enSevilenDers[secim]);
		}
		
		else if(secim==3){
			sinir=0;
		}	
	}
	return 0;
}
