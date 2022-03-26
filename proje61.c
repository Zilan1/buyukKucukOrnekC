#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    int s1,s2,s3;
	
	printf("3 sayi giriniz: ");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1>s2 && s1>s3)
	{
		if(s2>s3 )
	    {
		 
		    printf("%d%d%d",s1,s2,s3);
	    }
	    else
	    {
	    	printf("%d%d%d",s1,s3,s2);
		}
	}
	
	else if(s2>s1 && s2>s3)
	{
		if(s1>s3)
		{
			printf("%d%d%d",s1,s3,s2);
		}
		else
		{
			printf("%d%d%d",s2,s3,s1);
		}
	}
	
	else
	{
		if(s1>s2)
		{
			printf("%d%d%d",s3,s1,s2);
		}
		else
		{
			printf("%d%d%d",s3,s2,s1);
		}
	}
	
	
	
	
	
	
	
	
	
	//char isim[10];
	//char soyisim[15];
	//int yas;
	
	//printf("Isminizi Giriniz: ");
	//scanf("%s",&isim);
	
	//printf("Soyisminizi Giriniz: ");
	//scanf("%s",&soyisim);
	
	//printf("Ysinizi Giriniz: ");
	//scanf("%d",&yas);
	
	//if(yas>=18)
	//{
		//printf("Ehliyet alabilirsiniz!");
	//}
	//else 
	//{
		//printf("Ehliyet alamazsiniz!");
	//}
	
	
	
	
	
	
	
	//int sayi;
    
    //printf("Sayi Giriniz: ");
    //scanf("%d",&sayi);
    
    //if(sayi%2==0)
    //{
    	//printf("Sayi Cifttir.");
	//}
    //else 
    //{
    	//printf("Sayi Cift Degildir");
	//}





	//2x^+2y+3
	
	//int x,y,denk;
	
	//printf("X degerini giriniz: ");
	//scanf("%d",&x);
	
	//printf("Y degerini giriniz: ");
	//scanf("%d",&y);
	
	//denk=2*(x*x)+2*y+3;
	
	//printf("Sonuc: %d",denk);
	
	
	
	
	
	
	//int su;
	
	//printf("Suyun Sicakligini Girin: ");
	//scanf("%d",&su);
	
	//if(su<=0)
	//{
		//printf("Su Buz Halinde.");
	//}
	//if(su>0 && su<=100)
	//{
		//printf("Su Sivi Halinde.");
	//}
	//if(su>100)
	//{
		//printf("Su Buhar Halinde.");
	//}
	
	
	
	
	
	
	//int sayi;
	
	//printf("Sayi Giriniz: ");
	//scanf("%d",&sayi); 
	
	//if(saayi%3==0 && sayi%5==0 && sayi%7==0)
	//{
		//printf("Sayi 3 veya 5'e tam bolunur.");
	//}
	//else
	//{
		//printf("Sayi 3 veya 5'e tam bolunmez.");
	//}
	
	
	
		

	//int x;
	
	//printf("Sayiyi Girin: ");
	//scanf("%d",&x);
	
	//if(x%5==0)
	//{
		//printf("Sayi 5'e tam bolunur.");
	//}
	//else
	//{
	    //printf("Sayi 5'e tam bolunmez.");	
	//}
	
	
	return 0;
}
