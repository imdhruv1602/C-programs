#include <stdio.h>
// In this program we taken two inputs from the user and performed arithmetic operations
int main(){
    int a;
    int b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
}

// Area of Circle
int main(){
    int r;
    int pi = 3.14;
    printf("Enter the radius: ");
    scanf("%d",&r);
    printf("The area of circle is: %d ", pi * r * r);
}

// Area of Square
int main(){
    int s;
    printf("Enter the side: ");
    scanf("%d",&s);
    printf("The area of square is: %d ", s*s);
}

// Area of Rectangle
int main(){
    int l;
    int b;
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the breadth: ");
    scanf("%d",&b);
    printf("The area of rectangle is: %d ", l*b);
}

// Area of Triangle
int main(){
    int b;
    int h;
    printf("Enter the Base: ");
    scanf("%d",&b);
    printf("Enter the Height: ");
    scanf("%d",&h);
    printf("The area of triangle is: %.0f ", 0.5*b*h);
}