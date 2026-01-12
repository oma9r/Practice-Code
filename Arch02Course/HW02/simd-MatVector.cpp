#include <immintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define SIZE 128 
//#define SIZE 256 
#define SIZE 512 

float A[SIZE][SIZE] __attribute__((aligned(16)));
float B[SIZE] __attribute__((aligned(16)));
float C[SIZE] __attribute__((aligned(16)));

double seconds() {
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC, &t);
    return t.tv_sec + t.tv_nsec * 1e-9;
}

void init() {
    for (int i = 0; i < SIZE; i++) {
        B[i] = rand() % 2;
        C[i] = 0;
        for (int j = 0; j < SIZE; j++)
            A[i][j] = rand() % 2;
    }
}

float matvec_simple(int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i] += A[i][j] * B[j];
    return C[0];
}

float matvec_sse(int n) {
    for (int i = 0; i < n; i++) {
        __m128 acc = _mm_setzero_ps();
        for (int j = 0; j < n; j += 4) {
            __m128 x = _mm_load_ps(&A[i][j]);
            __m128 y = _mm_load_ps(&B[j]);
            acc = _mm_add_ps(acc, _mm_mul_ps(x, y));
        }
        float t[4] __attribute__((aligned(16)));
        _mm_store_ps(t, acc);
        C[i] = t[0] + t[1] + t[2] + t[3];
    }
    return C[0];
}

int main() {

	printf("Input Size = %d\n",SIZE);
    float r;
    double before, after;

    init();

    before = seconds();
    r = matvec_simple(SIZE);
    after = seconds();
    printf("Result:%f Time:%f\n", r, after - before);

    init();

    before = seconds();
    r = matvec_sse(SIZE);
    after = seconds();
    printf("Result:%f Time:%f\n", r, after - before);

    return 0;
}
