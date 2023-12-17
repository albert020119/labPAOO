#include <iostream>
#include <semaphore.h>

class CounterThread{
    private: 
        sem_t sema; 

    public:
        CounterThread(sem_t s){
            this->sema = s; 
            sem_init(&sema, 0, 3); 
        }

        void operator() (int thread_id, int nr){
            sem_wait(&this->sema);
            for (int i=0; i<nr; i++){
                std::cout << thread_id << "\n";
            }
            sem_post(&this->sema);

        }; 
}; 