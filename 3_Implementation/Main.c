#include "length_covt.h"

unsigned int choice = 0;
unsigned int ip_value;

void conv_calci(void);

int main()
{
    while(1)
    {
        conv_calci();
    }
}

void conv_calci(void)
{
    printf("\nUnit-Unit Conversion\n");
    printf("\n1. cm-mm\n2. m-cm\n3. km-m\n4. ft-m\n5. Inch-cm\n6. exit");
    printf("\n\tEnter the number of your choice\n");

    scanf("%d", &choice);
    
    if(choice == 6)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }
    
    printf("\n\t Enter Input Unit Value\n");

    scanf("%d", &ip_value);

    switch(choice)
    {
        case 1:
            printf("\n\t%d cm = %d mm\nEnter to continue", ip_value, cmTOmm(ip_value));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 2:
            printf("\n\t%d cm = %d mm\nEnter to continue", ip_value, mTOcm(ip_value));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 3:
            printf("\n\t%d cm = %d mm\nEnter to continue", ip_value, kmTOm(ip_value));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 4:
            printf("\n\t%d cm = %f mm\nEnter to continue", ip_value, ftTOm(ip_value));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 5:
            printf("\n\t%d cm = %f mm\nEnter to continue", ip_value, inchTOcm(ip_value));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}