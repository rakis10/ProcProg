#include <stdio.h>

int main(){
	double a;
	
	scanf("%lf", &a);
	printf("\nCena bez dane: %.0f\nPredajna cena s danou 20%%: %.1f\n", a ,1.2*a);
}
