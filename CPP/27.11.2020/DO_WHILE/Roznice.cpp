#include <iostream>

using namespace std;

int main()
{
float odjemna, odjemnik, roznica;

cout << "Prosze podac wartosc liczby odjemnej:";
cin >> odjemna;
roznica = odjemna;

	do
	{
		cout << "Wprowadz odjemnik:";
		cin >> odjemnik;
		
		roznica = roznica - odjemnik;
		if(roznica >= 0)
			cout << "aktualna roznica wynosi:" <<  roznica << endl;
	}
	while(roznica >= 0);
	
	cout << "Koniec dzia³ania programu, roznica koncowa wynosi:" << roznica << endl;
	
	return 0;
}
