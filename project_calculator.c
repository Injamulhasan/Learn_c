#include <stdio.h>  // prepocessor

int main() {  //function

  float n1,n2,result;

  printf ("Please Enter he Two Numbers(4 1.99):");
  scanf("%f %f",&n1 ,&n2);

  result = n1 + n2 ;
  printf("%.2f + %.2f = %.2f\n", n1 ,n2 ,result);


  result = n1 - n2 ;
  printf("%.2f - %.2f = %.2f\n", n1 ,n2 ,result);


  result = n1 * n2 ;
  printf("%.2f * %.2f = %.2f\n", n1 ,n2 ,result);


  result = n1 / n2 ;
  printf("%.2f / %.2f = %.2f\n", n1 ,n2 ,result);

  return 0;
}