#include <stdio.h>  
int main(){  
    int x=0; 
    while (1){
        x++;
        if( x%6==0 && x%8==0 && x%9==0 && x%11==0 && x%13==0 && x%14==0 && x%15==0 && x%17==0 && x%18==0 && x%19==0 && x%20==0)
	    break;
	   
	}  
		printf("%d",x);
} 
