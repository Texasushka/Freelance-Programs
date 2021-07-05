#include <iostream>

using namespace std;


float oblicz(float t, float V){
	float S;
	S = V*t;
	cout << "Dystans(S) wynosi: " << V <<"km/g * " << t << "g = " << S << " km";
}

int main(){
	float V,t;
	cout << "Prosze podac czas(t) w godzinach:";
	cin >> t;
	cout << "Prosze podac predkosc(V) w km/g:";
	cin >> V;
	oblicz(t,V);
	
}
