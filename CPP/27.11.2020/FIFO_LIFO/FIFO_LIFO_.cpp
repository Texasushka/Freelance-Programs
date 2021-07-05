#include <iostream>

 using namespace std;

struct Kolejka{
	char val;
	int nr;
	Kolejka *Last, *Next;
        void Push(char x);
        void Show();                           
		void FI_Pop();
		void LI_Pop();
};

void Kolejka::Push(char x){
	Kolejka *temp = new Kolejka;	
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

void Kolejka::Show(){                           
	if (!Last) {				
				cout << "Empty list" << endl;	
				return;					
			}

	Kolejka *temp = Last;
	
	cout << endl <<"Kolejka teraz wyglada tak:" << endl  << endl;

	while(temp != 0)
	{    
	
		cout <<temp->nr <<" " << temp->val << endl;
		temp = temp->Next;
			
	}   
	cout << "\n";
}

void Kolejka::FI_Pop(){
	if (!Last) return;    
	
	Kolejka *temp = Last;
	if(Last->Next == 0)
	{
		Last = NULL;
		delete temp;
		return;
	}


	Kolejka * Prev;
	
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

void Kolejka::LI_Pop(){
	if (!Last) return;    
	
	Kolejka *temp = Last;
	if(Last->Next == 0)
	{
		Last = NULL;
		delete temp;
		return;
	}

	Last = temp->Next;
	
	cout <<endl << "Wartosc " << temp->val << " zostala usunieta" << endl;  
	delete temp;                         
	}


int main(){
	char menu, dodaj;
	Kolejka fifo;
	fifo.Last = NULL;
		while(1)
	{
		cout << "______________________________________________________" << endl;
		cout << endl << "1 Push" << endl; 
		cout << "2 First in Pop" << endl;
		cout << "3 Last in Pop" << endl;

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
				fifo.FI_Pop();
				fifo.Show();
			break;
			
			case '3':
				fifo.LI_Pop();
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
