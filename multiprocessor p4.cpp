#include<iostream>

using namespace std;

class Math{
	
	public:
		
		void calculate(int a , int b){
			 
			cout<<a/b<<endl;
		}
		
		void calculate(int a , int b , int c){
		 
		    cout<<a-b-c<<endl;
		}
		
		void calculate(int a , int b , int c , int d){
			
			cout<<a*b*c*d<<endl;
		}
		
		void calculate(int a , int b , int c , int d , int e){
			
			cout<<a+b+c+d+e<<endl;
		}
};

main(){
	
	Math obj;
	
	int a,b,c,d,e;
	
	a = 20;
	b = 10;
	c = 5;
	d = 2;
	e = 1;
	
	obj.calculate(a,b);
	obj.calculate(a,b,c);
	obj.calculate(a,b,c,d);
	obj.calculate(a,b,c,d,e);
} 
