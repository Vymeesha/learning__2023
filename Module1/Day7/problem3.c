#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
struct Data
{
    int EntryNo,Humidity,Light;
    char sensorNo[10],Time[9];
    float Temperature;
};
int extract(struct Data d[],int *num)
{
    FILE *fptr=fopen("data.csv","r");
    if(fptr==NULL)
    {
        printf("Cannot open file");
        return 2;
    }
    else
    {
        char line[100];
        char* token;
        int lineCount = 0;
        while(fgets(line,sizeof(line),fptr))
        {
            token=strtok(line,",");
            d[lineCount].EntryNo=atoi(token);
            token=strtok(NULL,",");
            strcpy(d[lineCount].sensorNo,token);
            token=strtok(NULL,",");
            d[lineCount].Temperature=atof(token);
            token=strtok(NULL,",");
            d[lineCount].Humidity=atoi(token);
            token=strtok(NULL,",");
            d[lineCount].Light=atoi(token);
            token=strtok(NULL,",");
            strcpy(d[lineCount].Time,token);
            lineCount++;
        }
        fclose(fptr);
        *num=lineCount;
    }
}
void display(struct Data d[],int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%d %s %f %d %d %s\n",d[i].EntryNo,d[i].sensorNo,d[i].Temperature,d[i].Humidity,d[i].Light,d[i].Time);
    }
}
int main()
{
    struct Data d[MAX];
    int num;
    printf("Enter no.of entries\n:");
    scanf("%d",&num);
    extract(d,&num);
    display(d,num);
    return 0;
}
