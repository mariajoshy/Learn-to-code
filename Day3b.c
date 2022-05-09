#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a=8,b=-6,c=3;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d\n",&c);
    
   
    printf("%0.2f\n",(float)sqrt((float)(a*a+b*b+c*c)/3));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


