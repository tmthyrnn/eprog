#include <stdio.h>
#include <math.h>
main(){
FILE *myFile;
myFile = fopen("sample.txt", "r");
  int c;
  int s[2];

    fscanf(myFile, "%d", &s[0]);
     fscanf(myFile, "%d",&s[1]);

   c = sqrt((s[0]*s[0])+(s[1]*s[1]));
       printf("%d",c);
}
