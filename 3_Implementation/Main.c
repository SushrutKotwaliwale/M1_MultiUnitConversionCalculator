#include <stdio.h>
#include <stdlib.h>

#include "length_covt.h"
#include "area_covt.h"
#include "volume_covt.h"


unsigned int parameter, choice = 0;
unsigned int length_ip, area_ip, volume_ip;

void conv_calci(void);
void length_conv(void);
void area_conv(void);
void volume_conv(void);

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
    
    printf("Select from the following Parameters\n");
    printf("\n1. Length\n2. Area\n3. Volume\n4. exit");
    printf("\n\tEnter the number of your choice\n");
    
    scanf("%d", &parameter);    

    if(parameter == 4)
    {
        printf("\nCalculator closed.\n");
        exit(0);
    }
    
    switch(parameter)
    {
        case 1:
            length_conv();
            break;
        case 2:
            area_conv();
            break;
        case 3:
            volume_conv();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n\t---Enter a valid choice---\n");

    }
}

void length_conv(void)
{

    printf("\n1. cm-mm\n2. m-cm\n3. km-m\n4. ft-m\n5. Inch-cm");
    printf("\n\tEnter the number of your choice\n");

    scanf("%d", &choice);
    
    printf("\n\t Enter Input Length Value\n");

    scanf("%d", &length_ip);

    switch(choice)
    {
        case 1:
            printf("\n\t%d cm = %d mm\nEnter to continue", length_ip, cmTOmm(length_ip));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 2:
            printf("\n\t%d cm = %d mm\nEnter to continue", length_ip, mTOcm(length_ip));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 3:
            printf("\n\t%d cm = %d mm\nEnter to continue", length_ip, kmTOm(length_ip));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 4:
            printf("\n\t%d cm = %f mm\nEnter to continue", length_ip, ftTOm(length_ip));
            
            //__fpurge(stdin);
            //getchar();
            break;
        case 5:
            printf("\n\t%d cm = %f mm\nEnter to continue", length_ip, inchTOcm(length_ip));
            
            //__fpurge(stdin);
            //getchar();
            break;
        default:
            printf("\n\t---Enter a valid choice---\n");
    }
}

void area_conv(void)
{
    printf("\n1. sqm-sqft\n2. sqkm-hecter\n3. sqkm-sqm\n4. sqkm-acer");
    printf("\n\tEnter the number of your choice\n");

    scanf("%d", &choice);

    printf("\n\t Enter Input Area Value\n");

    scanf("%d", &area_ip);

    switch(choice)
    {
        case 1:
            printf("\n\t%d skm = %f sqft\n", area_ip, sqmTOsqft(area_ip));
            break;
        case 2:
            printf("\n\t%d sqkm = %d hectre\n", area_ip, sqkmTOhecter(area_ip));
            break;
        case 3:
            printf("\n\t%d sqkm = %d sqm\n", area_ip, sqkmTOsqm(area_ip));
            break;
        case 4:
            printf("\n\t%d sqkm = %f acer\n", area_ip, sqkmTOacer(area_ip));
            break;
        default:
            printf("\n\t---Enter a valid choice---\n");
    }

}

void volume_conv(void)
{
     printf("\n1. Lt-cmCube\n2. Lt-mCube\n3. mCube-cmCube");
    printf("\n\tEnter the number of your choice\n");

    scanf("%d", &choice);

    printf("\n\t Enter Input Volume Value\n");

    scanf("%d", &volume_ip);
    
        switch(choice)
    {
        case 1:
            printf("\n\t%d Lt = %d cmCube\n", volume_ip, LtTOcmCube(volume_ip));
            break;
        case 2:
            printf("\n\t%d Lt = %f mCube\n", volume_ip, LtTOmCube(volume_ip));
            break;
        case 3:
            printf("\n\t%d mCube = %d cmCube\n", volume_ip, mCubeTOcmCube(volume_ip));
            break;
        default:
            printf("\n\t---Enter a valid choice---\n");
    }

}