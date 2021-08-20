//#include <stdlib.h>
//#include <stdio.h>
//#include <assert.h>
//#include <chrono>
//
//#define HAVE_STRUCT_TIMESPEC
//#include <pthread.h>
//
//// Timing
//// Debug Mode - 30 seconds
//// Release Mode - 28 seconds
//
//#define NUM_THREADS 8
//
//long long N = 1000;
//double** A, ** B, ** C;
//
//void* thread_func(void* arg) {
//
//	int threadID = (int)arg; // Get this from arg
//	printf("Thread %d - running\n", threadID);
//	return NULL;
//}
//
//int main(int argc, char* argv[]) {
//
//	// Start timing
//	auto start_time = std::chrono::high_resolution_clock::now();
//
//
//	pthread_t handles[NUM_THREADS];
//	for (int i = 0; i < NUM_THREADS; i++) {
//
//		pthread_create(handles + i, NULL, thread_func, (void*)i);
//
//	}
//
//	auto end_time = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double> duration = end_time - start_time;
//
//	// Wait for threads to finish
//	for (int i = 0; i < NUM_THREADS; i++) {
//		pthread_join(handles[i], NULL);
//	}
//
//	/* Results */
//	printf("%f seconds\n", duration.count());
//	printf("All done!\n");
//
//	return 0;
//}