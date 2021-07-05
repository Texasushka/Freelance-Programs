#include <stdlib.h>



double oblicz_r(float* l, float* s, float* p)
{
	double r;
	r = *p * (*l/ *s );
	
	return r;
}

int main()
{
	float l = 100.0;
	float s = 2.5;
	float miedz = 1.72;	
	float aluminium = 2.82;	
	float srebro = 1.59;	
	float zloto = 2.44;

	printf("Wyniki dla l=%.1f; S=%.1f:\n",l,s);
	

	printf("Miedz:%.1lfE-8\n",oblicz_r(&l,&s,&miedz));
	

	printf("Aluminium:%.1lfE-8\n", oblicz_r(&l,&s,&aluminium));
	

	printf("Srebro:%.1lfE-8\n", oblicz_r(&l,&s,&srebro));
	

	printf("Zloto:%.1lfE-8\n", oblicz_r(&l,&s,&zloto));
		
	
}
