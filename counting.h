#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>

class CountingSort : public Sort {
public:
    CountingSort(int *elements, size_t size) : Sort(elements, size) {}

    void execute() {
        // TODO
        int max=0;
        for(size_t i=0; i<size;i++){
            if(elements[i]>max)
                max=elements[i];}

        int Counter[max];

        int *Lista=new int[size];
        for (size_t j = 0; j<max; ++j){
            Counter[j]=0;}


        for(size_t k=0;k<size;k++){
            Counter[elements[k]-1]++;}

        for(size_t l=1;l<=max;l++){
            Counter[l]+=Counter[l-1];}

        for(size_t n=0;n<size;n++){
            int numero=elements[n];
            Lista[Counter[numero-1]-1]= numero;
            Counter[numero-1]--;
        }

        for (size_t m = 0; m < size; ++m) {
            elements[m]=Lista[m];
        }
        delete[](Lista);
    }
    inline string name() { return "CountingSort"; }
};

#endif