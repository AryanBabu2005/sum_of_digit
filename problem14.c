#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() 
{
     char s[100];

    printf("Enter any number: ");
    scanf("%s", s); 

    int n = strlen(s);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
       
        count += s[i] - '0'; 
    }
    printf("The sum of the digits is %d\n", count);
    return 0;
}
