#include <stdio.h>
#include <math.h>
int main(){
	
	int p,pi,v,vi,h,hi,d,di;
	
	scanf("%d", &p);
	
	if ((p<1) || (p>100)){
		printf("Nespravny vstup\n");
		return 0 ;
	}
	for (pi =0 ; pi<p; pi++){
		
		scanf("%d %d %d", &v, &h, &d);
		
	//	int qw ; 
		if( (v % 2 == 0) || (v<3) || (h<1) || (d<1) ){
		
			printf("Nespravny vstup\n");
			
		}else{
				
		
		
		int prav,lav;
		prav = v - 1;  
		prav= prav /2;
		int iprav;
		lav = v +1;
		lav = lav / 2;
		int ilav;
		
		//jeden vzor

		int pip = 0; //blikajuca premenna
		if (h>d){
			for (h = h ; h>=d; h--){
				
			// zaciatok
		
				// jeden riadov vzorov
				for (ilav= 0; ilav<lav; ilav++){
					
					// 	h - krat vzor
					for (hi = 0; hi<h; hi++){
						char c = 'A';
						if (pip==1){
							c+=32;
						}
						c+=ilav;
								//	jedna cast riadku
						for(iprav =0; iprav< prav; iprav++){
							int a = prav - iprav  - ilav;
							if (a> 0){
								printf("-");
							}	else {
								//podmienky opakovnia abecedy
									if(c==91)
									{
										c=65;
									}
									if (c==123){
										c= 97;
									}
								printf("%c",c);// sem pojde pismeno
							
								c++;
								
							}
							
						}
						//stred
						//podmienky opakovnia abecedy
									if(c==91)
									{
										c=65;
									}
									if (c==123){
										c= 97;
									}
						printf("%c",c);
						c++;
						//prava cast
						for(iprav = prav ; iprav> 0; iprav--){
							int a = prav - iprav - ilav;
							if (a >= 0){
								printf("-");
							}	else {
								//podmienky opakovnia abecedy
									if(c==91)
									{
										c=65;
									}
									if (c==123){
										c= 97;
									}
								printf("%c",c);// sem pojde pismeno
								c++;
							}
							
						}
						
					}
					
						//koniec jedneho riadku
						printf("\n");
			} //koniec
			//blikanie premenne kazdy riadok
			if (pip == 0 ){
						pip++;
					}else{
						pip=0;
					}
		
				
				
				
				
			}
			}else if (d>h){
			
		for (h=h; h<=d; h++){
		
			// zaciatok
		
				// jeden riadov vzorov
				for (ilav= 0; ilav<lav; ilav++){
					
					// 	h - krat vzor
					for (hi = 0; hi<h; hi++){
						char c = 'A';
						if (pip==1){
							c+=32;
						}
						c+=ilav;
								//	jedna cast riadku
						for(iprav =0; iprav< prav; iprav++){
							int a = prav - iprav  - ilav;
							if (a> 0){
								printf("-");
							}	else {
								//podmienky opakovnia abecedy
									if(c==91)
									{
										c=65;
									}
									if (c==123){
										c= 97;
									}
								printf("%c",c);// sem pojde pismeno
								c++;
							}
							
						}
						//stred
						printf("%c",c);
						c++;
						//prava cast
						for(iprav = prav ; iprav> 0; iprav--){
							int a = prav - iprav - ilav;
							if (a >= 0){
								printf("-");
							}	else {
								//podmienky opakovnia abecedy
									if(c==91)
									{
										c=65;
									}
									if (c==123){
										c= 97;
									}
								printf("%c",c);// sem pojde pismeno
								c++;
							}
							
						}
						
					}
						//koniec jedneho riadku
						printf("\n");
			} //koniec
		//blikanie premenne kazdy riadok
			if (pip == 0 ){
						pip++;
					}else{
						pip=0;
					}
		
	}//koniec druheho cyklu
		
	}//koniec druhej podmienky
		
		
	}//koniec podmienky else
	
	}//p cyklus
	
	
	
	return 0; 
}
