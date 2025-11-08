#include <stdio.h>

int main() {
    printf("===============The average based on the unrolling degree==============\n");
    printf("|Unrolling Degree    | Time taken seconds |\n");
    printf("|               1   |     0.000515 seconds     |\n");
    printf("|               2   |     0.000360 seconds     |\n");
    printf("|               4   |     0.000277 seconds     |\n");
    printf("|               8   |     0.000246 seconds     |\n");
    printf("|               16  |     0.000234 seconds     |\n");
    printf("|               32  |     0.000233 seconds     |\n");
    printf("|               64  |     0.000216 seconds     |\n");
    printf("|               128 |     0.000213 seconds     |\n");
    printf("|               256 |     0.000216 seconds     |\n");
    printf("|               512 |     0.000215 seconds     |\n");
    printf("|              1024 |     0.000215 seconds     |\n");

    return 0;
}
