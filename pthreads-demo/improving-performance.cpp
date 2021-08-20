//#include <stdlib.h>
//#include <stdio.h>
//#include <assert.h>
//#include <chrono>
//
//// Timing
//// Debug Mode - 12 seconds
//// Release Mode - 5 seconds
//
//
//#define N 1000 
//
//int A[N][N], B[N][N], C[N][N];
//
//int main(int argc, char* argv[]) {
//
//	srand(42);
//
//	// Initialization
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			A[i][j] = rand();
//			B[i][j] = rand();
//		}
//	}
//
//	auto start_time = std::chrono::high_resolution_clock::now();
//
//
//	// Matrix Multiply
//	for (int i = 0; i < N; i++)
//	{
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
//	auto end_time = std::chrono::high_resolution_clock::now();
//
//	std::chrono::duration<double> duration = end_time - start_time;
//
//	printf("%f seconds\n", duration.count());
//
//	printf("All done!\n");
//
//	return 0;
//}