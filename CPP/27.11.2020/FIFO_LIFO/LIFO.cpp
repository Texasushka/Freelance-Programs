#include <iostream>

 using namespace std;

struct Kolejka_LIFO{
	char val;
	int nr;
	Kolejka_LIFO *Last, *Next;
        void Push(char x);
        void Show();                           
		void Pop();
};

void Kolejka_LIFO::Push(char x){
	Kolejka_LIFO *temp = new Kolejka_LIFO;	
	temp->val= x;
	if (Last == NULL)
	{
		Last = temp;
		temp->Next = 0;
		temp->nr = 1;

	} 
	else 
	{
	temp->Next = Last;
	temp->nr = Last->nr + 1;
	Last = temp;
	}

}

void Kolejka_LIFO::Show(){                           
	if (!Last) {				
				cout << "Empty list" << endl;	
				return;					
			}

	Kolejka_LIFO *temp = Last;
	
	cout << endl <<"Kolejka teraz wyglada tak:" << endl  << endl;

	while(temp != 0)
	{    
	
		cout <<temp->nr <<" " << temp->val << endl;
		temp = temp->Next;
			
	}   
	cout << "\n";
}

void Kolejka_LIFO::Pop(){
	if (!Last) return;    
	
	Kolejka_LIFO *temp = Last;
	if(Last->Next == 0)
	{
		Last = NULL;
		delete temp;
		return;
	}


	Kolejka_LIFO * Prev;
	
	while(temp->Next != 0)
	{
		Prev = temp;
		temp = temp->Next;
		Prev->nr -= 1;
	}
	Prev->Next = 0;
	
	cout <<endl << "Wartosc " << temp->val << " zostala usunieta" << endl;  
	delete temp;                         
	}



int main(){
	char menu, dodaj;
	Kolejka_LIFO LIFO;
	LIFO.Last = NULL;
		while(1)
	{
		cout << "______________________________________________________" << endl;
		cout << endl << "1 LIFO Push" << endl; 
		cout << "2 LIFO Pop" << endl;

		cout << endl <<  "e Wyjscie z programu " << endl << endl ;
		
		cout << "Prosze wybrac opcje:";
		cin >> menu;
		
		switch(menu)
		{
			case '1':
				cout << "Prosze podac symbol do dodania:";
				cin >> dodaj;
				LIFO.Push(dodaj);
				LIFO.Show();
			break;
			
			case '2':
				LIFO.Pop();
				LIFO.Show();
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
