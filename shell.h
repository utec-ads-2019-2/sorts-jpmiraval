#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
            int gap, temp, index;
                for(gap = size/2; gap>0; gap/=2){
                    for(int i = gap; i<size; i++){
                            temp  = elements[i];
                            for(index = i;index >=gap && elements[index-gap]>temp ; index -= gap){
                                elements[index] = elements[index-gap];
                            }
                        elements[index] = temp;
                    }
                }
        }

        inline string name() { return "ShellSort"; }
};

#endif