#include <stdio.h>
#include <conio.h>
void main()
{
int i,j,a[3][3],m=1;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
a[i][j]=m;
m=m+1;
}
printf("element -[%d][%d]:%d\n",i,j,a[i][j]);
}
getch();
}
