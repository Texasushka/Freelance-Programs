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
		if(j%2);	//warunek sprawdzajacy czy reszta z dzielenia >0  (sprawdza czy indeks jest nieparzysty)
		else		// jezeli warunek nie byl spelniony (indeks parzysty)
		printf("%d\t",tab[j]); // wypisywanie wartosci z tablicy o indeksie j 
	}
}

