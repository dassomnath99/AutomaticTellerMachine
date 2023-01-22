#include<stdio.h>

int main(){
    printf("***************** WELCOME TO XYZ ATM *******************\n");
    float x, y;
    char ch;
    printf("Enter the Intial Amount: \n");
    scanf("%f",&x);
    printf("\nEnter \"C\" for CREDIT \nEnter \"D\" for DEBIT \nEnter \"B\" for BALANACE\n");
    scanf("\n%c",&ch);
    switch (ch)
    {
    case 'C':
        printf("Enter the Credit Amount: \n");
        scanf("%f",&y);
        x=x+y;
        printf("The Updated Amount of this Account is %f\n",x);
        break;
    case 'D':
        printf("Enter the Debit Amount: \n");
        scanf("%f",&y);
        if(x>=y){
            x=x-y;
            printf("The Updated Amount of this Account is %f\n",x);
        }
        else
        {
            printf("INSUFFIENT AMOUNT IN YOUR ACCOUNT\n");
        }
        break;
    case 'B':
        printf("The Balance Amount of this Account is %f\n",x);
        break;
    default:
        printf("YOU ENTERED THE INVALID INPUT!!!, CHOOSE THE CORRECT OPTION\n");
        break;
    }
    return 0;
}
