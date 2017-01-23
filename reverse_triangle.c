#include <stdio.h>
int main(){
    int x, y, num;

    printf("Enter number: ");
    scanf("%d",&num);

    for(x=num; x>=0; --x){
    	for(y=1; y<=x; ++y){
    		printf("*");
    	}
    	printf("\n");
    }
    return 0;
}
