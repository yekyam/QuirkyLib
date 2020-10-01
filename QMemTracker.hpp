#ifndef QMEMTRACKER_HPP
#define QMEMTRACKER_HPP

#include <iostream>
#include "QMacros.hpp"

#if 1

int numberOfAllocations;
int sizeOfAllocations;

void* operator new(size_t size) {
    numberOfAllocations++;
    sizeOfAllocations += size;
    return malloc(size);
}

void operator delete(void* memory, size_t size) {
    sizeOfAllocations -= size;
    free(memory);
}

void QMem_Stats() {
    std::cout<< numberOfAllocations << " allocations\n" 
             << sizeOfAllocations << " bytes still allocated\n";
}

#endif
#endif
