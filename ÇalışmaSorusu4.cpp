#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


//int ��renciID,char[dizi] ��renciAd�, int ��renciS�n�f, int ��renciD�nemOrt, int Kald���derssay�s�,char[Dizi] enSevilenDers;
//verilen fieldleri struct a verin main i�inde de�il structa bir diziye data olarak kaydedin sonra tekrar sorup o dataya ula��n;

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
		printf("1- ��renci ekle\n2-��renci verisine ula�\n3-programi kapat\nNe yapmak istersin : ");
		scanf("%d",&secim);
		if(secim==1){
			printf("��rencinin ID girin : ");
			scanf("%d",&ogrenci.ogrenciID[ID]);
			
			printf("��rencinin Ad�n� girin : ");
			scanf("%s",kelime);
			ogrenci.ogrenciAdi[ID]=(char*) malloc ((strlen(kelime))*sizeof(char));
			strcpy(ogrenci.ogrenciAdi[ID],kelime);
			
			printf("��rencinin s�n�f�n� girin : ");
			scanf("%d",&ogrenci.ogreciSinif[ID]);
			
			printf("��rencinin Ortalamas� girin : ");
			scanf("%d",&ogrenci.ogrenciOrt[ID]);
			
			printf("��rencinin kadl��� ders say�s� girin : ");
			scanf("%d",&ogrenci.kaldigiDers[ID]);
			
			printf("��rencinin en sevdi�i ders girin : ");
			scanf("%s",kelime);
			ogrenci.enSevilenDers[ID]=(char*) malloc ((strlen(kelime))*sizeof(char));
			strcpy(ogrenci.enSevilenDers[ID],kelime);
			
			
			ID++;
		}
		
		else if(secim==2){
			printf("Hangi s�ral� �renciye ula�mak istiyoesun : ");
			scanf("%d",&secim);
			
			printf("ID : %d\nAd� : %s\nS�nf� : %d\nOrtalamas� : %d\nKald��� Ders say�s� : %d\nEn sevdi�i ders : %s\n",ogrenci.ogrenciID[secim],ogrenci.ogrenciAdi[secim],ogrenci.ogreciSinif[secim],ogrenci.ogrenciOrt[secim],ogrenci.kaldigiDers[secim],ogrenci.enSevilenDers[secim]);
		}
		
		else if(secim==3){
			sinir=0;
		}	
	}
	return 0;
}
