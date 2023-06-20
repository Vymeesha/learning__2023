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
void initialize(struct Student* students,int size,int rollno,const char* name,float marks)
{
    for(int i=0;i<size;i++)
    {
        students[i].rollno=rollno+i;
        strncpy(students[i].name,name,sizeof(students[i].name)-1);
        students[i].name[sizeof(students[i].name)-1]='\0';
        students[i].marks=marks;
    }
}
void display(struct Student *students,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",students[i].rollno,students[i].name,students[i].marks);
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
        initialize(students, size,students->rollno,students-> name,students-> marks);
        parseStringAndInitialize(input,&students[i]);
    }
    printf("After initialization:\n");
    for(int i=0;i<size;i++)
    {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",students[i].rollno,students[i].name,students[i].marks);
    }
    printf("Displaying all members:\n");
    display(students,size);
    free(students);
    return 0;
}