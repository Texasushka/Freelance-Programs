#include <iostream>

using namespace std;



int main(){
	int i=0;
	int s =0;
	int n =5;
	int j;
	while(i<n)
	{
		int j=1;
		do
		{
			j=j*2;
			s++;
		}
		while(j<n);
		i=i+3;
	}
	
	cout << s;
	
	
	s=0;
	j=1;
	for(i = 0; i<n; i++){
	for(j=i; j<2*n; j++)
	{
	
		s++;
		cout << i << "| " << s<< endl;
}
s=0;
}
			cout << endl << s;
	
	
	
	int x = 0;
	s = 0;
	
	for(i = 0; i<2*n; i++)
	{
		s +=2*n-x;
		x++;
		
	}
	
		cout <<endl <<  s;
}
