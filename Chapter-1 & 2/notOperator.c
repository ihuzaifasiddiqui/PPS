#include<stdio.h>
  void main()
 {
    int a,b;
    printf("enter two no");
    scanf("%d %d",&a,&b);
    if(!(a>b))    /*Here if the condtion a>b is true,then total !(a>b) becomes false*/                   
    printf("%d is greater",b);   
    else
    printf("%d is greater",a);
   }
