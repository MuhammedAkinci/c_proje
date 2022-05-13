// kavga oyunu...

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 
int main()
{
	int s1,s2;
	int say,say1,say2,Msay2,say3=0;
	int can=30000 ;//istenen
	char c1;
	
	setlocale(LC_ALL, "Turkish");
	
	printf("Giderken yolda hýrsýzlar cebini çarptý ve peþlerine düþtün.Uzun bir kovalamacadan sonra hýrsýzlardan birini yakaladýn ama hýrsýz diþli çýktý ve ufak bir kavga tutuþtunuz.\n");
   	printf("Adam sana saldýrmaya hazýrlanýyor:\n1-Saða gitmek için D'ye bas.\n2-Sola gitmek için A'ya bas.\n3-Eðilmek için C'ye bas.\n4-Kendini geri çekmek için S'ye bas.\n");
   	
   	srand(time(NULL)); 
	Msay2=can/30;   
	s1= rand()%4;
   	say1=0;
   	say=0;
   	while(say<3)
	{
		s1= rand()%4;
		s1++;
		scanf("%c",&c1);
   		
		if(c1 == 'd')//defans yapacaðýn yer
		{
			
			if(s1==1)//onun sayýyla eþlenmiþ yeri
			{
				printf("dodge vurdun\n");
			
				if(say1==0)//bekle demiþse alttaki else geçiyor
				{
					printf("1 saldýr   2 bekle\n");
					scanf("%d",&s2);
				
					if(s2==1)//vurursa 3 hitten birini düþürüyor
					{
						say++;
						printf("vurdun\n");
					}
					
					else//bekle diyip say1in sayacýný artýrýyor
					{
						say1++;
						printf("bekledin\n");
					}
				}
				
				else//beklemiþ 
				{
					say=3+say;
					printf("Tebrikler\n");
				}
			}
			
			else
			{
				can=can-10;
				say2++;
				say1=0;
				printf("hit yedin\n");
			} 		
		}
		
		else if(c1 == 'a')
		{
			if(s1==2)
			{
				printf("dodge vurdun\n");
				
				if(say1==0)
				{
					printf("1 saldýr   2 bekle\n");
					scanf("%d",&s2);
					
					if(s2==1)
					{
						say++;
					}
					
					else
					{
						say1++;
					}
				}
			
				else
				{
					say=3+say;
				}
			}
			else
			{
				can=can-10;
				say2++;
				say1=0;
			} 		
		}
		
		else if(c1 == 'w')
		{
			if(s1==3)
			{
				printf("dodge vurdun\n");
				
				if(say1==0)
				{
					printf("1 saldýr   2 bekle\n");
					scanf("%d",&s2);
				
					if(s2==1)
					{
						say++;
					}
				
					else
					{
						say1++;
					}
				}
				
				else
				{
					say=3+say;
					say2++;
				}
			}
			else
			{
				can=can-10;
				say2++;
				say1=0;
			} 		
		}
		
		else if(c1 == 's')
		{
			if(s1==4)
			{
				printf("dodge vurdun\n");
				
				if(say1==0)
				{
					printf("1 saldýr  2 bekle\n");
					scanf("%d",&s2);
					
					if(s2==1)
					{
						say++;
					}
					
					else
					{
						say1++;
					}
				}
				else
				{
					say=3+say;
				}
			}
			
			else
			{
				can=can-10;
				say2++;
				say1=0;
			} 		
		}
		else
		{
			continue;
		}
		if(Msay2<=say2)
		{
			printf("kaybettin\n");
			say3=0;//return 
			break;
		}
		if(say>=3)
		{
			say3=1;
			
		}
		printf("%d",s1);
	}
	
	if(say3==1)
	{
		printf("kazandýn\n");
	}
	else if(say3==0)
	{
		printf("kaybettin\n");
	}
	
	return 0;
}
