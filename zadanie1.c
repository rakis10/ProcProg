#include <stdio.h>
#include <string.h>
FILE* v(FILE *f){
	f = fopen("predaj.txt","r");
	   if(f == NULL) {
      printf("Subor sa nepodarilo otvorit\n");
      
   }
   //printf("%d", f);
	/*char a;
		while (fscanf(f,  ")!=EOF){
				printf("%c",a);			
	}*/
	char str[60];
	while(fgets(str, 60, f)!=NULL){
		printf("meno priezvisko: %s",str);
		printf("SPZ: %s",fgets(str, 60, f));
		printf("typ auta: %s",fgets(str, 60, f));
		printf("cena: %s",fgets(str, 60, f));
		printf("datum: %s\n",fgets(str, 60, f));
		fgets(str, 60, f);
	}
	
	//rewind(f);
	return f;
}
void o(FILE *f){
	
	if(f == NULL) {
      printf("Subor sa nepodarilo otvorit\n");
      //return(-1);
   }else{
   	//	printf("%d", f);
	/*char a;
		while (fscanf(f,  ")!=EOF){
				printf("%c",a);			
	}*/
	int b;
	scanf("%d", &b);
	char str[60];
	char meno[60];
	double odmena;
	char men[60];
	rewind(f);
	while(fgets(str, 60, f)!=NULL){
		
		
	//	if (str[strlen(str)-1] == '\n'){
			str[strlen(str)-1] = '\0';
		//}
	//	printf("meno priezvisko: %s",str);
		fgets(meno, 60, f);
		meno[strlen(meno)-1] = '\0';
		//fgets(men, 60, f);
	//	printf(" SPZ: %s ",meno);
		int typ;
		 fscanf(f,"%d", &typ);
	//	printf(" typ je %d",typ);
		fgets(men, 60, f);
		double cena ;
		fscanf(f,"%lf", &cena);
	//	printf("%lf", cena);
		//fgets(men, 60, f);
	//	printf("SPZ: %s",fgets(str, 60, f));
		/*printf("typ auta: %s",fgets(str, 60, f));
		printf("cena: %s",fgets(str, 60, f));
		//if (())*/
		int a ;
		fscanf(f,"%d", &a);
	//	printf("datum: %d",fscanf(f,"%d", &a));
	//	printf("%d",a);
		fgets(men, 60, f);
		fgets(men, 60, f);
		// processing
		if ((b-a)> 10000){
						double x;
				if (typ==1){
					x= 0.015;
				}else{
					x= 0.022;
				}
			cena = cena * x;
			printf("%s %s %.2f\n",str, meno,cena);
		}
	}///	netusim
	rewind (f);
	}
	
}
//tu
char (*n(char *v, FILE *f, int *t))[]{
	rewind(f);
	char str[60];
		int n =0;
		while(fgets(str, 60, f)!=NULL){
			fgets(str, 60, f);
			fgets(str, 60, f);
			fgets(str, 60, f);
			fgets(str, 60, f);
			fgets(str, 60, f);
			fgets(str, 60, f);
			n++;
		}
	rewind(f);
	if (v!=NULL){
				free(v);
			}
	char **pole;
	pole =(char **)malloc(n*sizeof(char*));
	int i;
	for(i = 0; i < n; i++){
		pole[i] =(char *) malloc(7+1);
	}
	char st[10];
		rewind(f);
	i =0;
	int ii=0;
	while(fgets(str, 60, f)!=NULL){
			fgets(st, 60, f);
			fgets(str, 60, f);
			fgets(str, 60, f);
			fgets(str, 60, f);
		//	char y[10];
	//		strcpy(y,st);// = st;
		
			fgets(str, 60, f);
					
			st[strlen(st)-1] = '\0' ;
			for (ii =0 ; ii < 7; ii++ ){
					pole[i][ii] = st[ii];
			}
		
			i++;
	}
	//printf("%s", pole[2]);
//	printf("%d",i);
	//v = (char *) malloc(n*7*sizeof(char));

	*t = n;
	//tu
//	printf("%d", &pole);
	return *pole;
}
void s(char  **v, int *a){
	if(v==NULL){
		printf("Pole nieje vytvorene\n");
	}else{
	int p;
	for(p = 0; p<*a; p++){
	//	printf("%s\n",&v[p*4]);
	}
	char ara[8];	//v = (char *) malloc(n*7*sizeof(char));
	for(p = 0; p<*a; p++){
		strcpy(ara,&v[p*4]);	
		int x;
		 for (x=0; x<7;x++){
		 	if(x==2 || x==5 ){
			 printf(" %c", ara[x]);
			 }else{
			 putchar(ara[x]);
			 		 }	 	 
		 	}
		printf("\n");
	}	
}
}

void p(char **v, int *a){
	if(v==NULL){
		printf("Pole nieje vytvorene\n");
	}else{
	int p ;
	char ara[6];
	for(p = 0; p<*a; p++){
		strcpy(ara,&v[p*4]);
	
	int i, no = 0;
	for (i = 0;  i <= 2;  i++){
    	if(ara[6-i] == ara[i]){
				no++;	
			}
	}
	if(no==3){
		printf("%c%c\n", ara[0],ara[1]);
	}else{
		//	printf("nie je pal\n");
	}
}
}
}
int main(){
	int c;
	FILE *f = NULL;
	//tu
	char *w = NULL;
	int *t ,q = 2;
	t = &q;
	//printf("%d", *t);
	while(c!='k'){
		c = getchar();
		switch(c){
			case'k':
			fclose(f);
			if (w!=NULL){
				free(w);
			}
			break;
			case'v':
				f =v(f);
			break;
			case 'o':
				o(f);
				break;
			case 'n':
				w = n(w,f,t);
				break;
			case 's':
				s(w,t);
				break;
			case 'p':
				p(w,t);
			break;
		}
		
		
	}
	
	
	
	return 1;
}
