#include <stdio.h>

main()
{
	int tab[5]; //inicjalizacja tablicy
	int i,j;		//inicjalizacja zmiennych dla iteracji
	
	for(i =0; i<5; i++)//ustalanie startowej wartosci i=0, ustalanie warunku petli i<5 zwiekszanei i o jeden za kazda iteracja
	{
		scanf("%d", &tab[i]); // wczytywanie wartosci od uzytkownika i wpisanie jej do komorki tablicy o indeksie i
	}
	
	
	for(j = 0; j< 5; j++)	//ustalanie startowej wartosci j=0, ustalanie warunku petli j<5 zwiekszanei j o jeden za kazda iteracja
	{
		printf("%d\t",tab[j]); // wypisywanie wartosci z tablicy o indeksie j 
	}
}

