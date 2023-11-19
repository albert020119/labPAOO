class Car{
private:
	int cp; 
	int year; 
	char model[20]; 
public:
	Car(int year, int cp, const char * model){
		this->year = year; 
		this->cp=cp; 
		strcpy(this->model , model); 
	}
	
	
	void setHP(int hp){
		this->cp = hp;
	} 
	
	int getHP(){
		return this->cp; 	
	}
	
	char * getModel(){
		return this->model; 
	}
	
	void operator=(const Car& car){
		this->year = car.year; 
		this->cp = car.cp; 
		strcpy(this->model , car.model); 
	} ;

	Car& operator=(Car&& other_animal){
		this->year = other_animal.year; 
		this->cp = other_animal.cp; 
		strcpy(this->model , other_animal.model);
		return *this; 
	}
};

