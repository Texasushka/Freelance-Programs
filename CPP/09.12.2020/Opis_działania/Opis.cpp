#include <iostream>
using namespace std;

float ciag(int n)		//dla kolejnej wartosci n bedzie mnozyl liczbe poprzednia o 0.5 (dzielil przez 2)
{
	if(n==1)
		return 1;	//zwraca 1 jezeli wartosc n = 1
	if(n==2)
		return 0.5;	//zwraca 0.5 jezeli wartosc n = 2
	
	return -ciag(n-1)*ciag(n-2);	//wyraz rekurencyjny
}




int main()
{
	int n;	//inicjalizacja zmeinnej dla przehowywania wartosci typu int
	
	cout <<"Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc: ";	//zapytanie do uzytkownika
	cin >> n;		//wczytywanie podanej przez uzytkownika wartosci i zapisywanie jej do zmiennej n
	cout << n << " wyraz ciagu ma wartosc " << ciag(n)<< endl;	// wypisywanie wyniku dizalania rekurencji funkcji 'ciag' dla wartosci n
	
	system("pause");
	return 0;
}
