#include <mutex>
#include <iostream>
#include <unistd.h>
// namespace std; 

class MusicPlayer{
    private:
        std::mutex mut; 

    public:
        MusicPlayer(){

        }
        void operator() (){
            std::unique_lock<std::mutex> playerLock(mut);
            std::cout << "Playing song" << "\n"; 
            sleep(5); 
            std::cout << "Finished playing song" << "\n";
            playerLock.release(); 

        };
}; 