#include<stdio.h> 
struct std
{
int no;
char name[10];
int m1,m2,m3;
};
struct std s;
 
void main()
{
printf("Enter student details:\n");
printf("\nEnter the student no:"); 
scanf("%d",&s.no);
printf("\nEnter the student name:");
scanf("%s",&s.name); 
printf("\nEnter the student marks:");
scanf("%d%d%d",&s.m1,&s.m2,&s.m3); 
printf("Rollno\tName\tMarks\n");
printf("%d\t %s\t %d %d %d",s.no,s.name,s.m1,s.m2,s.m3);
}

