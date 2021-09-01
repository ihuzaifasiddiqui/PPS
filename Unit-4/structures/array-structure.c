#include<stdio.h> 
struct std
{
int no,marks; 
char name[10];
}s[5];
       //struct std s[10]; 
void main()
{
int i,n; 
printf("Enter the number of Records");
scanf("%d",&n);
 printf("Enter student details:\n"); 
for(i=0;i<n;i++)
{
 
printf("\nEnter the student no:");
scanf("%d",&s[i].no); 
printf("\nEnter the student name:"); 
scanf("%s",&s[i].name); 
printf("\nEnter the student marks:");
scanf("%d",&s[i].marks);
}
printf("Rollno\tName\tMarks\n");
for(i=0;i<n;i++)
printf("%d \t%s \t%d \n",s[i].no,s[i].name,s[i].marks); 

}

