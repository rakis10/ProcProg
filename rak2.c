#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct auta{
		char kat [60];
		char znacka[50];
		char pred[100];
		int cena;
		int rok;
		char stav[200];		
		struct auta *dalsi;
	} AUTA;
	
AUTA *vytvor1(void){
    AUTA *p;
    p = (AUTA *) malloc(sizeof(AUTA));
    if (p == NULL) 
        printf("Malo pamate.\n");
    return p;
}
char* skr(char* str){
	str[strlen(str) - 1 ] = '\0';
	return str ;
}
AUTA* n(FILE *f, AUTA *p, int* pocet){

	int q;
	AUTA *u;
	AUTA *akt;
	f = fopen("auta.txt","r");
	if(f == NULL) {
      printf("Zaznamy neboli nacitane\n");      
   }
   char str[50];
   int cena;
   int qw = 0;
   //prvy prvok
   p = vytvor1();
		fgets(str,50,f);
		printf("typ: %s",fgets(p->kat, 60, f));		
		strcpy(p->kat,skr(p->kat));		
		printf("znacka: %s",fgets(p->znacka, 60, f));
		strcpy(p->znacka,skr(p->znacka));
		printf("predajna: %s",fgets(p->pred, 60, f));
		strcpy(p->pred,skr(p->pred));
		fscanf(f,"%d", &cena);
		p->cena = cena;
		printf("cena %d\n",cena);
		fgets(str,60,f);
		fscanf(f,"%d", &cena);
		p->rok = cena;
		printf("rok %d\n",cena);
		fgets(str,60,f);
		printf("stav: %s\n",fgets(p->stav , 60, f));
		strcpy(p->stav,skr(p->stav));
		akt= p;
		qw++;
		
   while(fgets(str, 60, f)!=NULL){
   	p->dalsi = vytvor1();
		p = p->dalsi;
		printf("typ: %s",fgets(p->kat, 60, f));		
		strcpy(p->kat,skr(p->kat));		
		printf("znacka: %s",fgets(p->znacka, 60, f));
		strcpy(p->znacka,skr(p->znacka));
		printf("predajna: %s",fgets(p->pred, 60, f));
		strcpy(p->pred,skr(p->pred));
		fscanf(f,"%d", &cena);
		p->cena = cena;
		printf("cena %d\n",cena);
		fgets(str,60,f);
		fscanf(f,"%d", &cena);
		p->rok = cena;
		printf("rok %d\n",cena);
		fgets(str,60,f);
		printf("stav: %s\n",fgets(p->stav , 60, f));
		strcpy(p->stav,skr(p->stav));	
		qw++;
	}	
	p->dalsi = NULL;
	*pocet = qw;
	printf("Nacitalo sa %d zaznamov\n", qw);
	return akt;
}
void v(AUTA *p){
	int i = 1;
	while(p != NULL){
		printf("%d.\n", i);
		printf("kategoria: %s\n",p->kat);
		printf("znacka: %s\n",p->znacka);	
		printf("predajca: %s\n",p->pred);
		printf("cena: %d\n",p->cena);
		printf("rok_vyroby: %d\n",p->rok);
		printf("stav_vozidla: %s\n",p->stav);
		p = p->dalsi;
		i++;
}
}
void vypis(AUTA * p, int po){
		printf("%d.\n", po);
		printf("kategoria: %s\n",p->kat);
		printf("znacka: %s\n",p->znacka);	
		printf("predajca: %s\n",p->pred);
		printf("cena: %d\n",p->cena);
		printf("rok_vyroby: %d\n",p->rok);
		printf("stav_vozidla: %s\n",p->stav);
}
int zhoda(char * znacka, char* str){
	char st[20];
	
	strcpy(str,strupr(str));
	strcpy(znacka,strupr(znacka));// *znacka;
	int i;
	return strstr(znacka,str);
}
char* nacitaj(){
	char str [200];
	fgets(str, sizeof(str), stdin);
	return str;
}
AUTA * nacitaj_str(AUTA * nov){
		int in;
		strcpy(nov->kat,skr(nacitaj()));
			printf("%s", nov->kat);
		strcpy(nov->znacka,skr(nacitaj()));
					printf("%s", nov->znacka);
		strcpy(nov->pred,skr(nacitaj()));
		scanf("%d",&in);
		nov->cena = in;
		printf("%d", nov->cena);
		scanf("%d",&in);
		nov->rok = in;
		printf("%d", nov->rok);
		char sa[200];
		gets(sa);
		printf("%s", sa);
		strcpy(nov->stav,skr(nacitaj()));
		printf("%s", nov->stav);
		nov->dalsi = NULL;
		return nov;
}
AUTA * najdi(AUTA *p, char *str){
	AUTA * akt,*pom;
	akt = p;
	//	printf("Malo rozumu.\n");
	pom = akt;
	if(akt == NULL)return(NULL);
	else{
		while((akt !=NULL)&&(!zhoda(akt->znacka,str))){
			//predchadzajuci
			pom = akt;
			
			akt = akt->dalsi;
				//	printf("%d\n",akt->cena);
			}
			return (akt == NULL ? NULL : pom);		
	}
}
AUTA * poradie(AUTA* p, int lol){
	AUTA * rak = p;
	int a;
	for (a =2; a<lol;a++){
		rak = rak->dalsi;
	}
	return rak;
}
AUTA * zmaz(AUTA* p){
	//preskoci q;
	AUTA * q = p->dalsi;
		//	printf("Malo rozumu.\n");
	if (p!=NULL && p->dalsi!=NULL){
		p->dalsi = q->dalsi;
	}
		//	printf("%d", p->cena);
	return p;
	
}
AUTA * z(AUTA* p, int* poc){
	AUTA * lol = p, *pom = p;
	char * str[20];
	getchar();
	gets(str);
	AUTA * pred, *nadch;
	int diki = *poc,i=0, sub=0;
	while(lol!=NULL){
		if(zhoda(lol->znacka,str)!=NULL){
			sub++;
			if(pom==p){
				if(i!=0){
					zmaz(pom);
				}else{
					p = p->dalsi;
				}
				
			}else{
				zmaz(pom);
			}
			
		//	printf("%d tato sa zmaze\n",pom->cena); 
		}
		
	//	printf("%d %d\n",i, zhoda(lol->dalsi->znacka,str));
		
		
		pom = lol;
		i++;
		lol= lol->dalsi;
	}
	
	printf("Zmazalo sa %d suborov\n",sub); 
	
	return p;
}

