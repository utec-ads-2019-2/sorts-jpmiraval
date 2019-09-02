#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {       
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
            int next, sortedIndex;
            for(int i = 1; i < size; i++){
                next = elements[i];
                sortedIndex = i-1;
                while(sortedIndex >=0 && elements[sortedIndex]>next){
                    elements[sortedIndex+1] = elements[sortedIndex];
                    sortedIndex--;
                }
                elements[sortedIndex+1] = next;
            }
        }

        inline string name() { return "InsertSort"; }
};

#endif