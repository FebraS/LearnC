#include <stdio.h>
#include <string.h>

int main(){
    
    int age;
    float gpa;
    char grade = '\n';
    char name[30];
    
    printf("Enter your age : ");
    scanf("%d",&age);
    
    printf("Enter your gpa : ");
    scanf("%f",&gpa); // This input will leave a newline character in the buffer.
    
    // We must clear the buffer before calling scanf again,
    // especially if you are using %c. Otherwise,
    // the newline character (\n) from the previous input will
    // be left in the buffer and immediately read by the next scanf.
    
    // The easiest way to clear the newline character
    // is to add a space before the format specifier.
    
    printf("Enter your grade : ");
    scanf(" %c",&grade); // Adding a space before the char specifier (%c)
    
    getchar();
    printf("Enter your name : ");
    //scanf("%s",name);
    // We can also use the fgets function.
    fgets(name,sizeof(name),stdin);
    
    printf("Age   :%d\n",age);
    printf("GPA   :%f\n",gpa);
    printf("Grade :%c\n",grade);
    printf("Name  :%s\n",name);
    
    return 0;
}
