#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#define buffer_size 5
#define Num_item 10
int buffer(BUFFER_SIZE);
int in = 0;
int out= 0;
sem_t empty;
sem_t full;
pthread_mutex_t mutex;
void*producer(void*arg) {
for (int i=0; i<Num_item;i++) {
int item = rand() %100;
sem_wait(&empty);
pthread_mutex_lock(&mutex);
buffer[in]= item;
printf("Proceed: %\n", item);
in = (int 1)% BUFFER_SIZE
pthread_mutex_unlock(&mutex);
sem_post(&full);
}
pthread_exit(NULL)
}
void*consumer(void*arg) {
for (int i=0; i<Num_item ;i++)
int item = rand() %100
sem_wait(&full)
pthread_mutex_unlock(&mutex);
Buffer[out]= item;
printf("Proceed: %\n", item);
sem_post(&empty)
}
pthread_exit(NULL)
}
int main() {
pthread_tproducer_thread, consumer_thread;
sem_init(&empty,0,Buffer_size);
sem_init(&full,0);
pthread_mutex(NULL)
pthread_create(&produce_thread, NULL, producer, NULL);
pthread_create(&consumer_thread, NULL, consumer, NULL);
sem_destroy(&empty);
sem_destroy(&full);
pthread_mutex_destroy(&mutex);}
return 0;
}
