// <Behrad Behmardi G01040849>
// CS 262, Lab Section 207
// Lab 3

#include <stdio.h>
#include <stdlib.h>


//shows the menu and returns the char
//selected by user
char showMenu()
{
char menu_input_by_user;  
printf("\n");
printf("MENU CHOICE: \t\t\t\t Valid User Input Choices\n");
printf("Enter/Change Character: \t\t\t'C' or 'c'\n");
printf("Enter/Change Number:     \t\t\t'N' or 'n'\n");
printf("Print Triangle Type 1 (Left Justified):\t\t'1'\n");
printf("Print Triangle Type 2 (Right Justified):\t'2'\n");
printf("Quit Program:\t \t \t \t \t'Q' or 'q'\n");
scanf(" %c", &menu_input_by_user);
return menu_input_by_user;
}

int main() {
    char menu_input_by_user=' ';
    //character that holds the char for printing triangel
    char c=' ';
    //number or rows that is entered by user
    int n = 0;
    int case_number = 0;
//prints the left justified triangel 
void printTypeOneTriangel()
{  
   int i,j;
   for(i=1; i<=n;++i)
   {
       for(j=1; j<=i; ++j)
       {
           printf("%c", c);
       }
       printf("\n");
   }
}

//prints the right justified triangel 
void printTypeTwoTriangel()
{
for(int i=0; i<n; i++)
{
    for( int j=0; j<n-i-1; j++)
    {
printf(" ");
    }    
      for( int j=0;j<i+1;j++)
      {
        printf("%c", c);
}
      printf("\n");
     }
}



//recieves and returns the number of rows entered by user
int getNumber()
{
int getNumber_input_by_user;  
printf("\n");
printf("Enter a Number between 1 to 15 \n");
scanf(" %d", &getNumber_input_by_user);
//ensures input is between 1 and 15 otherwise stays in the loop
while(getNumber_input_by_user>15||getNumber_input_by_user<1)
           {
               printf("\nNumber Must be Between 1 and 15 \n");
               printf("\nPlease try again \n");
               scanf(" %d", &getNumber_input_by_user);
           }
return getNumber_input_by_user;
}

//shows the menu and checks the input entered by user
//selects the proper case based on the input 
       do
       {
       menu_input_by_user = showMenu();
if(menu_input_by_user=='c' || menu_input_by_user=='C')
  {
      case_number=1;
      }
  else if(menu_input_by_user=='N' || menu_input_by_user=='n')
  {
      case_number=2;
      }
  else if(menu_input_by_user=='1')
  {
      case_number=3;
      }
  else if(menu_input_by_user=='2')
  {
        case_number=4;
      }
      else
      {
         case_number=-1;
      }

       
       //calls the neccessary methods based on the case number
       //other wise calls default and prints the menu
       switch(case_number)
       {
           case 1 :
           printf("\nEnter your Character: \n");
           scanf(" %c", &c);
           break;

           case 2:
           n = getNumber();
           break;

           case 3:
           printTypeOneTriangel();
           break;

           case 4:
           printTypeTwoTriangel();
           break;

           default :
           printf("\nInvalid Input, Try Again \n");
           menu_input_by_user = showMenu();
       }
       
       }while( (menu_input_by_user!='q') & (menu_input_by_user!='Q'));
 
return 0;

}








