#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
//struckeri bir data olarak kullanaca��z. kullan�lacak her de�er pointer olacak ve datan�n kendi dizi olacak
//1-kelime ekle\n2-belirli indexdeki kelimeyi sil\n3-belirli indexdeki kelimeyi de�i�tir\n4-belirli indexdeki kelimenin �st�ne yaz\n5-kelimeleri yazd�r\n6- program� kapat
//restorant int ID, Char[] Kullan�c��sim, Char[] en�okSevilenYemek, int ortalmaHarcananPara, int HaftadaGelmeS�kl���;

struct MA
{
	int *ID;
	char *KullaniciIsmi;
	char *EnSevilenYemek;
	int *OrtalamaHarcananPara;
	int *HaftadaGelmeSikligi;
}
r1[30];

void Yazdir(MA *r1,int ID)
{
	printf("Kullan�c� ID giriniz:");
	scanf("%d",&(r1->ID));
	
	printf("Kullan�c�n�n ismi:");
	scanf("%s",&r1->KullaniciIsmi);
	
	printf("Kullan�c�n�n en sevdi�i yemek:");
	scanf("%s",&r1->EnSevilenYemek);
	
	printf("Kullan�c�n�n ortalama harcad��� para:");
	scanf("%d",&r1->OrtalamaHarcananPara);
	
	printf("Kullan�c�n�n gelme s�kl���:");
	scanf("%d",&r1->HaftadaGelmeSikligi);
	
}
void Silme(MA *r1,int ID)
{
	printf("Silenecek kullan�c� ID giriniz:");
	scanf("%d",&(r1->ID));
	
	free(r1->ID);
	free(r1->KullaniciIsmi);
	free(r1->EnSevilenYemek);
	free(r1->OrtalamaHarcananPara);
	free(r1->HaftadaGelmeSikligi);
}
void KullaniciDegistir(MA *r1,int ID)
{
	int yeniDeger;
	char kelime[255];
	
	printf("De�i�tirmek istedi�inizi kullanici ID giriniz:");
	scanf("%d",&yeniDeger);
	if(yeniDeger == 1)
	{
	printf("Ismi ne ile de�i�tirmek istersiniz:");
	scanf("%s",&kelime);
	strcpy(r1->KullaniciIsmi,kelime);
	
	printf("En sevdi�i yeme�i ne ile de�i�tirmek istersnizi:");
	scanf("%s",&kelime);
	strcpy(r1->EnSevilenYemek,kelime);
	}
	else
	{
		printf("Yanl�� de�er girdiniz");
	}
	printf("Kullan�c� yeni ismi: %s\n",&r1->KullaniciIsmi);
	printf("Kullan�c�n�n en sevdi�i yeni yemek: %s\n",r1->EnSevilenYemek);
	
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int ID=0,secim,a;
	
	for(a = 1 ; a != 0;)
	{
	printf("1-Kullan�c� Ekle\n2-Kullan�c� Silme\n3-Kullan�c� De�i�tir\n4-Kullan�c�n�n �st�ne Yaz\n5-Kullan�c�y� G�ster\n6- Kullan�c�lar� g�ster\n7-program� kapat.\n");
	scanf("%d",&secim);
	
	if(secim == 1)
	{
		Yazdir(&r1[ID],ID);
		ID++;			
	}
	else if(secim == 2)
	{
		Silme(&r1[ID],ID);
		ID++; 	
	}
	else if(secim == 3)
	{
		KullaniciDegistir(&r1[ID],ID);
		ID++;	
	}
	else if(secim == 4)
	{
		
	}
	else if(secim == 5)
	{
		Yazdir(&r1[ID],ID);
		ID++;
	}
	else if(secim == 6)
	{
		
	}
	else if(secim == 7)
	{
		printf("Program kapat�l�yor...\nTe�ekk�r eder iyi g�nler dileriz...");
		break;
	}
	
}
	return 0;
}
