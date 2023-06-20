#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[20];
    float marks;
};
void parseStringAndInitialize(char* input,struct Student* student)
{
    char* token=strtok(input," ");
    if(token!=NULL)
    {
        student->rollno=atoi(token);
        token=strtok(NULL," ");
        if(token!=NULL)
        {
            strncpy(student->name,token,sizeof(student->name)-1);
            student->name[sizeof(student->name)-1]='\0';
            token=strtok(NULL," ");
            if(token!=NULL)
            {
                student->marks=atof(token);
            }
        }
    }
}
int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d",&size);
    while(getchar()!='\n');
    struct Student* students=malloc(size*sizeof(struct Student));
    for(int i=0;i<size;i++)
    {
        char input[100];
        printf("Enter the input string: ");
        fgets(input,sizeof(input),stdin);
        input[strcspn(input,"\n")]='\0';
        parseStringAndInitialize(input,&students[i]);
    }
    for (int i=0;i<size;i++)
    {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",students[i].rollno,students[i].name,students[i].marks);
    }
    free(students);
    return 0;
}