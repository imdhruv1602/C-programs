#include <stdio.h>
// Number printing usinf for loop
int main(){
    int a;
    for (a=1 ; a<5 ; a++){
        printf("%d", a);
    }
}
// Reverse Number printing using for loop
int main(){
    int a;
    for (a=5; a>1; a--){
        printf("%d", a);
    }
}
// Number printing using while loop
int main(){
    int a = 1;
    while (a<5){
        printf("%d", a);
        a++;
    }
}
// Reverse Number printing using while loop
int main(){
    int a = 5;
    while (a>1){
        printf("%d", a);
        a--;
    }
}