//#include <stdlib.h>
//#include <stdio.h>
//#include <windows.h>
//#include <omp.h>
////#include <assert.h>
////#include <chrono>
//
//#define HAVE_STRUCT_TIMESPEC
//#include "pthread.h"
//
//
//
//void* thread_func(void *);
//
//int main(int argc, char* argv[]) {
//
//	pthread_t tid;
//	pthread_create(&tid, NULL,thread_func, NULL);
//	pthread_join(tid, NULL);
//
//	printf("Hello - main\n");
//	return 0;
//}
//
//void* thread_func(void*) {
//	printf("Hello - Thread\n");
//	Sleep(1000);
//	return NULL;
//}