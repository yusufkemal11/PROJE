#include<stdio.h>
#include<conio.h>
int isim () {
	char isim[50];
	FILE *dosya = fopen("isim.txt","a");
	
	if(dosya == NULL) {
		printf("Kaydedilemedi.");
	}
	else {
		printf("Adiniz : ");
		fgets(isim,50,stdin);
		fputs(isim,dosya);
		printf("\n\nAdiniz kaydedildi.");
		fclose(dosya);
	}
}
int soyisim() {
	char soyad[50] ; 
	printf("Soyadiniz : ") ;
	scanf("%s" ,soyad);
	printf("Soyadiniz : %s\n\n" ,soyad);
}
int mail() {
	char mail[50] ; 
	printf("Mail Adresiniz : ") ;
	scanf("%s" ,mail);
	printf("Mail Adresiniz : %s\n\nKaydiniz Tamamlanmistir.\n\n" ,mail);
}

int main () {
	isim();
	soyisim();
	mail();
	int urun,renk,beden,model,adet,menu,i=0;
	char adres[150];
	char mesaj[360];
	char hk[180];
	do{
	do{
	
	printf("\tURUN\n");
	printf("T-Shirt almak icin : 1\nSweatshirt almak icin : 2\nHoodie almak icin : 3'u tuslayin.\t\n\n");
	scanf("%d" , &urun);
	
	if(urun>=4)
		printf("\nlutfen gecerli bir sayi tuslayin.\n\n");
	else
		continue;
	}
	while(urun>=4);
	do{
	printf("\tRENK\n");
	printf("Siyah renk icin : 1\nBeyaz icin : 2\nKoyu Gri icin : 3'u tuslayin.\t");
	scanf("%d" , &renk);
	
	if(renk>=4)
		printf("\nlutfen gecerli bir sayi tuslayin.\n\n");
	else
		continue;
	}
	while(renk>=4);
	do{
	printf("\tBEDEN\n");
	printf("S Beden icin : 1\nM Beden icin : 2\nL Beden icin : 3\nXL Beden icin : 4'u tuslayin.\t");
	scanf("%d" , &beden);
	
	if(beden>=5)
		printf("\nlutfen gecerli bir sayi tuslayin.\n\n");
	else
		continue;
	}
	while(beden>=5);
	do{
	printf("\tMODEL\n");
	printf("1. model icin : 1\n2. model icin : 2\n3. model icin : 3'u tuslayin.\t");
	scanf("%d" , &model);
	
	if(model>=4)
		printf("\nlutfen gecerli bir sayi tuslayin.\n\n");
	else
		continue;
	}
	while(model>=4);
	
	printf("\tADET\n");
	printf("Kac adet satin almak istediginizi bildirin :\t");
	scanf("%d" , &adet);
//--------------------------------------------------
	printf("\tMENU\n");
	printf("1)Adres degisikligi icin\n2)Hediye paketi icin\n3)Satici ile iletisime gecmek icin\n4)Hediye karti eklemek ve mesaj yazmak icin\n5)Devam etmek icin\t");
	scanf("%d" , &menu);
	
	if(menu>=6)
		printf("\nlutfen gecerli bir sayi tuslayin.\n\n");
	else
		switch(menu) {
			case 1 :
				printf("\n\nYeni adresi lutfen giriniz : ");
				scanf("%s",adres);
				printf("\n\nYeni adres kaydedildi.\n\n");
				break;
			case 2 :
				printf("\n\nSipariþiniz hediye pakedinde gonderilecektir.");
				break;	
			case 3 :
				printf("\n\nSaticiya birakmak istediðiniz mesaji buradan bildirin : ");
				scanf("%s",mesaj);
				printf("\n\nMesajiniz iletilmistir.");
				break;	
			case 4 :
				printf("\n\nHediye kartindeki mesaji buradan bildirin : ");
				scanf("%s",hk);
				printf("\n\nMesajiniz alinmistir.");
				break;
			case 5 :
				break;		
			default :
				break;
		}
	
	printf("\n\n\nSIPARSINIZ ALINMISTIR...\n\n\n");
	printf("Alisverise devam etmek icin : 1'i\nAlisverisi bitirmek icin 2'i tuslayin.\t");
	scanf("%d",&i);
	}
	while(i<2);
	
	printf("\n\n\tAlisverisiniz Bitiriliyor.\n\n\tYine Bekleriz.");
	
	getch();
	return 0;
}
