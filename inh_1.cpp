#include<iostream>

using namespace std;

class X{
	public: 
		int a,b,c;

};

class Y : public X {
	public:
	void setData(){
		
		cout<<"Enter value A : ";
		cin>>a;
		cout<<"Enter value B : ";
		cin>>b;
		cout<<"Enter value C : ";
		cin>>c;
		
	}
	void getData(){
		cout<<"Sum of Cube of Given numbers is : ";
		cout<<(a*a*a)+(b*b*b)+(c*c*c);
	}
	
};
main(){
	Y obj1;
	obj1.setData();
	obj1.getData();
	
	return 0;
}

