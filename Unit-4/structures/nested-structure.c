 #include<stdio.h>
struct date
{
int day;
char month[20];
int year;
};

struct employee
{
int code;
char name[30];
float salary; 
struct date doj;
};
struct employee emp1; 
void main()
{
printf("Enter Employee code:"); 
scanf("%d",&emp1.code); 
printf("Enter Employee name:"); 
scanf("%s",emp1.name);
printf("Enter Employee salary:");
scanf("%f",&emp1.salary);
printf("Enter Employee date of joining:"); 
scanf("%d%s%d",&emp1.doj.day,&emp1.doj.month,&emp1.doj.year); 
printf("Display the Employee Details\n");
printf("Code\tName\tSalary\tDOJ\n");
printf("%d\t %s\t %.2f\t %d %s %d",emp1.code,emp1.name,emp1.salary,emp1.doj.day,emp1.doj.month,emp1.doj.year); 
}


