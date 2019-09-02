#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort : public Sort {       
    public:
        MergeSort(int *elements, size_t size) : Sort(elements, size) {}

    void mergue(int from,int to){
        for(int i=from;i<=to;i++)
            swap(*min_element(elements+i,elements+to+1),elements[i]);

    }
    void merguesort(int min_limit,int max_limit){
        int mid;
        if(min_limit<max_limit) {
            mid = (min_limit + max_limit) / 2;
            merguesort(min_limit, mid);
            merguesort(mid + 1, max_limit);

            mergue(min_limit, max_limit);
        }

    }

        void execute() {
            // TODO
            merguesort(0, size);
        }

        inline string name() { return "MergeSort"; }
};

#endif