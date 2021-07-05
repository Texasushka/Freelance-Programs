#include <iostream>
using namespace std;



int main()
{
	int val; //val znacze value
	cout << "Prosze podac wartosc a:";
	cin >> val;
	
	
	
	if(val <= 0){
	cout << "Liczba nie moze byc ujemna lub zerem";
	return 0;
	}
	
	int i;
	int wynik=1;
	
	for(i = 1 ; i <= val; i++)
	{
		wynik = wynik * i;
	}
	
	cout << "wynik silni "  << val << "! wynosi:" << wynik;
	
	
}
