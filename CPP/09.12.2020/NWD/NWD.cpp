
#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
    int a, b; //tworzymy zmienne
    
    cout << "Podaj pierwsza liczbe: ";
    cin >> a; 							//wczytujemy pierwsza liczbe
    cout << "Podaj druga liczbe: ";
    cin >> b; 							//wczytujemy druga liczbe
    
     while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
           
           cout << "NWD wynosi:" << a << endl; //b tez zawiera poprawna odpowiedz
    
     
    system("pause");
    return 0;
}
