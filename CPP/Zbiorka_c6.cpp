#include <iostream>
using namespace std;

//�wiczenie 6
int main() 
{
	float kwota, wplata, suma_wplat;
	
	cout << "Podaj potrzebna kwote:";
	cin >> kwota;
	
	if(kwota <= 0)	//sprawdzamy czy kwota podana nie jest ujemn� czy zerow�
	{
		cout << "Wprowadzono bledna liczbe"; //Je�eli by�a podana kwota niepoprawna - wypisujemy b��d
		return 0; //returnem ko�czymy dzia�anie programu
	}
	suma_wplat = 0;
				

	
	while (suma_wplat < kwota)
	{
		
		cout << endl << "Aktualna suma wplat wynosi: " << suma_wplat << "zl" << endl;
		
		cout << "Wprowadz wplate: ";
		cin >> wplata;
		
		if(wplata <= 0)
		{			//tak samo jak w przypadku z kwot�, sprawdzamy poprawno�� podanej liczby
			cout << endl << "Wprowadzono bledna liczbe" << endl;	
		} //nawiasy {} mo�na usun�� aby �adniej wygl�da�o
		else
		{
		suma_wplat = suma_wplat + wplata;  //Zadzia�a tylko je�eli "wplata" spe�ni�a warunek "poprawnej liczby"
		} //nawiasy {} mo�na usun�� aby �adniej wygl�da�o
	
	}
	//Dalej tak samo jak w Zbiorka_c5
	cout << endl << endl;
	cout << "Koncowa suma wplat wynosi: " << suma_wplat << "zl" << endl;
	cout << "Nadplata wynosi: " << suma_wplat - kwota << "zl";
	

	return 0;
}
