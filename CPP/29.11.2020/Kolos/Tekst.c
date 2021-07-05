#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
	char napis[100];
	int znak = 0;
	int malych = 0;
	int duzych = 0;
	int i =0;
	
	
	printf("Prosze wpisac wiersz:");
	gets(napis);
	printf("Liczba znakow (spacja licze sie jako znak) wynosi:%d\n", strlen(napis));

	
	while(napis[i] != 0)
	{
		if(napis[i] != ' ')
			znak++;
		i++;
	}
	i=0;
	printf("Liczba znakow (bez spacji) wynosi:%d\n", znak);
	
	while(napis[i] != 0)
	{
		if(napis[i] >= 'a' && napis[i] <= 'z' )
			malych = malych +1;
		else if(napis[i] >= 'A' && napis[i] <= 'Z' )
			duzych = duzych +1 ;
		i++;
	}

	printf("Malych liter w wierszu bylo:%d\n", malych);
	printf("Duzych liter w wierszu bylo:%d\n", duzych);
	i=0;
	
		while(napis[i] != 0)
	{
		if(napis[i] >= 'a' && napis[i] <= 'z' )
		napis[i] = napis[i] - 32; //za tablica ASCII litera 'A' ma indeks 65 a litera 'a' 97, roznica wynosi 32	
		i++;
	}
		printf("\n%s", napis);
		i=0;
			
	while(napis[i] != 0)
	{
		if(napis[i] >= 'A' && napis[i] <= 'Z' )
		napis[i] = napis[i] + 32; 
		i++;
	}
	
		printf("\n%s", napis);
	
	
	return 0;
}
