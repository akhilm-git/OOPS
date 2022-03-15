#include<iostream>
using namespace std;

class Hero{
	int health;
	
	public:
		char level;
		static int timeToComplete;//belongs to class only
	
	Hero(){
		cout<<"Default Constructor called "<<endl;	
	}
	Hero(int health){
		this->health=health;
	}
	
	Hero(int health, char level){
		this->level=level;
		this->health=health;
	}
	//copy constructor
	Hero(Hero& temp){  //pass by reference
	cout<<"Copy constructor called"<<endl;
		this->health=temp.health;
		this->level=temp.level;
	}
	
	void print(){
		
		cout<<"Health "<<this->health<<endl;
		cout<<"Level "<<this->level<<endl;
	}
	
	int getHealth(){
		return health;
	}
	char getLevel(){
		return level;
	}
	void setHealth(int h){
		health=h;
	}
	void setLevel(char ch){
		level=ch;
	}
	static int random(){ //can only access static DM
		return timeToComplete;
	}
	~Hero(){
		cout<<"destructor called"<<endl;
	}
};
int Hero::timeToComplete=5;

int main(){
	
	cout<<Hero::timeToComplete<<endl;
	cout<<Hero::random()<<endl;
//	Hero a;//static
//	
//	Hero *b= new Hero();//dynamic
//	delete b;//we have to call dest when dynamically created class
//	Hero A(70,'A');
//	A.print();
//	Hero B(A);
//	A.print();
//	A=B; //copy assignment operator
//	B.print();
	
//	Hero S(70,'C');
//	S.print();
//	//copy constructor
//	Hero R(S);
//	R.print(); 
	
//	Hero ramesh(10);
//	ramesh.print();
//	//dynamically
//	Hero *h=new Hero(11);
//	h->print();
//	Hero temp(22,'B');
//	temp.print();
//	
	
//	//statically
//	Hero a;
//	a.setHealth(80);
//	a.setLevel('B');
//	cout<<"Level is "<<a.level<<endl;
//	cout<<"Health is "<<a.getHealth()<<endl;
//	
//	//dynamically
//	Hero *b=new Hero;
//	b->setLevel('A');
//	b->setHealth(70);
//	cout<<"Level is "<<(*b).level<<endl;
//	cout<<"Health is "<<(*b).getHealth()<<endl;
//	//or
//	cout<<"Level is "<<b->level<<endl;
//	cout<<"Health is "<<b->getHealth()<<endl;
	
	
	
	
	
//	creation of object
//	Hero ramesh;
//	cout<<"ramesh health is "<<ramesh.getHealth()<<endl;    //health is private
//	ramesh.setHealth(90);
//	//ramesh.health=70;
//	ramesh.level='A';
//	
//	cout<<"Health is: "<<ramesh.getHealth()<<endl;
//	cout<<"Level is: "<<ramesh.level<<endl;
//	
	
	//cout<<"size : "<<sizeof(h1)<<endl;
	return 0;
}
