#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"
#include <algorithm>

class BubbleSort : public Sort {       
    public:
        BubbleSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
            for(int i = 0; i<size; i++){
                for(int k = i; k <size;k++){
                    if(elements[i] > elements[k]){
                        intercambiar( elements[k] , elements[i]);
                    }
                }
            }
        }

        void intercambiar(int &num1, int &num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        inline string name() { return "BubbleSort"; }
};

#endif