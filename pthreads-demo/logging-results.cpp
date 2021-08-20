//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//
//#define N 100
//
//int main(int argc, char* argv[]) {
//
//	int A[N][N];
//	int B[N][N];
//	int C[N][N];
//	int D[N][N];
//
//	// Read results from file
//	FILE* input;
//	errno_t OK = fopen_s(&input, "log.bin", "rb");
//	assert(OK == 0);
//	fread(D, sizeof(int), N, input);
//	fclose(input);
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
//	// Assert results
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			assert(C[i][j] == D[i][j]);
//		}
//	}
//
//	
//
//	// Create a file to output results
//	//FILE* output;
//	//errno_t OK = fopen_s(&output, "log.bin", "wb");
//	//assert(OK == 0);
//
//	//fwrite(C, sizeof(int), N, output);
//	//fclose(output);
//
//	printf("All done!\n");
//	
//	return 0;
//}