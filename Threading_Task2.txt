//Threading Problems
//Task2
//Shishir_19101222

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int a=1;
void*f1(void*ptr){
char *message;
message = (char *) ptr;
//int a = int (b);
for(int i=0;i<5;i++){
     printf("%s %d\n", message,a);
     a=a+1;
}
//int *d=&a;
//return d;
//printf("This is starting of:%s \n", message);
//sleep(3);
//printf("This is the ending of:%s \n", message);
}

int main(int argc, char* argv[])
{
    pthread_t thread1, thread2, thread3, thread4, thread5;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";
    char *message3 = "Thread 3";
    char *message4 = "Thread 4";
    char *message5 = "Thread 5";
    int iret1, iret2, iret3, iret4, iret5;

    iret1 = pthread_create( &thread1, NULL, f1, message1);
    pthread_join(thread1, (void*)&iret1);
    //printf("return: %d\n",*iret1);
    iret2 = pthread_create( &thread2, NULL, f1, message2);

    //pthread_join( thread1, NULL);
    pthread_join( thread2, NULL);
    
    iret3 = pthread_create( &thread3, NULL, f1, message3);
    pthread_join( thread3, NULL);
    iret4 = pthread_create( &thread4, NULL, f1, message4);
    pthread_join( thread4, NULL);
    iret5 = pthread_create( &thread5, NULL, f1, message5);
    pthread_join( thread5, NULL);
    
    //printf("Thread1 returns: %d\n",iret1);
    //printf("Thread2 returns: %d\n",iret2);
    return 0;
}
