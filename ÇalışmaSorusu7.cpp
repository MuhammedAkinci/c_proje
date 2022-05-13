#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>
//struckeri bir data olarak kullanacaðýz. kullanýlacak her deðer pointer olacak ve datanýn kendi dizi olacak
//1-kelime ekle\n2-belirli indexdeki kelimeyi sil\n3-belirli indexdeki kelimeyi deðiþtir\n4-belirli indexdeki kelimenin üstüne yaz\n5-kelimeleri yazdýr\n6- programý kapat
//restorant int ID, Char[] KullanýcýÝsim, Char[] enÇokSevilenYemek, int ortalmaHarcananPara, int HaftadaGelmeSýklýðý;

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
	printf("Kullanýcý ID giriniz:");
	scanf("%d",&(r1->ID));
	
	printf("Kullanýcýnýn ismi:");
	scanf("%s",&r1->KullaniciIsmi);
	
	printf("Kullanýcýnýn en sevdiði yemek:");
	scanf("%s",&r1->EnSevilenYemek);
	
	printf("Kullanýcýnýn ortalama harcadýðý para:");
	scanf("%d",&r1->OrtalamaHarcananPara);
	
	printf("Kullanýcýnýn gelme sýklýðý:");
	scanf("%d",&r1->HaftadaGelmeSikligi);
	
}
void Silme(MA *r1,int ID)
{
	printf("Silenecek kullanýcý ID giriniz:");
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
	
	printf("Deðiþtirmek istediðinizi kullanici ID giriniz:");
	scanf("%d",&yeniDeger);
	if(yeniDeger == 1)
	{
	printf("Ismi ne ile deðiþtirmek istersiniz:");
	scanf("%s",&kelime);
	strcpy(r1->KullaniciIsmi,kelime);
	
	printf("En sevdiði yemeði ne ile deðiþtirmek istersnizi:");
	scanf("%s",&kelime);
	strcpy(r1->EnSevilenYemek,kelime);
	}
	else
	{
		printf("Yanlýþ deðer girdiniz");
	}
	printf("Kullanýcý yeni ismi: %s\n",&r1->KullaniciIsmi);
	printf("Kullanýcýnýn en sevdiði yeni yemek: %s\n",r1->EnSevilenYemek);
	
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int ID=0,secim,a;
	
	for(a = 1 ; a != 0;)
	{
	printf("1-Kullanýcý Ekle\n2-Kullanýcý Silme\n3-Kullanýcý Deðiþtir\n4-Kullanýcýnýn Üstüne Yaz\n5-Kullanýcýyý Göster\n6- Kullanýcýlarý göster\n7-programý kapat.\n");
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
		printf("Program kapatýlýyor...\nTeþekkür eder iyi günler dileriz...");
		break;
	}
	
}
	return 0;
}
