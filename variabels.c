#include <stdio.h>
#include <stdbool.h>

int main(){

    // A variable in programming is a named container for a value
  
    // A data type is a classification that tells the compiler or interpreter what kind of value a variable
    // can hold and what operations can be performed on it
  
    // Int is an integer, used for whole numbers
    // Float and double are decimal numbers, used for values with a fractional part
    // Char is a character, used for a single letter, symbol, or number
    // Char name[] is a string or array of characters, used for a sequence of characters
    // Bool used for true or false values
    
    int age = 25; // 4 bytes
    float gpa = 3.5; // 4 bytes
    double pi = 3.14159265358979323846; // 8 bytes
    char grade = 'A'; // 1 bytes
    char name[] = "Febra S"; // 8 bytes (8 char + null)
    bool isOnline = true; // 1 bytes

    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%.15lf\n",pi);
    printf("%c\n",grade);
    printf("%s\n",name);
    printf("%d\n",isOnline);
    
    // Changing the value of a variable
    age = 30;
    
    // The value of the age variable is now 30
    printf("%d\n",age);
    
    return 0;
}
