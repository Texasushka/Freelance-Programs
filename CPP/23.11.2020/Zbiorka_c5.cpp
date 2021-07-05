#include <iostream>
using namespace std;

//Æwiczenie 5
int main() 
{
	float kwota, wplata, suma_wplat;
	
	cout << "Podaj potrzebna kwote:";
	cin >> kwota;
	
	suma_wplat = 0;
		
	while (suma_wplat < kwota)
	{
		cout << endl << "Aktualna suma wplat wynosi: " << suma_wplat << "zl" << endl; // za ka¿d¹ iteracj¹ pêtli while - wypisuje sume wplat ( mo¿na przenieœæ tutaj |)
		cout << "Wprowadz wplate: ";											   														
		cin >> wplata;																														
		suma_wplat = suma_wplat + wplata;//	za ka¿dyma razem dodajemy now¹ wartoœ do sumy tak¿e mo¿na zaamienæ na "suma_wplat += wplata" dla lepszego wygl¹du									
																					//<-- tutaj mo¿na wkleiæ linie 16, jak jest wa¿ne wypisywanie PO wprowadzeniu kwoty (moim zdaniem moja opcja wygl¹da lepiej)
	}
	
	cout << endl << endl; // jest potrzebne dla wiêkszego odstêpu miêdzy linii
	
	cout << "Koncowa suma wplat wynosi: " << suma_wplat << "zl" << endl; // suma wp³at obliczona w pêtli
	cout << "Nadplata wynosi: " << suma_wplat - kwota << "zl";  // zamiast tworzenia nowej zmiennej mo¿emy wypisaæ odrazu wynik odejmowania
	

	return 0;
}
