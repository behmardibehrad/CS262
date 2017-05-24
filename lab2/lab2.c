// <Behrad Behmardi G01040849>
// CS 262, Lab Section 207
// Lab 2

#include <stdio.h>
#include <stdlib.h>

int main()

{

char yes_or_no;
double exchange_rate=0.0;
double USD=0.0;
double value_in_Canadian_Dollars=0.0;
double net=0.0;

printf("\nPlease enter the amount in USD to be exchanged: \n");

scanf("%lf", &USD);

if(USD<0) 
{
     printf("\n Invalid Input (Negetive Number) \n");
     exit(0);
}


printf("\nPlease enter an exchange rate between the US and Canada currency: \n");
scanf("%lf", &exchange_rate);

if(exchange_rate<0) 
{
     printf("\n Invalid Input (Negetive Number) \n");
     exit(0);
}



value_in_Canadian_Dollars = (exchange_rate * USD);
net = (value_in_Canadian_Dollars - USD);



printf("\nUSD %.2f$ \n", USD);
printf("exchange rate %.2f \n", exchange_rate);
printf("Value in Canadian Dollars %.2f$(Canada) \n", value_in_Canadian_Dollars);

if (value_in_Canadian_Dollars<USD)
{
    printf("Net lost %.2f$ \n\n" , net);
    
    }
    
    else if (value_in_Canadian_Dollars>USD)
    {  
        printf("Net gain %.2f \n\n", net);
        
        }
        
        else 
        {
            printf("net %.2f \n\n", net);
            
            }




  
printf("Start Over? Y/N \n");   
scanf(" %c", &yes_or_no);

if(yes_or_no == 'y' || yes_or_no == 'Y'){
    return main();
}



     
}