AUTA* pp(AUTA *q,int * pocet){
	int e;
	AUTA *lol = q, *nov, *nas;
	scanf("%d\n", &e);
	if(e>=*pocet && e!=1){
		int pct;
		while(lol->dalsi != NULL){
			lol = lol->dalsi;
		}
		nov = vytvor1();
		nov = nacitaj_str(nov);
		lol->dalsi = nov;		
	}else if(e==1){
		nov = vytvor1();
		nov = nacitaj_str(nov);
		nov->dalsi = lol;
		q = nov;	
	}else{
	//	char * str[20];
		//gets(str);
		AUTA *faf;
		int por;
		scanf("%d",&por);
		getchar();
	//	faf = najdi(lol,str);
			faf = poradie(lol,por);
		if(faf==NULL){		printf("Malo rozumu.\n");
		}else{
			//divocina
			nov = vytvor1();
			nov = nacitaj_str(nov);
			nas = faf->dalsi;
			faf->dalsi = nov;
			nov->dalsi = nas;
			
	}
	}
	return q ;
}
AUTA * porovnaj(AUTA* q, int cena){
	AUTA * qw, *pom;
	qw =q;
	if(qw == NULL)return(NULL);
	else{									//cena vacsia rovna
		while((qw !=NULL)&&(qw->cena > cena )){
			//predchadzajuci
			qw = qw->dalsi;
			
			}
			return (qw == NULL ? NULL : qw);		
	}
}
void h(AUTA *q, int* pocet){
	AUTA *lol; 
	lol = q;
	int qw, po=1,i, poce;
	//podmienka
	poce = *pocet;
	scanf("%d",&qw);

	for(i=1; i<=poce;i++){
		lol = porovnaj(lol,qw);
		
		if(lol!= NULL){

			vypis(lol, po);
			po++;
			lol= lol->dalsi;
		}
	}
	
}
void main(){
int c;
FILE *f = NULL;
AUTA *p = NULL;
AUTA *d = NULL;
int po = 0;
int  *pocet = &po;
	while(c!='k'){
		c = getchar();
		switch(c){
			case'k':
			fclose(f);
		
			break;
			case'v':
			v(p);
			break;
			case'h':
			h(p, pocet);
			break;
			case 'o':
			
			break;
			case 'n':
			 p =n(f,p,pocet);
				break;
			case 'z':
				p = z(p, pocet);
				break;
			case 'p':
			p =pp(p,pocet);
			break;
		}		
	}
}
