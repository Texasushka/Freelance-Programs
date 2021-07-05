#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void generuj(int wektor[])
{
	int i;
	
	for(i=0;i<20;i++)
		wektor[i] = rand()%(24-3) + 4;
}

void wyswetl(int wektor[])
{
	int i;

	for(i=0;i<20;i++)
		printf("[%d]",wektor[i]);
}


int max(int wektor[])
{
	int maximum = 0;
	int i;
	for(i=0;i<20;i++)
		if(maximum < wektor[i])
			maximum = wektor[i];
			
	printf("\nMaksymalna wartosc w wektorze: [%d]",maximum);
	
	return maximum;
}

int min(int wektor[])
{
	int minimum = 27;
	int i;
	for(i=0;i<20;i++)
		if(minimum > wektor[i])
			minimum = wektor[i];
			
	printf("\nMinimalna wartosc w wektorze: [%d]",minimum);
	
	return minimum;
}

int nwd(int a, int b)
{
	if (b==0) 
		return a;
    else 
		return nwd(b,(a%b));
}

int main()
{
	int wektor[20];
	int minimum, maximum, nwd_v;
	srand(time(NULL));
	
	generuj(wektor);
	wyswetl(wektor);
	
	minimum = min(wektor);
	maximum = max(wektor);
	
	nwd_v = nwd(minimum, maximum);
	
	printf("\nNWD wynosi:%d", nwd_v);
	
	return;
}
