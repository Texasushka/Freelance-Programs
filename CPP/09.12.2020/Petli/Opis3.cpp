#include <stdio.h>

main()
{
	int tab[5] = {1,3,6,7,9}; //inicjalizacja tablicy i wpisywania do niej wartosci
	int j;		//inicjalizacja zmiennej dla iteracji
	for(j = 0; j< 5; j++)	//ustalanie startowej wartosci j=0, ustalanie warunku petli j<5 zwiekszanei j o jeden za kazda iteracja
	{
		if(j%2);	//warunek sprawdzajacy czy reszta z dzielenia >0  (sprawdza czy indeks jest nieparzysty)
		else		// jezeli warunek nie byl spelniony (indeks parzysty)
		printf("%d\t",tab[j]); // wypisywanie wartosci z tablicy o indeksie j 
	}
}

