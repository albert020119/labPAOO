using namespace std; 

class Cat{
	private: int age; 
		 char * color;
	public:
		Cat(int age, char * color);
		
		Cat(const Cat &obj);
		
		Cat(Cat&& alta); 

		~Cat();
		
		char * getColor();
};
