// Program ce izracunat povrsinu baze valjka.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
//Funkcija za izracunavanje baze valjka
int baza(int radijus)
{
	float baza;
	baza=(float)PI*radijus*radijus;
    return baza;
}
  

int main()
{
    int radijus;

    printf("Unesi radijus\n");
    scanf("%d",&radijus);
    // Pozivanje funkcije.
    float B= baza(radijus);
    printf("Baza valjka je: %.2f",B);
    return 0;
}
