#include<iostream>
using namespace std;
class Demo{
	public:
		Demo(){
			cout<<"constructor called"<<endl;
			
		}
~Demo(){
	cout<<"Destructor called(object destroyed)"<<endl;
}
};
int main(){
	Demo*obj=new Demo(); //dynamically create object
	delete obj; //manually delete to stimulate garbage collection
	return 0;
}
