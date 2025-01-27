#include <iostream>
#include <vector>

#ifdef HAVE_OMP
#include <omp.h>
#else
#include <thread>
#endif

int main() {
#ifdef HAVE_OMP
    std::cout << "OMP solution" << std::endl;
    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        int total_threads = omp_get_num_threads();
        std::cout << "Hello World from thread " << thread_id 
                  << " of " << total_threads << std::endl;
    }
#else
    std::cout << "C++17 solution" << std::endl;
    int num_threads = std::thread::hardware_concurrency();
    std::vector<std::thread> threads(num_threads);
    for (int i = 0; i < num_threads; i++) {
        threads[i] = std::thread([i, num_threads] {
            std::cout << "Hello World from thread " << i 
                      << " of " << num_threads << std::endl;
        });
    }
    for (auto& thread : threads) {
        thread.join();
    }
#endif

    return 0;
}