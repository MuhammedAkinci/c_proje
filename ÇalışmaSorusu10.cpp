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
	
	printf("Giderken yolda h�rs�zlar cebini �arpt� ve pe�lerine d��t�n.Uzun bir kovalamacadan sonra h�rs�zlardan birini yakalad�n ama h�rs�z di�li ��kt� ve ufak bir kavga tutu�tunuz.\n");
   	printf("Adam sana sald�rmaya haz�rlan�yor:\n1-Sa�a gitmek i�in D'ye bas.\n2-Sola gitmek i�in A'ya bas.\n3-E�ilmek i�in C'ye bas.\n4-Kendini geri �ekmek i�in S'ye bas.\n");
   	
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
   		
		if(c1 == 'd')//defans yapaca��n yer
		{
			
			if(s1==1)//onun say�yla e�lenmi� yeri
			{
				printf("dodge vurdun\n");
			
				if(say1==0)//bekle demi�se alttaki else ge�iyor
				{
					printf("1 sald�r   2 bekle\n");
					scanf("%d",&s2);
				
					if(s2==1)//vurursa 3 hitten birini d���r�yor
					{
						say++;
						printf("vurdun\n");
					}
					
					else//bekle diyip say1in sayac�n� art�r�yor
					{
						say1++;
						printf("bekledin\n");
					}
				}
				
				else//beklemi� 
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
					printf("1 sald�r   2 bekle\n");
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
					printf("1 sald�r   2 bekle\n");
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
					printf("1 sald�r  2 bekle\n");
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
		printf("kazand�n\n");
	}
	else if(say3==0)
	{
		printf("kaybettin\n");
	}
	
	return 0;
}
