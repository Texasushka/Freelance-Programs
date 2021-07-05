#include <iostream>

 using namespace std;

struct Kolejka_FIFO{
	char val;
	int nr;
	Kolejka_FIFO *Last, *Next;
        void Push(char x);
        void Show();                           
		void Pop();
};

void Kolejka_FIFO::Push(char x){
	Kolejka_FIFO *temp = new Kolejka_FIFO;	
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

void Kolejka_FIFO::Show(){                           
	if (!Last) {				
				cout << "Empty list";	
				return;					
			}

	Kolejka_FIFO *temp = Last;
	
	cout << endl <<"Kolejka teraz wyglada tak:" << endl << "(<-- element ostatni ::: element pierwszy -->)" <<endl << endl;

	while(temp != 0)
	{    
	
		cout << temp->val << " ";
		temp = temp->Next;
			
	}   
	cout << "\n";
}

void Kolejka_FIFO::Pop(){
	if (!Last) return;    
	

	Kolejka_FIFO *temp = Last;
	Kolejka_FIFO * Prev;
	
	while(temp->Next != 0)
	{
		Prev = temp;
		temp = temp->Next;
	}
	Prev->Next = 0;
	
	cout <<endl << "Wartosc " << temp->val << " zostala usunieta" << endl;  
	delete temp;                         
	}



int main(){
	char menu, dodaj;
	Kolejka_FIFO fifo;
	fifo.Last = NULL;
		while(1)
	{
		cout << "______________________________________________________" << endl;
		cout << endl << "1 FIFO Push" << endl; 
		cout << "2 FIFO Pop" << endl;

		cout << endl <<  "e Wyjscie z programu " << endl << endl ;
		
		cout << "Prosze wybrac opcje:";
		cin >> menu;
		
		switch(menu)
		{
			case '1':
				cout << "Prosze podac symbol do dodania:";
				cin >> dodaj;
				fifo.Push(dodaj);
				fifo.Show();
			break;
			
			case '2':
				fifo.Pop();
				fifo.Show();
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
