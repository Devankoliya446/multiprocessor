#include<iostream>

using namespace std;

class data{
	
	public:
		
		int value = 10;
		
		void operator ++(){
			
			++ value;
			cout<<value<<endl;
		}
		
		void operator --(){
			
			-- value;
			cout<<value;
		}
};

main(){
	
	data obj;
	
	++ obj;
	-- obj;
}
