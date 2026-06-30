#include <stdio.h>
#define PI 3.1316


int main () {

int num =45;
float num_2 = 3.141516;
float num_3 = 3.141516f;
char test = 'T';

printf("%d\n",num);
printf("%f\n",num_2);
printf("%c\n",test);
printf("%f\n",num_3);

num = num_2;
printf("%d\n",num);

//error
printf("%d\n",PI);
printf("%f\n",PI);


//error
//printf(PI);


const float c_PI = 3.3333;
printf("%f\n",c_PI);

//error
printf("%d\n",c_PI);

//error
//float result = num_2;
//int result = num_2 + num_3;
//printf ("%d\n","%f\n",result ,result);
//printf ("%f\n",result);

return 0;
}



//number 
  //integer,float,short,double,long
//test
  //charecter - keyboard key , ''
//boolean
//custom type
