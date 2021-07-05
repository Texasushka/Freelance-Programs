#include <iostream>

using namespace std;

int main()
{
	char znak;
	int liczba_znakow = 0;
	
	do
	{
		cout << "Wprowadz znak:";
		cin >> znak;
		
		if(znak != '.')
			liczba_znakow++;
	}
	while(znak != '.');
	
	cout << "Liczba wprowadzonych znakow wynosi:" << liczba_znakow;
	
	return 0;
}
