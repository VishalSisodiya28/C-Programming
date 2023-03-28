//18)Accept two numbers from user and swap their values without using third variable

#include<stdio.h>
int main(){
  
    int a,b;
  
    printf("Enter value of A : ");
    scanf("%i",&a);
    
    printf("Enter value of B : ");
    scanf("%i",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\nSwapped value of A is : %i",a);
    printf("\nSwapped value of B is : %i",b);
    
    
    return 0;
}
