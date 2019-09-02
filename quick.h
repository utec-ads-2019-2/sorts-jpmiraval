#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {       
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) {}

    void sort(int low,int high) {
            int counter;
        if (low >= high) return;
        int aux = elements[high];
        counter = low;
        for (int i = low; i < high; i++)
            if (elements[i] < aux) {
                swap(elements[i], elements[counter]);
                counter++;
            }


        swap(elements[counter], elements[high]);
        sort(low, counter - 1);
        sort(counter + 1, high);
    }

        void execute() {
            // TODO
            sort(0, size);
        }


        inline string name() { return "QuickSort"; }
};

#endif