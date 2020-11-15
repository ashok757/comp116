#pragma once
#include<iostream>
using namespace std;
class vector{
	private:
		double a1,a2,a3;
		public:
			
			vector(double b1, double b2, double b3)
			{
				this->a1 = b1;
				this->a2 = b2;
				this->a3 = b3;
			}
			void operator-();
			void display();
};

void vector:: operator-(){
	a1=-a1;                             
	a2=-a2;
	a3=-a3;
}

void vector:: display()
{
	cout<<"vector["<<a1<<","<<a2<<","<<a3<<"]"<<endl;
}

int main()
{
	vector v1(5,4,3);
	v1.display();
	-v1;
	v1.display();
	return 0;
}
