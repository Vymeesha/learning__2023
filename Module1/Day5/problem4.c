#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[50];
    int age;
    float marks;
};
int main()
{
    int n,i;
    struct Student *st;
    scanf("%d",&n);
    st=(struct Student*)malloc(n*sizeof(struct Student));
    for(i=0;i<n;i++)
    {
        printf("Enter details for student %d:\n",i+1);
        printf("Name: ");
        scanf("%s",st[i].name);
        printf("Age: ");
        scanf("%d",&(st[i].age));
        printf("Marks: ");
        scanf("%f",&(st[i].marks));
    }
    printf("\nStudent details:\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d:\n",i+1);
        printf("Name: %s\n",st[i].name);
        printf("Age: %d\n",st[i].age);
        printf("Marks: %.2f\n",st[i].marks);
        printf("\n");
    }
    // Free the dynamically allocated memory
    free(st);
}