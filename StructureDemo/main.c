#include <stdio.h>
#include <stdlib.h>

struct Emp
{
    int empno;
    char empname[20];
    float empsal;
};
void main()
{
struct Emp e;
printf("%d",sizeof(e));
  employee1();
  employee2();
}
void employee1()
{
    struct Emp e={101,"Animesh Chakarborty",55000};

  printf("\t\t\tEmployee Details:Java Full stack Developer \n");
  printf("Employee no is : %d\n",e.empno);
  printf("Employee no is : %s\n",e.empname);
  printf("Employee no is : %f\n",e.empsal);
}
void employee2()
{
    struct Emp e={102,"Asutosh Chakarborty",55000};

  printf("\t\t\tEmployee Details :Android Developer \n");
  printf("Employee no is : %d\n",e.empno);
  printf("Employee no is : %s\n",e.empname);
  printf("Employee no is : %f\n",e.empsal);
}
