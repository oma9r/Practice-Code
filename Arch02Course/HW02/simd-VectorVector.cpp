#include <immintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATA float
//#define SIZE 128
//#define SIZE 256
#define SIZE 512

DATA __attribute__((aligned(16))) A[SIZE];
DATA __attribute__((aligned(16))) B[SIZE];

double seconds() {
    struct timespec t;
    clock_gettime(CLOCK_MONOTONIC, &t);
    return t.tv_sec + t.tv_nsec * 1e-9;
}

void init(DATA *x, int n) {
    for (int i = 0; i < n; i++)
        x[i] = rand() % 2;
}

int vec(DATA *a, DATA *b, int n) {
    DATA sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i] * b[i];
    return sum;
}

int vec_sse(DATA *a, DATA *b, int n) {
    __m128 acc = _mm_setzero_ps();
    for (int i = 0; i < n; i += 4) {
        __m128 x = _mm_load_ps(&a[i]);
        __m128 y = _mm_load_ps(&b[i]);
        acc = _mm_add_ps(acc, _mm_mul_ps(x, y));
    }
    float t[4] __attribute__((aligned(16)));
    _mm_store_ps(t, acc);
    return t[0] + t[1] + t[2] + t[3];
}

int main() {

	printf("The input size = %d\n",SIZE);
    DATA r;
    double before, after;

    init(A, SIZE);
    init(B, SIZE);

    before = seconds();
    r = vec(A, B, SIZE);
    after = seconds();
    printf("Result:%f Time:%f\n", r, after - before);

    before = seconds();
    r = vec_sse(A, B, SIZE);
    after = seconds();
    printf("Result:%f Time:%f\n", r, after - before);

    return 0;
}
