#include "Counter.h"
#include "MusicP.h"
#include "ComplexNumber.h"
#include <thread>
#include <semaphore.h>
#include <vector>
#include <mutex>
#include <memory>
#include <unistd.h>

std::mutex music_mutex; 
sem_t mysem; 


void playMusic(int time){
    std::lock_guard<std::mutex> lock(music_mutex);
    for (int i=0; i<time; i++){
        std::cout << "Playing music for " << i << "seconds \n";
        sleep(1);
    }
    std::cout << "Finished playing music \n";  
    music_mutex.unlock(); 
}

int main(){

    CounterThread ct(mysem);
    
    std::thread myThread(ct, 1, 100);
    std::thread myThread2(ct, 2, 100);
    std::thread myThread3(ct, 3, 100);



    myThread.join();
    myThread2.join();  
    myThread3.join(); 
 
    std::thread mySong1(playMusic, 3);
    std::thread mySong2(playMusic, 3); 
    std::thread mySong3(playMusic, 3);

    mySong1.join();
    mySong2.join();
    mySong3.join(); 


    std::shared_ptr<ComplexNumber> sharedPointer1(new ComplexNumber(1, 2)); 
    std::cout << sharedPointer1->getMagnitude() << "\n"; 

    std::shared_ptr<ComplexNumber> sharedPointer2(sharedPointer1);
    std::cout << sharedPointer2->getMagnitude() << "\n";

    std::cout << sharedPointer1.use_count() << "\n";

    std::weak_ptr<ComplexNumber> weakPointer1(sharedPointer1); 
    if (auto p = weakPointer1.lock()){
        std::cout << p->getMagnitude() << "\n"; 
    }
    std::cout << sharedPointer1.use_count() << "\n";
    return 0; 
}