#include <iostream>
using namespace std;

//Æwiczenie 6
int main() 
{
	float kwota, wplata, suma_wplat;
	
	cout << "Podaj potrzebna kwote:";
	cin >> kwota;
	
	if(kwota <= 0)	//sprawdzamy czy kwota podana nie jest ujemn¹ czy zerow¹
	{
		cout << "Wprowadzono bledna liczbe"; //Je¿eli by³a podana kwota niepoprawna - wypisujemy b³¹d
		return 0; //returnem koñczymy dzia³anie programu
	}
	suma_wplat = 0;
				

	
	while (suma_wplat < kwota)
	{
		
		cout << endl << "Aktualna suma wplat wynosi: " << suma_wplat << "zl" << endl;
		
		cout << "Wprowadz wplate: ";
		cin >> wplata;
		
		if(wplata <= 0)
		{			//tak samo jak w przypadku z kwot¹, sprawdzamy poprawnoœæ podanej liczby
			cout << endl << "Wprowadzono bledna liczbe" << endl;	
		} //nawiasy {} mo¿na usun¹æ aby ³adniej wygl¹da³o
		else
		{
		suma_wplat = suma_wplat + wplata;  //Zadzia³a tylko je¿eli "wplata" spe³ni³a warunek "poprawnej liczby"
		} //nawiasy {} mo¿na usun¹æ aby ³adniej wygl¹da³o
	
	}
	//Dalej tak samo jak w Zbiorka_c5
	cout << endl << endl;
	cout << "Koncowa suma wplat wynosi: " << suma_wplat << "zl" << endl;
	cout << "Nadplata wynosi: " << suma_wplat - kwota << "zl";
	

	return 0;
}
