#include<iostream>

using namespace std;

class Cricket{

    public:
    
    	static int t20match;
		static int onedaymatch;
		  	
};
int Cricket::t20match = 20;
int Cricket::onedaymatch = 50;

class T20Match : public Cricket{
	
	public:
		
		
		int getTotalOvers(){
			
 		    return t20match;
 		
		}
};

class OneDayMatch : public Cricket{
	
	public:
		
		
		int getTotalOvers(){
			
			return onedaymatch;		
			
	    }
};

main(){
	
	OneDayMatch obj1;
	T20Match obj2;
	
	cout<<"Total Overs in OneDayMatch : "<<obj1.getTotalOvers()<<endl;
	cout<<"Total Overs in T20Match : "<<obj2.getTotalOvers();
// 
// 	cout<<"Total Overs in T20Match is : "<<obj2.getTotalOvers()<<endl;
// 	cout<<"Total Overs in OneDayMatch is : "<<obj1.getTotalOvers()<<endl;
 
// 	obj1.getTotalOvers();
// 	obj2.getTotalOvers();
//	obj.class1::getTotalOvers();
//	obj.getTotalOvers();
}
