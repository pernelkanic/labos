#include<stdio.h>
#include<stdlib.h>
void main()
{
int f[50],i,st,j,len,c,k;
for(i=0;i<50;i++)
f[i]=0;
X:
printf("\n Enter the starting block & length of file:");
scanf("%d %d",&st,&len);
for(j=st;j<(st+len);j++)
if(f[j]==0)
{
}
else
{
}
f[j]=1;
printf("\n%d->%d",j,f[j]);
printf("Block already allocated");
break;
56
if(j==(st+len))
printf("\n The file is allocated to disk");
printf("\n Do you want to enter more? Press 1 for yes and Press 2 for no:");
scanf("%d",&c);
if(c==1)
goto X;
else
}
exit(1);