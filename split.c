#include<stdio.h>
#include <string.h>

int main() {
   //char string[50] = "Evren:Aykac:3462:31:6700:Sales Depertmant";
   printf("Enter an employee: ");
    char string[100];
    
   gets(string);
   printf("Enter increase in the salary: ");
   int increase;
   scanf("%d",&increase);
  // printf("%s", str);
   // Extract the first token
   char * token = strtok(string, ":");
   // loop through the string to extract all other tokens
   printf("Employee information \n");
   printf("-----------------------\n");
   int counter=0;
   
   while( token != NULL ) {
   	counter=counter+1;
   	if(counter==1){
	   printf("Name : ");
   		printf( " %s\n", token ); //printing each token
      token = strtok(NULL, ":");
	   }
	   else if (counter==2){
	   	printf("Surname : ");
   		printf( " %s\n", token ); //printing each token
      token = strtok(NULL, ":");
	   }
	   else if(counter==3){
	   	printf("Empleyee ID : ");
	   	int x = atoi(token);
	   	printf( "  %d\n", x ); //printing each token
      token = strtok(NULL, ":");
	   }
	    else if(counter==4){
	    	printf("Age :");
	   	int x = atoi(token);
	   	printf( "  %d\n", x ); //printing each token
      token = strtok(NULL, ":");
	   }
   	
   	
   	else if(counter==5){
   		 int x = atoi(token);
   		 printf("Salary :");
   		 	printf( "  %d\n", x+250 ); //printing each token
      token = strtok(NULL, ":");
	   }
	   else if(counter==6){
	   		printf("Department : ");
   		printf( " %s\n", token ); //printing each token
      token = strtok(NULL, ":");
	   }
	   
	  
     
   }
   return 0;
}
