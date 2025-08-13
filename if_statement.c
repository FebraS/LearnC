#include <stdio.h>

int main() {

    // Using a integer variable to represent temperature
    int temp = 16;
  
    // Using if-else statements to determine the temperature condition
    // The conditions are checked in descending order to ensure the most specific condition is matched first
    if (temp >= 50) {
        puts("It's extremely hot!");
    } else if (temp >= 40) {
        puts("It's really hot!");
    } else if (temp >= 30) {
        puts("It's hot!");
    } else if (temp >= 1) {
        puts("It's good temperature!");
    } else if (temp >= -9) { 
        puts("It's cold!");
    } else if (temp >= -19) { 
        puts("It's really cold!");
    } else if (temp < -19) {
        puts("It's extremely cold!");
    } else {
        puts("It's really bad!");
    }
    
    return 0;
}
