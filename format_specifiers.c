#include <stdio.h>

int main()
{
    // A format specifier is a special token that starts
    // with a percent symbol (%) followed by a special character.
    // It controls how data is displayed.
    
    int firstNum = 2;
    int secondNum = 200;
    int thirdNum = 2000;
    float firstPrice = 20.52;
    float secondPrice = 100.34;
    float thirdPrice = -30.67;
    
    // Display 4 spaces from the left
    printf("%4d\n",firstNum);
    printf("%4d\n",secondNum);
    printf("%4d\n",thirdNum);
    
    // Display 4 spaces from the right
    printf("\n");
    
    printf("%-4d\n",firstNum);
    printf("%-4d\n",secondNum);
    printf("%-4d\n",thirdNum);
    
    // Fill the spaces with the number 0
    printf("\n");
    
    printf("%04d\n",firstNum);
    printf("%04d\n",secondNum);
    printf("%04d\n",thirdNum);
    
    // Display only two digits after the decimal point
    printf("%.2f\n",firstPrice);
    printf("%.2f\n",secondPrice);
    printf("%.2f\n",thirdPrice);
    
    // Display 16 spaces and a sign for positive numbers
    printf("\n");
    printf("%+16.2f\n",firstPrice);
    printf("%+16.2f\n",secondPrice);
    printf("%+16.2f\n",thirdPrice);
    
    return 0;
}
