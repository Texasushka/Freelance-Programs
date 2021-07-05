#include <stdio.h>

main()
{
	int tab[5] = {1,3,6,7,9}; //inicjalizacja tablicy i wpisywania do niej wartosci
	int j;		//inicjalizacja zmiennej dla iteracji
	for(j = 0; j< 5; j++)	//ustalanie startowej wartosci j=0, ustalanie warunku petli j<5 zwiekszanei j o jeden za kazda iteracja
	{
		printf("%d\t",tab[j]); // wypisywanie wartosci z tablicy o indeksie j
	}
}

