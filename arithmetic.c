#include <stdio.h>

int main(){
    
    // Arithmetic operators: + - * / % ++ --
    
    // + --> Addition
    // - --> Subtraction
    // * --> Multiplication
    // / --> Division
    // % --> Modulo (returns the remainder of a division)
    // ++ --> Increment (adds 1 to the value)
    // -- --> Decrement (subtracts 1 from the value)
    
    int x = 100;
    int y = 50;
    int z = 0;
    
    z = x + y;
    printf("%d + %d = %-5.d\n",x,y,z);
    printf("%d - %d = %-5.d\n",x,y,(x - y));
    printf("%d * %d = %-5.d\n",x,y,(x * y));
    printf("%d / %d = %-5.d\n",x,y,(x / y));
    printf("%d %% %d = %-5.d\n",x,y,(x % y));
    printf("%d++ = %-8.d\n",x,(x++));
    printf("%d-- = %-8.d\n",y,(y--));
    
    // For an operation like x = x + 10, you can use the shorthand x += 10;
    
    return 0;
}
