//#include <stdlib.h>
//#include <stdio.h>
//#include <assert.h>
//#include <chrono>
//
//#define HAVE_STRUCT_TIMESPEC
//#include "pthread.h"
//
//#define NUM_TESTS 5
//#define NUM_THREADS 4
//
//
//long long N = 1000;
//double** A, ** B, ** C;
//
//void* thread_func(void* arg) {
//	
//	int threadID = (int)arg; // Get this from arg
//	int itemsPerThread = (N + NUM_THREADS + 1) / NUM_THREADS;
//	int startIndex = itemsPerThread * threadID;
//	int endIndex = std::min(startIndex + itemsPerThread, (int)N);
//
//	printf("Running thread %d from index %d to %d\n", threadID, startIndex, endIndex);
//	
//	// Matrix Multiply
//	for (int i = startIndex; i < endIndex; i++) {
//		for (int j = 0; j < N; j++)
//		{
//			C[i][j] = 0;
//			for (int k = 0; k < N; k++)
//			{
//				C[i][j] = C[i][j] + A[i][k] * B[k][j];
//			}
//		}
//	}
//	
//	return NULL;
//}
//
//int main(int argc, char* argv[]) {
//
//	A = new double* [N];
//	B = new double* [N];
//	C = new double* [N];
//
//	srand(42);
//
//	// Initialization
//	for (int i = 0; i < N; i++)
//	{
//		// Initialize 'jagged' arrays. These arrays can have different sizes.
//		A[i] = new double[N];
//		B[i] = new double[N];
//		C[i] = new double[N];
//
//		for (int j = 0; j < N; j++)
//		{
//			A[i][j] = rand();
//			B[i][j] = rand();
//		}
//	}
//
//	// Start tests
//	double results[NUM_TESTS];
//	for (int t = 0; t < NUM_TESTS; t++) {
//	
//		// Start timing
//		auto start_time = std::chrono::high_resolution_clock::now();
//
//		// Parallel Matrix Multiply
//		pthread_t handles[NUM_THREADS];
//		for (int i = 0; i < NUM_THREADS; i++) {
//
//			pthread_create(handles + i, NULL, thread_func, (void *)i);
//	
//		}
//
//		// Matrix Multiply
//		//for (int i = 0; i < N; i++)
//		//{
//		//	for (int j = 0; j < N; j++)
//		//	{
//		//		C[i][j] = 0;
//		//		for (int k = 0; k < N; k++)
//		//		{
//		//			C[i][j] = C[i][j] + A[i][k] * B[k][j];
//		//		}
//		//	}
//		//} 
//		// end Matrix Multiply
//	
//		// Wait for threads to finish
//		for (int i = 0; i < NUM_THREADS; i++) { 
//			pthread_join( handles[i], NULL);
//		}
//
//		// Stop timer
//		auto end_time = std::chrono::high_resolution_clock::now();
//		std::chrono::duration<double> duration = end_time - start_time;
//		float total_time = duration.count();
//		results[t] = total_time;
//		// Results
//		printf("Test %d - %f seconds\n\n", t, total_time);
//
//	} // end tests
//
//	// Average
//	double sum = 0;
//	for (int t = 0; t < NUM_TESTS; t++)
//	{
//		sum = sum + results[t];
//	}
//
//	double average = sum / NUM_TESTS;
//
//	printf("All done!\n\n");
//	printf("Average time: %f\n", average);
//
//	return 0;
//}