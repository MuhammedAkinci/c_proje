// 2 ile b�l�nebilen say�lar� 4 ile �arp. 3 ile b�l�nenleri 6 ile �arp. 5 ile b�l�nenleri 2 ile �arp. her dizi i�indeki eleman ile dizi ismi ayn� olsun.
#include<stdio.h>
int main()
{
	int a1[20],i;
	for(i=0;i<20;i++){
		a1[i]= i+1;
	}
	int b;
	for(b=0;b<20;b++){
	if (a1[b] % 2 == 0){
		a1[b] = a1[b] * 4;
		}
	else if (a1[b] % 3 == 0){
		a1[b] = a1[b] * 6;
		}
	else if (a1[b] % 5 == 0){
	 a1[b] = a1[b] * 2;
	}
	}
	int a,toplam = 0;
	for(a=0;a<20;a++){
		printf("%d. sayilar: %d",a,a1[a]);
    printf("\n");
	}
	for(a=0;a<20;a++){
		toplam = a1[a] + toplam;
	}
	printf(" toplam : %d",toplam);
		printf("\n");
	return 0;
}
