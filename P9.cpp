#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void*mythreadfun(void*vargp)
{
	sleep(1);
	printf(" printing geeksquiz from thread \n");
	return NULL;
}
int main()
{
	pthread_t thread_id;
	printf("before thread\n");
	pthread_create(&thread_id,NULL,mythreadfun,NULL);
	pthread_join(thread_id,NULL);
	printf("after thread\n");
	exit(0);
	
}


