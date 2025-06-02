#include <stdio.h>
int main(){
    int x;
    int y;
    double answer;
    char operation;

    printf("***************Mahdi's calculator**************\n");
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter what you want to do (+,-,*,/):");
    scanf(" %c",&operation);

    if(operation == '+'){
        answer = x+y;

        printf("Your sum is: %.2lf", answer);
    }
    else if (operation == '-' ){
        answer = x-y;

    printf("Your answer is: %.2lf", answer);
    }
    else if (operation == '*'){
        answer = x*y;

    printf("Your answer is: %.2lf", answer);
    }
    else if (operation == '/'){
        if( y != 0){
            answer = (double)x/y;
            printf("Your answer is: %.2lf \n", answer);
        }else{
            printf("X cannot be divided by 0 \n");
        }
    }
    else{

    printf("Please enter a valid operation \n");
    }

    printf("*****************************************\n");
    return 0;

}
