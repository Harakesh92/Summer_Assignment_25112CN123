// Write a program to Check Armstrong number.
#include <stdio.h>
#include <math.h>
int main(){
    int num, originalNum, remainder, digits=0, result = 0;//sum=0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)        // for counting the number of digits in the number
    {
        digits++;  //  digits = digits+1 ; (Count the number of digits)
        originalNum = originalNum / 10;
    }

    originalNum = num;  // Reset originalNum

    while (originalNum != 0)        // calculate armstrong sum  
    {
        
        
        remainder = originalNum % 10;       // remainder = num % 10; 
        result += pow(remainder, digits);  // result = result+(remainder+remainder+remainder); also works
        originalNum =  originalNum / 10;      //originalNum /= 10;   /* code */
        
        
       
    }
    if (result == num)  // if (result == originalNum) 
    {
        printf("%d is an Armstrong number.\n", num);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}




/*
#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, temp, remainder;
    int n = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    if (temp == 0)
        n = 1;
    else
    {
        while (temp != 0)
        {
            n++;
            temp /= 10;
        }
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += (int)pow(remainder, n);
        originalNum /= 10;
    }

    if (num == 0)
        result = 0;

    if (result == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
*/