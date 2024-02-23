#include <stdio.h>

/* In this we will study about if-else if and else statement
Now the basic structure of these statemnt is given below*/

int main(){
    define the variables
    take input
    if (condition){
        print what you want to print if the condition is true
    }
    else{
        print what you want to print if the condition is not true
    }
    return 0;
}

// Program of greatest number between 2 numbers
int main(){
     int a;
     int b;
     printf("Enter the number a: ");
     scanf("%d", &a);
     printf("Enter the number b: ");
     scanf("%d", &b);
     if (a>b){
         printf("a is grater");
     }
     else {
         printf("b is greater");
     }
     return 0;
 }

// Program of greatest number between 3 numbers

 int main(){
     int a;
     int b;
     int c;
     printf("Enter the number a: ");
     scanf("%d", &a);
     printf("Enter the number b: ");
     scanf("%d", &b);
     printf("Enter the number c: ");
     scanf("%d", &c);
     if (a>b & a>c){
         printf("a is grater");
     }
     else if (b>a & b>c) {
         printf("b is greater");
     }
     else{
         printf("c is greater");
         }
     return 0;
}