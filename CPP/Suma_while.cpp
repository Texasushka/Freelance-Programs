#include <iostream>
using namespace std;

//�wicznie 7
int main()
{
int liczba = 1, suma = 0; //dek�aracja zmiennych zgodnie z podr�cznikiem

while(liczba != 0 )	//sprawdzamy czy podana liczba nie jest zerem (dlatego warto�� zmiennej 'liczba' jest 1, aby przej�� warunek dla pierwszej iteracji)
{
	cout << endl << "Podaj kolejna liczbe do dodawania:"; 																													// <------Wkleja� tutaj
	cin >> liczba;		//Podajemy liczbe (Zak�adam �e je�eli podana b�dzie liczba ujemna - po prostu odemie si� od sumy, je�eli trzeba opracowa� przypadek z liczb� ujemn� - na ko�cu dopisz� IFa)
	suma += liczba;		//Dodajemy podan� liczbe do zmiennej suma 
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
