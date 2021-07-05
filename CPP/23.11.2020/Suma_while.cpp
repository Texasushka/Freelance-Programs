#include <iostream>
using namespace std;

//Æwicznie 7
int main()
{
int liczba = 1, suma = 0; //dek³aracja zmiennych zgodnie z podrêcznikiem

while(liczba != 0 )	//sprawdzamy czy podana liczba nie jest zerem (dlatego wartoœæ zmiennej 'liczba' jest 1, aby przejœæ warunek dla pierwszej iteracji)
{
	cout << endl << "Podaj kolejna liczbe do dodawania:"; 																													// <------Wklejaæ tutaj
	cin >> liczba;		//Podajemy liczbe (Zak³adam ¿e je¿eli podana bêdzie liczba ujemna - po prostu odemie siê od sumy, je¿eli trzeba opracowaæ przypadek z liczb¹ ujemn¹ - na koñcu dopiszê IFa)
	suma += liczba;		//Dodajemy podan¹ liczbe do zmiennej suma 
}

cout << endl << "Suma koncowa wynosi: " << suma; //To samo co w Zbiorka
	
}



// Druga opcja dla tylko dodatnich liczb
/*
	cout << endl << "Podaj kolejna liczbe do dodawania:";
	cin >> liczba;	
	if(liczba < 0)
	cput << "wprowadono liczbe ujemna nie zostanie dodana do sumy";
	else
	suma += liczba;
*/
