#include <stdio.h>
#include <time.h>

int main() {
    long N, size;
    N = size = 100000;
    int times = 12;

    printf("N = %ld\n", N);
    printf("size = %ld\n", size);

    int unrollingD = 1;

    int arr[N];  // Declare array of size N
    double timesArr[times];  // Store all 12 measurements

    for (int meas = 0; meas < times; meas++) {
        clock_t start = clock();


	for(int j =0; j < size; j++){

		for(int i = 0; i < N; ++i){
			
			arr[i] = 1;
			arr[i] = arr[i] * 5;
		}
	}


        clock_t end = clock();
        double tTime = ((double)(end - start)) / CLOCKS_PER_SEC; // Time in seconds
        timesArr[meas] = tTime;  // Store measurement

        // Print measurement details
        printf("Unrolling degree = %d | Measurement #%d  | Time taken = %f seconds\n",
               unrollingD, meas + 1, tTime / size);
    }

    // Find min and max
    double min = timesArr[0], max = timesArr[0];
    for (int i = 1; i < times; i++) {
        if (timesArr[i] < min) min = timesArr[i];
        if (timesArr[i] > max) max = timesArr[i];
    }

    // Compute sum excluding min and max
    double sum = 0;
    int count = 0;
    for (int i = 0; i < times; i++) {
        if (timesArr[i] != min && timesArr[i] != max) {
            sum += timesArr[i];
            count++;
        }
    }

    double average = (count > 0) ? sum / count : 0;
    //printf("count = : %d\n", count);
    printf("Average time excluding min (%f) and max (%f) = %f seconds\n", min / size, max / size, average / size);

    return 0;
}
