#include <stdio.h>
int main()
{
    char card;
    printf("enter y if acr is valid ay other if invalid");
    scanf("%c", &card );
    int a_withdraw , bal = 10000;
    printf("Enter amount for withdrawing : ");
    scanf("%d", &a_withdraw);
    if (card =="y")
    {
        if(a_withdraw<bal)
        {
            printf("successfully withdrawn money");
        }
        else
        {
            printf("insufficient balance");
        }
    }
    else{
        printf("invalid");
    }
}

