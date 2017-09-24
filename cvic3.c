#include <stdio.h>
#include <math.h>
/*	cvic3
int main(){
	double m,kg,b;
	scanf("%lf %lf", &m,&kg);
	b = kg/(m*m/10000);
	printf("\nBMI: %.3lf\n", b);
}*/
/*	cvic4
int main(){
	double m,kg,b;
	scanf("%lf %lf", &b,&kg);
	b= sqrt(kg/b);
	printf("Vyska: %.1f",b );
}*/
/* cvic5
int main(){
	int i,a=0;
	scanf("%d",&i);
//	printf("\n");
	for (a; a<i; a++){
	
		double m,kg,b;
		scanf("%lf %lf", &m,&kg);
		b = kg/(m*m/10000);
		printf("BMI: %.3lf\n", b);
		if (b>18.5 && b<30){
			if(b>25){
				printf("nadvaha\n");
			}else{
				printf("normalna hmotnost\n");
			}
		}else{
			if(b>25){
				printf("obezita\n");
			}else{
				printf("podvaha\n");
			}
	}
	
}
}
*/
/*	cvic6
int main(){
	char a,b;
	scanf ("%c %c", &a,&b);
	printf("%c %d\n", a-32, a-32);
	printf("%c %d\n", b-32, b-32);
} */
/* cvic7
int main(){
	char a,b;
	scanf("%c %c", &a,&b);
	printf("%c %c\n", b+32, a+32);
} */
/*
int main(){
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("Objem: %.3f\n", a*b*c);
	
} */
/* cvic9
#define PI 3.14
int main(){
	double a,b;
	scanf("%lf %lf", &a, &b);
	printf("Objem: %.2f\n", PI*a*a*b);
} */
/* cvic10
int main(){
	double a,b,c,d,e;
	scanf("%lf %lf %lf %lf %lf", &a ,&b,&c, &d, &e);
	printf("\n");
//	scanf("%lf %lf %lf %lf %lf", &a ,&b,&c, &d, &e);
	printf("\n%.0f\n", e/ --a * b++/c++);
	//a = fmod(a, b, d , 1 + e/2);
	printf("%.0f\n", fmod(a,a = b = d = 1 +e / 2));
} */
/*
int main(){
	double a;
	scanf("%lf", &a);
	int b = a/1;
	printf("\n%d %.0f", b,round(a));
} */
/*
int main(){
	char a,b,c;
	scanf("%c %c %c",&a,&b,&c);
	if((a == b) && (b == c)){
		printf("\nVsetky pismena su rovnake\n");
		}else{
			if((a == b ) || (a==c)||(b==c)){
				printf("\nDve pismenka su rovnake\n");
			}else{
				printf("\nVsetky pismena su rozne\n");
			}
		}
}*/
int main(){
	char c;
	scanf("%c", &c);
	if ((65<=c<=90)||(97<=c<=122)||(48<=c<=57)){
		printf("Alfanumericky znak\n");
	}else{
		printf("Interpunkcny znak");
	}
}

