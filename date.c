#include<stdio.h>

int main (){
	int n,d;
	
	printf("Enter month:1-12\n ");
	scanf("%d", &n);
	
	printf("Enter day: 1-7 ");
	scanf("%d", &d);
	    
    if(n ==1 ){
       printf("January");
    
        }
    if(n==2){
       printf("february");
        }
    if(n==3){
    	printf("march");
	}
	if(n==4){
		printf("april");
	}
	if(n==5){
		printf("may");
	}
	if(n==6){
		printf("june");
        }
    if(n==7){
    	printf("july");
	}
	if(n==8){
		printf("august");
	}
	if(n==9){
		printf("september");
	}
	if(n==10){
		printf("october");
	}
	if(n==11){
		printf("november");
	}
	if(n==12){
		printf("december");
	}
    if(d==1){
		printf("sunday");
        }
    if(d==2){
    	printf("monday");
	}
	if(d==3){
		printf("tuesday");
	}
	if(d==4){
		printf("wednesday");
	}
	if(d==5){
		printf("thursday");
	}
	if(d==6){
		printf("friday");
	}
	if(d==7){
		printf("saturday");
	}
}
