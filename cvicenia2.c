#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
#include <conio.h> 
/*
int main(){
	char c;
	scanf("%c", &c);
	('0'<=c<='9') ? printf("\nZnak\n") : printf("");
	if('0'<= c <='9'){
		printf("Znak\n");
	}
	return 0;

}*/
/*	2.
int main(){
	int n,i;
	double a,max,min;
	scanf("%d",&n);
	//printf("\n");
	for (i = 0;i < n; i++){
		scanf("%lf",&a);
		if(i==0){
			max=a;
			min=a;
		}else{
			max = (a>max) ? a : max;
			min = (a<min) ? a : min;
		}
	//	printf("\n");
	}
	printf("Minimum: %.2f\nMaximum: %.2f\n", min, max);

}*//*
int main(){
	int m,n,i,a;
	scanf("%d",&n);
	for(i=0; i< n; i++){
		scanf("%d",&a);
		if (a<0 || a>10){
			printf("Postupnost nieje spravna\n");
			break;
		}else{
			if(i==0){
				m= a;
				}else{
					if (a>(2*m)|| a<(2/m)){
						printf("Postupnost nieje spravna\n");
						break;
					}else{
						m =a;
						if((i+1)== n ){
							printf("Postupnost je spravna\n");
						}
					}
				}
		}
		
	}
}*/ /* 	4
int main(){
	int i,n,c;
	scanf("%d",&n);
	if(n<1 || n>15){
	for (i=0; i<n ; i++){
		printf("%d: ",i+1);
		for (c = 0; c < (n-i); c++){
			printf("%d ", c+1);
			
		}
		printf("\n");
	}}
}*//* 5
int main(){
	int i,n,c;
	scanf("%d",&n);
	if(1 <= n <= 15){
	for (i=0; i<n ; i++){
		printf("%d: ",i+1);
		for (c = 0; c <(n-i); c++){
			printf("%d ", n-c-i);
			
		}
		printf("\n");
	}
	}
}*/
/*		6
int main(){
	int i,n,c;
	scanf("%d",&n);
	if(1 <= n <= 15){
		for (i=0; i<n; i++){
			for (c=0;c<n;c++){
				if(c<(i+1)){
					printf("*");
					}else{
						printf("-");
					}
			}
			printf("\n");
		}
		for (i=0; i<n-1; i++){
			for (c=n;c>0;c--){
				if(c>i+1){
					printf("*");
					}else{
						printf("-");
					}
			}
			printf("\n");
}}}	*/ /* 	cvic7
int main(){
	int i,n,c;
	double stred,l;
	int stre;
	scanf("%lf", &l);
	stred = round(l/2);
	i= (int)l;
	stre = (int)stred;
//	printf("%d", stre);

	//	samotny cyklus
	for (n = 0 ; n < i; n++){		//n je velkost		c je column
		// plny riadok
		if(n+1== stre){
			int g;
			for (g=0;g <l; g++){
				printf("*");
			}
			printf("\n");
		}else{
		for(c = 0; c < i ; c++){
			//stred
			if (c+1 == stre || c == n || (c+1== (i-n))){
				printf("*");
			}else{
				printf("-");
			}
			
		}
		printf("\n");
	}
}
}

}else if(ch=='\n'){
			putchar("\n");
		}else if('A'<=ch<='Z'){
			printf("%c",ch);
		}else if('a'<=ch<='z'){
			printf("%c", ch-32);
		}
	}

*//*		8.cvic
int main(){
	 int ch;
 
  //cprogramming script
  while (ch != '*'){	
  	ch = getch();
  	int a = (int)ch;
  	if(a=='\t'){
    	putchar(' ');  
		}else if('A'<= a && a<='Z'){
			putchar(a);
		}else if ('a'<= a && a<='z'){
			putchar(a-32);
		}else if(a==13){
    	putchar(' ');   
			}else{
		putchar('-');
	}
	}
	putchar('*');
return 0;
}*//*		cvic 9
int main(){
	int m,v=0;
	int c;
	while(c!= 13){
		int p = getch();
		c = (int)p;
		if('A'<= c && c<='Z'){
			v++;
		}else if ('a'<= c && c<='z'){
			m++;
		
	}}
	printf("%d %d\n", m,v);

}*//*		cvic 10
int main(){
	int n,i=0,a=0,p=0;
	scanf("%d",&n);
	for (i = 0; i<n; i++){
		scanf("%d", &a);
		if(a>0 && a <=100){
			p++;
		}
		
	}
	printf("%d",p);
}*//*		cvic 11 
int main(){
	int n,i,a=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		a = a * i;
			
		}
		printf("%d", a);
	}*//*		cvic12
int main(){
	double f,g;
	int i;
	scanf("%lf %lf",&f,&g);
	for (i= 0 ; i<=g;i+=3){
		if (f<=i && i<=g){
			printf("%d ", i);
		}
	}
	printf("\n");
}*//*		cvic 13
int main(){
	int f,g,d;
	int i;
	scanf("%d %d %d",&f,&g,&d);
	for (i= 0 ; i<=g;i+=d){
		if (f<=i && i<=g){
			printf("%d ", i);
		}
	}
	printf("\n");
}*//* 		cvic14
int main(){
	int i,y=0,s=0,p=0,x=1;
	scanf("%d %d", &s, &p);
	int a;
	int o;
	int k;
	int q = 0;	// 'blikajuca' premenna
	// k je kazdy rad o velkosti 3
	for(k =0; k < s; k++){
	//kazdy z p- riadkov
	for (o = 0 ; o<p; o++){

	//kazdy stlpec o velkosti p
	for(a = 0; a<s; a++){
	
	//stlpcek z p stlpca
	for (i = 0 ; i<p ; i++){
		//	moze stat problem ak sa s != 2
		if (q % 2 ){
		putchar(' ');
	}else{
		putchar('*');
	}

	}
	//kazdych p stlpcov sa meni premenna
	q++;
		}
	printf("\n");

}
	q++;	
}
}*//*		cvic 15
int main(){
	int m,v=0;
	int c;

	
	while(c!= 'k' || c!= 'K'){
		c = getchar();
		if(c=='c'|| c=='C'){
			printf("STOJ\n");
		}else if(c=='z'|| c=='Z'){
			printf("IDES\n");
			}else if ((c==167 )|| (c ==166)){
				printf("POZOR\n");
			}
		
	}
	
}*/
