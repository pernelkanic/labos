#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
int buf[5], f=0, r=0;
sem_t mutex,full,empty;
void *produce(void *arg)
{
int i; for(i=0;i<10;i++)
{
sem_wait(&empty);
sem_wait(&mutex);
printf("Entering Producer CS \n");
printf("Produced item is %d\n",i);
buf[(++r)%5]=i;
sem_post(&mutex);
sem_post(&full);
printf("Exiting Producer CS\n");
printf(" \n");
}
}
46
void *consume(void *arg)
{
int item,i;
for(i=0;i<10;i++)
{
printf(" \n");
sem_wait(&full);
sem_wait(&mutex);
printf("Entering Consumer CS \n");
item=buf[(++f)%5];
printf("Consumed item is %d\n",item);
sem_post(&mutex);
sem_post(&empty);
printf("Exiting Consumer Critical Section\n");
}
}
