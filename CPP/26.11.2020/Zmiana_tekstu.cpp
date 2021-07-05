#include <iostream>
#include <algorithm>
#include <string>
#include <locale> 
using namespace std;


int main()
{
 char menu;
 std::string napis;
 std::string text;
 std::string text_temp;
 size_t pozycja;
 bool isLower = 0;
 
 cout << "Witam!" << endl;
	

	
	while(1)
	{
		cout << "______________________________________________________" << endl;
		cout << endl << "1 Dodaj do tekstu" << endl; 
		cout << "2 Zmien wielkosc liter " << endl;
		cout << "3 Znajdz wyraz w tekscie " << endl;
		cout << "4 Usun wyraz z tekstu " << endl;
		cout << "5 Wstaw fragment tekstu " << endl << endl;
		
		cout << "w Wpisz aktualny stan napisu" <<  endl ;
		cout << "c Wyczysc napis " << endl << endl ;
		cout << "e Wyjscie z programu " << endl << endl ;
		
		cout << "Prosze wybrac opcje:";
		cin >> menu;
		
		switch(menu)
		{
			
			case '1':
				cout << endl << "Prosze wpisac text do dodania (program odczyta tylko jedna linie. Po nacisnieciu ENTER prosze wpisac / i znowu kliknac ENTER):";
				while(getline(cin,text) )
				{
					if(text == "/")
					break;
					text_temp = text;
				}
					napis.append(text_temp);
					
					cout << endl << "Napis teraz wyglada tak:" << endl;
					cout << napis << endl;
				

				break;
			
			case '2':
				if(!isLower)
				{
				  	std::transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
				  	isLower = 1;
				}
				else
				{
					std::transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
					isLower = 0;
				}
				cout << endl << "Napis teraz wyglada tak:" << endl;
				cout << napis << endl;
				break;
				
			case '3':
				cout << endl << "Prosze wpisac text do wyszukiwania (program odczyta tylko jedna linie. Po nacisnieciu ENTER prosze wpisac / i znowu kliknac ENTER):";
				while(getline(cin,text) )
				{
					if(text == "/")
					break;
					text_temp = text;
				}
					
					pozycja = napis.find(text_temp,text_temp.length());
					
					if( pozycja != std::string::npos)
					cout <<"Slowo jest w tekscie, pierwsza litera slowa znajduje sie na pozycji " << pozycja+1 << endl;
					else
					cout << "Nie znaleziono podanego tekstu" << endl;
					
					
				break;
			
			case '4':
				cout << endl << "Prosze wpisac text do usuniecia (program odczyta tylko jedna linie. Po nacisnieciu ENTER prosze wpisac / i znowu kliknac ENTER):";
				while(getline(cin,text) )
				{
					if(text == "/")
					break;
					text_temp = text;
				}
				pozycja = napis.find(text_temp,text_temp.length());
				
				if( pozycja != std::string::npos)
				{
				napis.erase(pozycja,text_temp.length()); 
				
				cout << endl << "Napis teraz wyglada tak:" << endl;
				cout << napis << endl;
				break;
				}
			case '5':
				cout << endl << "Prosze pozycje dla wklejania tekstu:";
				cin >> pozycja;
				
				if(pozycja > napis.length())
				{
					cout << "Miejsca za taka pozycja nie istnieje" << endl;
					break;
				}
				
				cout << endl << "Prosze wpisac text do wklejania (program odczyta tylko jedna linie. Po nacisnieciu ENTER prosze wpisac / i znowu kliknac ENTER):";
				while(getline(cin,text) )
				{
					if(text == "/")
					break;
					text_temp = text;
				}
				
				napis.insert(pozycja, text_temp);
				
				cout << endl << "Napis teraz wyglada tak:" << endl;
				cout << napis << endl;
				break;
				
			case 'w':
				if(napis.empty())
				cout << endl << "Napis jest pusty" << endl;
				else
				cout << endl << napis << endl;
				break;
			
			case 'c':
				cout << endl << "Napis jest pusty" << endl;
				napis.clear();
				break;
			case 'e':
				cout << endl << "Dziekuje za korzystanie" << endl << "Koncze dzialanie";
				return 0;
				
			default:
				cout << "Bledne wejscie" << endl<< endl;
				break;
		}
	}
	
	return 0;
}
