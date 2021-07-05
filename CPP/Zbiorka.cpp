#include <iostream>
using namespace std;
//Program przepisany z Zadania nr 1

int main() 
{
	float kwota, wplata, suma_wplat;
	
	cout << "Podaj potrzebna kwota:";
	cin >> kwota;
	suma_wplat = 0;
	while (suma_wplat < kwota)
	{
		cout << "Wprowadz wplate: ";
		cin >> wplata;
		suma_wplat = suma_wplat + wplata;
	}
	cout << "Suma wplat wynosi: " << suma_wplat << "zl";

	return 0;
}
