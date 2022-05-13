// dosyada dosyaya veri aktaran kod...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main()
{
	FILE *dosya = fopen("dosyadan.txt", "a");
	
	int id;
	char b[255];
	float para;
	
	//  fprintf(dosyaninAdresi,"ID   \t Musteri Ad   \t Musteri Butcesi\n");
	
	if(dosya == NULL)
	{
		printf("dosya acilamadi!");
	}
	else
	{
		printf("Musteri ID  \t Musteri isim \t Musteri Butce giriniz: ");
		scanf("%d %s %f",&id, &b, &para);
		
		while(!feof(stdin))
		{
			fprintf(dosya,"%d %s %f",id, b ,para);
			printf("Musteri ID  \t Musteri isim \t Musteri Butce giriniz: ");
			scanf("%d %s %f",&id, &b, &para);
		}
	}
	printf("\n\n\n\n");
	
	dosya = fopen("dosyadan.txt", "r");
	FILE *dosya2 = fopen("verialma.txt", "w");
	
	fscanf(dosya, "%d %s %f",&id, &b, &para);
	
	while(!feof(dosya))
	{
		if(para < 0)
		{
			fprintf(dosya2,"eksi butceler idleri: %d ve %f",id,para);
			fscanf(dosya,"%d %s %f",id,b,para);
		}
	}
	
	return 0;
}
