#include<stdio.h>
int main(){
	char dna;
	 scanf("%c",&dna);
	if(dna=='A'|| dna=='a'); printf("ADENINE");
	else if(dna=='T') printf("THYMINE");
	else if(dna=='G'|| dna=='g') printf("GUANINE");
	else if(dna=='C'|| dna=='c') printf("CYTOSINE");
	else printf(" 잘못 입력했음!");
	
	 return 0;
}
