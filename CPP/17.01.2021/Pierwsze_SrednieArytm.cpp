#include <iostream>

using namespace std;



int main()
{
	double x,y,sr;
	cout << "Sprawdzanie czy liczba jest pierwsza:" << endl << endl;
	cout << "Podaj liczbe:";
	cin >> x;
	
	if(x < 1)
	{
		cout << endl << "Liczba mniejsza od 2 nie moze byc liczba pierwsza" << endl;
	}
	else
	{	
	for(int i =1; i<x; i++)
	{
		if(x%i == 0 && i != 1)
			{
				cout << endl << "Podana liczba nie jest liczba pierwsza" << endl;
				break;
			}
		if(i == x-1)
			cout << endl <<"Podana liczba jest liczba pierwsza" << endl;
			
	}
	}
	cout << endl << "Liczenie sredniej arytmetycznej" << endl; 
	cout <<endl << "Podaj pierwsza liczbe:";
	cin >> x;
	cout << endl << "Podaj druga liczbe:";
	cin >> y;
	
	sr = (x+y)/2.0;
	cout <<endl << "Srednia arytmetyczna tych liczb wynosi:" << sr;
	
	
	return 0;
	
	
}
