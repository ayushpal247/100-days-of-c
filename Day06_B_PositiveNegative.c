#include<stdio.h>
int main(){
    int number;
printf('Enter an interger: ');
scanf("%d", &number);

if(number>=0){
    if(number==0){
    printf("The number is zero\n");
    }
    else{
        printf("The number is positive\n");
    }
}
else{
    printf("The number is negative");
}
    return 0;
}