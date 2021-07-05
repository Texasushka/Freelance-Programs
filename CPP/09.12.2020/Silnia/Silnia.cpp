#include <iostream>

using namespace std;

int main()
{

int s = 1, n, i;

cout << "Podaj liczbe n:";
cin >> n;	


if(n == 0)
{
cout << "Silnia 0 wynosi:1";
}
else if(n < 0){
cout << "Nie mozna znalezc silni liczby ujemnej";
}
else
{

for(i=1;i<=n;i++){
	s = s * i;
}

cout << "Silnia liczby" << n << "wynosi:" << s << endl;

}

return 0;
}
