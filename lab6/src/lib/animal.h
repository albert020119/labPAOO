class Animal{
	private: 
		int age; 
		char name[20];
	public:
		Animal(int age, const char * name){
			this->age = age;
	 		strcpy(this->name, name); 
		}
;
		virtual void makeNoise(){
		
		};
		virtual bool isDog(){
			return false;
		}; 
}; 
