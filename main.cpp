#include <iostream>
#include <omp.h>
#include <unistd.h>
using namespace std;

int main() {
//mozliwosc ustawiania liczby watkow
//1 zmienna srodowiska: OMP_NUM_THREADS
//2 funkcja biblioteczna: omp_set_num_threads(int)
//3 klauzura: numthreads(int)
 
#pragma omp parallel num_threads(4)
{
    int ID = omp_get_thread_num();
    cout << "Serdecznie Witamy!!!" << ID << endl;
    }
    
   int usleep (1000000);
    }