class Cat : public Animal{
	public:
		Cat(int age, const char * name) : Animal(age, name){
		}; 
		
		void makeNoise() override{
			std::cout << "meow \n"; 
		};
		
		bool isDog() override{
			return false; 
		};
};
