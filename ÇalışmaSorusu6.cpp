#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	int ogrenciID;
	int sinif;
	char memleket[30];
	int dogumTarihi;
	float ortalama;
}ogrenci;

void yazdir(ogrenci o1)
{
	printf("%d\n%d\n%s\n%d\n%f",o1.ogrenciID,o1.sinif,o1.memleket,o1.dogumTarihi,o1.ortalama);
}

ogrenci scanfyap(ogrenci o1)
{
	
	int a=1;
	printf("Ogrenci ID giriniz:");
	scanf("%d",&(o1).ogrenciID);
	
	while(a != 0)
	{
		printf("Sinif giriniz:");
		scanf("%d",&(o1).sinif);
		
			if((o1).sinif <= 0 || (o1).sinif >= 4)
		{
			printf("Yeniden giriniz:");
		}
		else
		{
			break;
		}
	}
		
		printf("Ogrenci memleket:");
		scanf("%s",(o1).memleket);
		
	
	
	while(a != 0)
	{
		printf("Ogrenci ortalama:");
		scanf("%f",&(o1).ortalama);
		
		if((o1).ortalama <= 0 || (o1).ortalama > 100)
		{
			printf("Yeniden dene");
		}
		else
		{
			break;
		}
	}
	
	while(a != 0)
	{
		printf("Ogrenci dogum tarihi:");
		scanf("%d",&(o1).dogumTarihi);
		
		if((o1).dogumTarihi <= 1990 || (o1).dogumTarihi >= 2010)
		{
			printf("Yeniden dene:");
		}
		else
		{
			break;
		}
	}
	return (o1);
}

int main()
{
	ogrenci o1;
	o1 = scanfyap(o1);
	yazdir(o1);
		
	return 0;
}
