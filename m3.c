
#include <stdio.h>

int main()
{
    char a;
    printf("enter value:-");
    scanf("%c",&a);

    switch(a){
        case 'M':
            printf("Monday");
            break;
            
        case 'm':
            printf("Monday");
            break;

        case 'T':
            printf("Tuesday");
            break;
            
        case 't':
            printf("Tuesday");
            break;

        case 'W':
            printf("Wednesday");
            break;
            
    
			case 'w':
            printf("Wednesday");
            break;  

        case 'h':
            printf("Thursday");
            break;  

        case 'F':
            printf("Friday");
            break;

        case 'S':
            printf("Saturday");
            break;

        case 'u':
            printf("Sunday");
            break;

        default:
        printf("Invalid! value");
    
    }
}
