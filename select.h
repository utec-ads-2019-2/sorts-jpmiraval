#ifndef SELECT_H
#define SELECT_H

#include "sort.h"
#include <utility>

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}


        void execute() {
            // TODO
            int index = 0;
            for(int i = 0; i<size-1;i++){
                index = i;
                for(int k = i+1; k<size; k++){
                    if(elements[k] < elements[index]){
                        index = k;
                    }
                }
                swap(elements[index], elements[i]);
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif