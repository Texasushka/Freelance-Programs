#include <stdio.h>

main()
{
	float l, suma;		//inicjalizacja zmiennych typu float
	int i,n; //inicjalizacja zmiennych dla iteracji
	suma = 0.0; //przypisywanie wartosci zmiennej suma
	
	printf("Ile podasz liczb:"); // zapytanie do uzytkownika
	scanf("%d",&n);
	
	
	for(i =1; i<= n; i= i+1)//ustalanie startowej wartosci i=1, ustalanie warunku petli i<n zwiekszanei i o jeden za kazda iteracja
	{
		scanf("%f",&l); //wczytywanie kolejnych wartosci dla dodawania
		suma = suma+i; //dodawanie kolejnej wartosci do sumy
	}
	
	
	printf("%f",suma); // wypisywanie sumy z dodawania
}

