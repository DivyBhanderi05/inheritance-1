#include<iostream>

using namespace std;

class P{
	public:
		float a;
		void Celcius(){
		cout<<"Enter degree Celcius : ";
		cin>>a;
	}
};
class Q : public P{
	public:
		void toFarenheit(){
			float f;
			f = a*9/5 +32;
			cout<<"Farenheit : "<<f<<endl;
		}
	
};
class R : public Q{
	public:
		void toKelvin(){
			a = a + 273;
			cout<<"Kelvin : "<<a;
		}
	
};

int main(){
	R temp;
	temp.Celcius();
	temp.toFarenheit();
	temp.toKelvin();
	

return 0;
}


