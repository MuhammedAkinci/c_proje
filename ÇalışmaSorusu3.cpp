#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dersim
{
	int derskodu;
	char dersismi[30];
	int derssinifi;
	int dersmevcudu;
}ders1,ders2;

int main()
{
	printf("ders kodu:");
	scanf("%d",&ders1.derskodu);
	
	printf("ders ismi:");
	scanf("%s",&ders1.dersismi);
	
	printf("ders sinifi:");
	scanf("%d",&ders1.derssinifi);
	
	printf("ders mevcudu:");
	scanf("%d",&ders1.dersmevcudu);
	
	printf("%d\n%s\n%d\n%d\n",ders1.derskodu,ders1.dersismi,ders1.derssinifi,ders1.dersmevcudu);
	
	ders2.derskodu = (ders1.derskodu) * 2;
	ders2.dersmevcudu = (ders1.dersmevcudu) * 2;
	ders2.derssinifi = (ders1.derssinifi) * 2;
	strcpy(ders2.dersismi,ders1.dersismi); 
	
	printf("\n\n");
	printf("%d\n%s\n%d\n%d\n",ders2.derskodu,ders2.dersismi,ders2.derssinifi,ders2.dersmevcudu);
}
