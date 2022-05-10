#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
if (a==b)
{
    if ( b==c)
        printf("Equilateral Triangle");
    else
    
        printf("Isosceles Triangle");
}
else
{
if(b==c)
        printf ("Equilateral Triangle");
    else
    
         printf ("Scalene Triangle");
}    
              
              

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
     
    
              
              

