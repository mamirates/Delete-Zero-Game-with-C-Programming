#include <stdio.h>

/*
	Klavyeden Girilen Dizide Sýfýrlarý Diziden Siler ve Sýfýrdan Farklý Elemanlarýn Saðýna
	Klavyede Girilen Dizideki Bulunduðu Ýndisi Yazar.
*/	
void  function(int boyut,int funcdizi[],int comfundizi[]){
	int i=0,j=0,k=0;
	int	counter=0; // Sýkýstýrýlmýs Dizinin Boyutunu Sayar
	
	for(i=0;i<boyut;i++){
		if(funcdizi[i] != 0){
			comfundizi[j]=funcdizi[i];
			 j++;
				counter++; 
				 comfundizi[j]=i;
				  j++;
					counter++;
		}				
	}
		 printf(" \n Sifirdan Farkli Eleman Sayisi %d Tanedir. ",counter/2);
		 printf("\n Yeni Diziniz Su Sekildedir: ");
		for(k=0;k<counter;k++){
			printf(" %d ",comfundizi[k]);
		}
}
int main(void){
	int N,k,l;
	printf("\t***SIFIRLARDAN KACIS***\n\n");
	printf(" Dizinizin Boyutunu Giriniz:");
	scanf("%d",&N);	
	int dizi[N];
	int compdizi[2*N];
	 printf(" \n*Dizinizin Elemanlarini Giriniz*\n");
		for(k=0;k<N;k++){//Dizimizi Klavyeden Istiyoruz
			printf(" %d. Indisi Giriniz: ",k);
			scanf("%d",&dizi[k]);	
		}
		printf("\n Diziniz Su Sekildedir.");
			for(l=0;l<N;l++){
				printf(" %d ",dizi[l]);
			}
		
	function(N,dizi,compdizi); //Fonksiyonumuzu Yazdiriyoruz.
	
	return 0;
}	
