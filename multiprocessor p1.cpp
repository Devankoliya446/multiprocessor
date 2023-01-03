#include<iostream>

using namespace std;

class A{
	
	public:
		
		void fun(){
			
			cout<<"Hi Shivam Sir"<<endl;
		}
};

class B : public A{
	
	public:
		
		void fun(){
			
			cout<<"Hello Dev";
		}
};

main(){
	
	B obj;
	
	obj.A::fun();
	obj.B::fun();
}
