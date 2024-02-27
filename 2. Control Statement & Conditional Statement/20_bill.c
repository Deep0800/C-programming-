/*
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
minimum bill should be of Rs. 256/-
*/

#include<stdio.h>

int main()
{
    float bill,surcharge;
    
    printf("Enter the bill amount: ");
    scanf("%f",&bill);
    
    if(bill>800)
    {
        surcharge=bill+(bill*18/100);
        printf("Your bill is Rs. %.2f\n",surcharge);
    }
    else if(bill<256)
        {
            printf("Minimum bill should be Rs. 256/-\n");
        }
    return 0;
}