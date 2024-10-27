// Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.

#include <stdio.h>

struct  student
{
    char name[20];
    int age;
    int total_marks;
};
int main(){
    struct student s1,s2;
    int avg;

    // Enter details
    printf("Enter the name of first student: ");
    scanf("%s",s1.name);
    printf("Enter age: ");
    scanf("%d",&s1.age);
    printf("Enter total marks: ");
    scanf("%d",&s1.total_marks);


    printf("\n");
    printf("Enter the name of 2nd student: ");
    scanf("%s",s2.name);
    printf("Enter age: ");
    scanf("%d",&s2.age);
    printf("Enter total marks: ");
    scanf("%d",&s2.total_marks);


// Print details
    printf("\n");
    printf("Information of first student: \n");
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("Total Marks: %d\n",s1.total_marks);

    printf("\n");
    printf("Information of 2nd student: \n");
    printf("Name: %s\n",s2.name);
    printf("Age: %d\n",s2.age);
    printf("Total Marks: %d\n",s2.total_marks);
    avg=(s1.total_marks+s2.total_marks)/2;
    printf("Average: %d", avg);
    
    return 0;
}