#include<stdio.h>
int main()
{
	int islem;
	int bakiye=2300;
	int tutar;
	int numara;
	
	printf("islemler\n1:para cekme\n2:para yatirma\n3:bakiye sorgula\n4:para transferi\n5:kart iade\n\n\n");
	printf("isleminizi seciniz:");
	scanf("%d",&islem);	
	
	switch(islem){
	
	case 1:
	  printf("bakiyeniz:%d\n",bakiye);
	  printf("cekilecek tutari giriniz:");
	  scanf("%d",&tutar);
	 if(tutar > bakiye){
	 printf("bakiyeniz yetersiz!");
}
     bakiye-=tutar;
      printf("bakiyeniz:%d",bakiye);
     break;
     
    case 2:
      printf("bakiyeniz:%d\n",bakiye);
      printf("yatirilacak tutari giriniz:");
      scanf("%d",&tutar);
      bakiye+=tutar;
      printf("bakiyeniz:%d",bakiye);
    break;
    
    case 3:
       printf("bakiyeniz:%d\n",bakiye);
    break;
    
    case 4:
       printf("bakiyeniz:%d\n",bakiye);
       printf("transfer yapmak  istediginiz numarayi giriniz:\n");
       scanf("%d",&numara);
       printf("transfer yapma istediginiz tutari giriniz:");
       scanf("%d",&tutar);
	   if(tutar > bakiye){
	     printf("bakiyeniz yetersiz!");
	 }
      bakiye-=tutar;
       printf("bakiyeniz:%d\n",bakiye);
    break;
    
    case 5:
       printf("kart iade ediliyor.Lutfen bekleyiniz!\n");
       printf("iyi gunler");
    break;
    
    default:
     printf("gecersiz islem yaptiniz!");
    break;
         
}

   return 0;
}
