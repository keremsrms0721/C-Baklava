#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void baklava(int satirSayisi){
	// 0 dan başla satir sayisi kadar don
	for(int i = 0;i<satirSayisi;i++){
		// i'nin bir fazlasi kadar boşluk bırak
		for(int z = i+1;z<satirSayisi;z++){
			printf(" ");
		}
		// j tek haneli yazmak için 2*i+1
		for(int j = 1;j<=2*i+1;j++){
			printf("%c",'c');
		}
		printf("\n");
	}
	for(int i = satirSayisi-1;i>0;i--){
		for(int z = satirSayisi-1;z>i-1;z--){
			printf(" ");
		}
		for(int j = 2*i-1;j>=1;j--){
			printf("%c",'c');
		}
		printf("\n");
	}
}
int main() {
	int satirSayisi;
	printf("satir sayisini giriniz : ");
	scanf("%d",&satirSayisi);
	baklava(satirSayisi);
	return 0;
}
