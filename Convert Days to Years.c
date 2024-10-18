#include <stdio.h>

int main() 
{
    int days = 3650; 
    float years;
    
    years = days / 365.0;
    
    printf("Program to convert Days to Years :\n\n");
    printf("%d days is equal to %.2f years", days, years);
    
    return 0;
}
