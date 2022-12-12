#include <omp.h>
#include <iostream>

int main() 
{
    #pragma omp parallel
    {
        int x = omp_get_thread_num();
        std::cout << x << '\t';
    }
}