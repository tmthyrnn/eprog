#include <stdio.h> 
#include <string.h>
struct detail{
	char course[30];
	float gpa;
};

struct student{  
	char name[30];
	struct detail info;
}; 

void displayMenu(){
	  
	printf("0 - Exit\n");
	printf("1 - Write to file\n");
	printf("2 - Read file\n");
	printf("3 - Passed\n");
	printf("4 - Failed\n");
	printf("5 - Invalid Grade\n");
}

void writeToFile(){
	FILE *myFile;
	struct student stud;
	myFile = fopen("sir jack.txt", "a");
	printf("Enter student name: ");
	scanf("%s", &stud.name);
	printf("Enter Course : ");
	scanf("%s", &stud.info.course);
	printf("Enter student Grade: ");
	scanf("%f", &stud.info.gpa);
	printf("%s %s %.2f\n", stud.name, stud.info.course, stud.info.gpa);
	fprintf(myFile, "%s %s %.2f\n", stud.name, stud.info.course, stud.info.gpa);	
	fclose(myFile);
}

void readFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("pogi.txt", "r");
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.gpa);
		printf("%s %s %f\n", stud.name, stud.info.course, stud.info.gpa);
	}
	fclose(myFile);
}
void DisplayPassing(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sir jack.txt", "r");
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
	sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.gpa);
	if (stud.info.gpa>=75 && stud.info.gpa<=100){
		printf("%s %s %f\n", stud.name, stud.info.course, stud.info.gpa);
	}	
	}
	fclose(myFile);
}	

void DisplayFailed(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("pogi.txt", "r");
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
	sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.gpa);
	if (stud.info.gpa>=0 && stud.info.gpa<74){
		printf("%s %s %f\n", stud.name, stud.info.course, stud.info.gpa);
	}	
	}
	fclose(myFile);
}

void DisplayInvalid(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("pogi.txt", "r");
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
	sscanf(temp, "%s %s %f", &stud.name, &stud.info.course, &stud.info.gpa);
	if (stud.info.gpa<0 || stud.info.gpa>100){
		printf("%s %s %f\n", stud.name, stud.info.course, stud.info.gpa);
	}		
	}
	fclose(myFile);
}

int main (){	
    int choice = 1;
   	float gpa;
   
    displayMenu();
    scanf("%d", &choice);
    while(choice != 0){
    	switch(choice){
    		case 0: 
    			exit(1);
    			break;
    		case 1: 
    			writeToFile();
    			break;
    		case 2: 
    			readFromFile();
    			break;
    		case 3:	
    			DisplayPassing();
     			break;
    		case 4:    			
    			DisplayFailed();
    			break;
			case 5:
    			DisplayInvalid();
    			break;
    			
		}
		displayMenu();
    	scanf("%d", &choice);
	}  
}
 
