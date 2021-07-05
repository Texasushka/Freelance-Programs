#include <iostream>

using namespace std;



int main()
{
	int i =0;
	string napis;
	cout << "Prosze wpisac wiersz:";
	getline(cin, napis);
	cout << endl<< "Liczba znakow = " <<napis.length();
	while(napis){
		if(napis[i] == " ")
			cout << "gotcha";
		i++;
	}
	cout << "Naspis malymi literami:" << napis << endl;
	std::transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
	cout << "Naspis duzymi literami:" << napis << endl;
	
	
}
