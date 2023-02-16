// WAP to create/simulate telecom call service conversation scenario using nested switch case.

#include <stdio.h>

void main()
{
    int a, b;
    printf("\nWelcome to telecome center\n\n");
    printf("To continue in English press 1.\n");
    printf("Hindi ke liye 2 dbaye\n");
    printf("Gujrati mate 3 dbavo\n");
    printf("Choose anyone..");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("\nPress 1 for account related query\n");
        printf("Press 2 for balance related query\n");
        printf("Press 3 for transfer call to support team\n");
        printf("Choose anyone..");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nShow Account details");
            break;
        case 2:
            printf("\nShow Balances");
            break;
        case 3:
            printf("\nTransfer call to customer support team");
            break;
        default:
            printf("\nYour choosing wrong number");
            break;
        }
        break;
    case 2:
        printf("\naccount problem k liye 1 dbaye\n");
        printf("balance check krne k liye 2 dbaye\n");
        printf("customer suppor se bat kr ne k liye 3 dbaaye\n");
        printf("Choose anyone..");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\naccount details");
            break;
        case 2:
            printf("\nShow Balances");
            break;
        case 3:
            printf("\nTransfer call to customer support team");
            break;
        default:
            printf("\nYour choosing wrong number");
            break;
        }
        break;
    case 3:
        printf("\naccount check krva mate 1 dbavo\n");
        printf("balance check krva mate 2 dbavo\n");
        printf("customer support mate 3 dbavo\n");
        printf("Choose anyone..");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nShow Account details");
            break;
        case 2:
            printf("\nShow Balances");
            break;
        case 3:
            printf("\nTransfer call to customer support team");
            break;
        default:
            printf("\nYour choosing wrong number");
            break;
        }
        break;

    default:
        printf("wrong select..");
        break;
    }
}