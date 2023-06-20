#include<stdio.h>
#include<string.h>
struct Student
{
    char name[50];
    int age;
};
struct Course 
{
    char subject[50];
    int credits;
};
// Function to swap 
void swapFields(struct Student* s1, struct Course* c1)
{
    struct Student tempS;
    struct Course tempC;
    // Swap the name field
    strcpy(tempS.name, s1->name);
    strcpy(s1->name, c1->subject);
    strcpy(c1->subject, tempS.name);
    // Swap the age field
    tempS.age=s1->age;
    s1->age=c1->credits;
    c1->credits=tempS.age;
}
int main()
{
    struct Student student;
    struct Course course;
    printf("Enter details for the student:\n");
    printf("Name: ");
    scanf("%s",student.name);
    printf("Age: ");
    scanf("%d",&(student.age));
    printf("\nEnter details for the course:\n");
    printf("Subject: ");
    scanf("%s",course.subject);
    printf("Credits: ");
    scanf("%d",&(course.credits));
    printf("\nBefore swapping:\n");
    printf("Student:\n");
    printf("Name: %s\n",student.name);
    printf("Age: %d\n",student.age);
    printf("\n");
    printf("Course:\n");
    printf("Subject: %s\n",course.subject);
    printf("Credits: %d\n",course.credits);
    printf("\n");
    // Swap the fields of the two structures
    swapFields(&student, &course);
    printf("After swapping:\n");
    printf("Student:\n");
    printf("Name: %s\n",student.name);
    printf("Age: %d\n",student.age);
    printf("\n");
    printf("Course:\n");
    printf("Subject: %s\n",course.subject);
    printf("Credits: %d\n",course.credits);
    printf("\n");
    return 0;
}
