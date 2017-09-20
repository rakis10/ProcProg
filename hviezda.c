#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	

  int i,p,z,s,r,h;
  // sem napis svoje riesenie
	scanf("%d", &r);
  if (r%2==0){
  	printf("Zly vstup");
    
  }else{
  h= r/2 +1 ;
  z=r;
  for (i=1; i<=r; i++){
	  
	  
	  for (s=1;s<=r;s++){
		   

		 
	  if (i==s || z==s || i==z || s==h){
			printf("*");
		 }else{
			  printf("-");
			 }
	 
	  }
	  
	  
	 z--;
	  
	  printf("\n");
  	
  }
  }
	getchar();
	getchar();
	return 0;
}