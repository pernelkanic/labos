#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
main( int argc, char *argv[])
{
int fd1,fd2,n;
char buf[50];
if(argc<3)
{
printf("\nthe number of arg is less");
exit(1);
}
else
{
fd1=open(argv[1],O_RDONLY,0);
fd2=open(argv[2],S_IRWXU);
while((n=read(fd1,buf,50))>0)
write((fd2,buf,n));
close(fd1);
close(fd2);
}
}