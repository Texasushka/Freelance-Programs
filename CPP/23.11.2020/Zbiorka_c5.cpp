#include <iostream>
using namespace std;

//�wiczenie 5
int main() 
{
	float kwota, wplata, suma_wplat;
	
	cout << "Podaj potrzebna kwote:";
	cin >> kwota;
	
	suma_wplat = 0;
		
	while (suma_wplat < kwota)
	{
		cout << endl << "Aktualna suma wplat wynosi: " << suma_wplat << "zl" << endl; // za ka�d� iteracj� p�tli while - wypisuje sume wplat ( mo�na przenie�� tutaj |)
		cout << "Wprowadz wplate: ";											   														
		cin >> wplata;																														
		suma_wplat = suma_wplat + wplata;//	za ka�dyma razem dodajemy now� warto� do sumy tak�e mo�na zaamien� na "suma_wplat += wplata" dla lepszego wygl�du									
																					//<-- tutaj mo�na wklei� linie 16, jak jest wa�ne wypisywanie PO wprowadzeniu kwoty (moim zdaniem moja opcja wygl�da lepiej)
	}
	
	cout << endl << endl; // jest potrzebne dla wi�kszego odst�pu mi�dzy linii
	
	cout << "Koncowa suma wplat wynosi: " << suma_wplat << "zl" << endl; // suma wp�at obliczona w p�tli
	cout << "Nadplata wynosi: " << suma_wplat - kwota << "zl";  // zamiast tworzenia nowej zmiennej mo�emy wypisa� odrazu wynik odejmowania
	

	return 0;
}
