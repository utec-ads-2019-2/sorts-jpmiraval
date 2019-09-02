#ifndef RADIX_H
#define RADIX_H

#include "sort.h"

class RadixSort : public Sort {       
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}

    int getMax(int lista[], int size)
    {
        int mx = lista[0];
        for (int i = 1; i < size; i++)
            if (lista[i] > mx)
                mx = lista[i];
        return mx;
    }

    void countingSort(int arr[], int n, int exp)
    {
        int output[n];
        int i, count[10] = {0};
        for (i = 0; i < n; i++)
            count[ (arr[i]/exp)%10 ]++;
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];

        // Build the output array
        for (i = n - 1; i >= 0; i--)
        {
            output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
            count[ (arr[i]/exp)%10 ]--;
        }

        // Copy the output array to arr[], so that arr[] now
        // contains sorted numbers according to current digit
        for (i = 0; i < n; i++)
            arr[i] = output[i];
    }

    void execute() {
            // TODO
            int x = getMax(elements, size);
            for (int exp = 1; x/exp > 0; exp *= 10)
                countingSort(elements, size, exp);
        }

        inline string name() { return "RadixSort"; }
};

#endif