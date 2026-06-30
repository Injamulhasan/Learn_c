#include <stdio.h>
int g_var =100;

int main() {


  int variable_name = 50;
  printf("variable_name + 5 = %d\n" , variable_name + 5);
  printf("variable_name - 5 = %d\n" , variable_name - 5);
  printf("variable_name * 5 = %d\n" , variable_name * 5);
  printf("variable_name / 5 = %d\n" , variable_name / 5);
  printf("variable_name  = %d\n" , variable_name);


  //more dynamic
  int var_1= 50;
  int var_2= 30;

  printf("%d + %d = %d\n",var_1,var_2, var_1 + var_2);
  printf("%d - %d = %d\n",var_1,var_2, var_1 - var_2);
  printf("%d * %d = %d\n",var_1,var_2, var_1 * var_2);
  printf("%d / %d = %d\n",var_1,var_2, var_1 / var_2);
  printf("%d\n" ,g_var*var_1*var_2);

  return 0;
}



// variable name also called identifier
//variables define and declare

//define a variable-  int var;
//declare a variable- int var =5;

//we can declare variables inside or outside of our main function

//Scope 
//inside main = local variables
//outside main = Global variable


//Memory life time
//static - kind of local
//autometic - kind of local


//External Variables - sharable variable