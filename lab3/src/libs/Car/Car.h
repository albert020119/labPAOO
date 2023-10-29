using namespace std;

class Car{
	private:
		int year;
		char * model;
		int horse_power;
	public: 
		Car(int year, char * model); 
		
		setHP(int hp); 
		
		Car(const Car &obj); 
		
		Car(Car&& other_car); 
		
		~Car(); 
		
}
