#include <iostream>
using namespace std;


int main() {
	float kwota, wplata, suma_wplat;
	
	cout << "Podaj potrzebna kwote:";
	cin >> kwota;
	
	suma_wplat = 0;
	

	
	while (suma_wplat < kwota)
	{
		cout << endl << "Aktualna suma wplat wynosi: " << suma_wplat << "zl" << endl;
		cout << "Wprowadz wplate: ";
		cin >> wplata;
		suma_wplat = suma_wplat + wplata;
		
	
	}
	cout << endl << endl;
	cout << "Koncowa suma wplat wynosi: " << suma_wplat << "zl" << endl;
	cout << "Nadplata wynosi: " << suma_wplat - kwota << "zl";
	

	return 0;
}
