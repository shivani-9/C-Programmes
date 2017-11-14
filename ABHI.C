#include<stdio.h>
#include<conio.h>
#include<string.h>
struct detail{
int m[6];
int batch,total;
char name[50],programe[10],adno[12];
} student[60],temp;
void main()
{
	int i,j,n;
	clrscr();
	printf("\nStudent Information System\n\n");
	printf("Enter number of students-");
	scanf("%d",&n);
	clrscr();
	for(i=0;i<n;i++)
	{
		printf("\nRecord for Student #%d of #%d \n\n",i+1,n);
		printf("Enter name of student-");
		scanf("%s",student[i].name);
		printf("Enter programe name-");
		scanf("%s",student[i].programe);
	       //	printf("Enter Admission Number-");
	       //	scanf("%c",&student[i].adno);
		printf("Enter batch number-");
		scanf("%d",&student[i].batch);
		printf("Enter marks\n");
		for(j=0;j<6;j++)
		{
		printf("Subject %d: ",j+1);
		scanf("%d",&student[i].m[j]);
		student[i].total=student[i].total+student[i].m[j];
		}
		clrscr();
 }
 //sorting
    for (i=0;i<n;i++)
    {
	    if (student[i].total < student[i + 1].total)
	    {
		temp = student[i];
		student[i] = student[i + 1];
		student[i + 1] = temp;
	    }
    }
printf("\nOverall Performance\n\nRank\t\tDetails\n");
for(i=0;i<n;i++)
{
printf("%d\tName:%s Programe:%s Batch:%d Total:%d\n",i+1,student[i].name,student[i].programe,student[i].batch,student[i].total);
}
printf("\n\nPress Enter to Exit.......");
getch();
}