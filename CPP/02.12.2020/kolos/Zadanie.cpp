#include <iostream>
#include <fstream>

using namespace std;

const unsigned int MAX_TEXT_LEN = 20;		//maksymalna liczba znakow w polach tekstowych

struct produkt
{
	char nazwa[20];
	char kalorycznosc[20];
	char cena[20];
};

int main() {
	int N;
	fstream plik_input("input.txt", ios::in); //otwarcie pliku o nazwie "input.txt"
	if(!plik_input) { //sprawdzenie, czy plik zosta� otwarty
		cout << "Plik nie zostal otwarty\n";
		return -1;
	}
	
	unsigned int licznik = 0; //licznik elementow aktualnie przechowywanych w tablicy
	produkt *table;

	
	
	/*Zaalokuj dynamicznie pamiec dla tablicy (na podstawie pierwszej liczby odczytanej z plik_input)*/
	
	char puste[20];
	plik_input >> N;
	table = new produkt[N];
	plik_input.getline(puste,MAX_TEXT_LEN );
	for(int i=0; i<N;i++)
	{

			plik_input.getline(table[i].nazwa,MAX_TEXT_LEN );
			plik_input.getline(table[i].kalorycznosc,MAX_TEXT_LEN );
			plik_input.getline(table[i].cena,MAX_TEXT_LEN );
		
		
	}
	

	
	
	plik_input.close();
	
	/* MENU */
	int opt;
	do {
		cout << "Wybierz opcje:" << endl;
		cout << "1: Wypisz na ekran dane odczytane z pliku" << endl;
		cout << "0: Wyjdz z programu" << endl << endl;
		
		cout << "Podaj swoj wybor: ";
		cin >> opt;
		
		/* Wykonaj odpowiednia akcje w zaleznosci od wyboru uzytkownika */
		switch(opt) {
			case 1: //wypisz na ekran dane odczytane z pliku
						for(int i=0; i<N;i++)
						{
						cout << table[i].nazwa << endl;
						cout << table[i].kalorycznosc<< " Kcal"<< endl;
						cout << table[i].cena<<" PLN" << endl;
						}
			break;

			case 0: // koniec dzialania programu - warunek petli spowoduje wyjscie z niej
				break;
			default:
				cout << "Niepoprawna opcja!" << endl << endl;
				break;
		}
		
	} while (opt != 0);
	
	delete [] table;
	
	return 0;
}




