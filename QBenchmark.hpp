#ifndef QBENCHMARK_HPP
#define QBENCHMARK_HPP

#include <chrono>
#include <iostream>

class QBenchmark {
    std::chrono::_V2::system_clock::time_point startTime;
    std::chrono::_V2::system_clock::time_point endTime;
    
    public:
    std::chrono::duration<double> elapsedTime;
    
    QBenchmark() {
        startTime = std::chrono::system_clock::now();
    }
    
    template <typename FType, typename... AType>
    QBenchmark(int loopAmt, FType func, AType... args) {

        for (int i = 0; i < loopAmt; i++) {
            startTime = std::chrono::system_clock::now();

            func(args...);
            
            endTime = std::chrono::system_clock::now();
            elapsedTime += endTime - startTime;
        }
        elapsedTime /= loopAmt;
        
        std::cout<< elapsedTime.count() << " average seconds\n";
    }

    void QBen_end() {
        endTime = std::chrono::system_clock::now();
        elapsedTime = endTime-startTime;
    }

    void QBen_print_E_Time() {
        std::cout<< elapsedTime.count() << " seconds\n";
    }
};
#endif