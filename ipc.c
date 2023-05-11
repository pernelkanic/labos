sender
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SharedMemSize 50
void main()
{
char c;
int shmid;
key_t key;
char *shared_memory;
key = 5677;
//Create segment with the key specified
if ((shmid = shmget(key, SharedMemSize, IPC_CREAT |0666)) < 0)
{
39
//perror explains error code
perror("shmget"); exit(1);
}
//Attach the segment
if((shared_memory= shmat(shmid, NULL, 0)) == (char *) -1)
{
perror("shmat");
exit(1);
}
sprintf(shared_memory," Welcome to Shared Memory");
sleep(2);
exit(0);
}
reciever:
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#define SharedMemSize 50
void main()
{
int shmid;
key_t key;
char *shared_memory;
key = 5677;
if ((shmid = shmget(key, SharedMemSize, 0666)) < 0)
{
perror("shmget");
exit(1);
}
//Attach the segment to our data space
if((shared_memory = shmat(shmid, NULL, 0))==(char *) -1)
{
perror("shmat");
exit(1);
}
//Read the message sender sent to the shared memory
printf("Message Received: %s \n",shared_memory);
exit(0);
}