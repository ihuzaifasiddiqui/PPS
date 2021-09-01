#include<stdio.h> 
struct student
{
char name[10]; 
int rno;
int marks;
}std1;
//struct student std1;
void main()
{
struct student *pt; 

printf("\nEnter the student details"); 
printf("\nEnter the student name");
scanf("%s",std1.name);
printf("\nEnter the rno:");
scanf("%d",&std1.rno);
printf("\nEnter the marks:"); 
scanf("%d",&std1.marks);
pt=&std1;//pointer is a varible that points to address of varaible
printf("\n Display of structure using structure variable"); 
printf("\n Name\t RollNo\tMarks"); 
printf("\n%s\t%d\t%d",std1.name,std1.rno,std1.marks); 
printf("\nDisplay of structure using pointer variable"); 
printf("\n Name\t RollNo\tMarks"); 
printf("\n%s\t%d\t%d",pt->name,pt->rno,pt->marks); 
}

