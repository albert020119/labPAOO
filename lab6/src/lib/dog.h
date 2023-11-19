class Dog : public Animal{
	public:
		Dog(int age, const char * name) : Animal(age, name){
		}; 
		
		void makeNoise() override{
			std::cout << "woof \n"; 
		};
		
		bool isDog() override{
			return true; 
		};
};
