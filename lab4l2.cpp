#pragma once
#include<iostream>
using namespace std;
class Vector{
    	private:
	    	double a1,a2,a3;
		public:
			vector()
			{vector(0,0,0);
			}
			vector(double b1, double b2, double b3)
			{
				this->a1 = b1;
				this->a2 = b2;
				this->a3 = b3;
			}
			void operator-();
			void display();


        Vector operator+(const Vector &);
        Vector operator-(const Vector &);
        Vector operator*(const Vector &);
        friend ostream& operator<<(ostream &out, const Vector &b);
        friend istream& operator>>(istream &in, Vector &b);
        void operator+=(const Vector &);
        int operator==(const Vector &);
        int operator>(const Vector &);
        
};



Vector Vector::operator+(const Vector &b){
    Vector c;
    c.a1 = this->a1 + b.a1;
    c.a2 = this->a2 + b.a2;
    c.a3 = this->a3 + b.a3;
    return c;
}

Vector Vector::operator-(const Vector &b){
    Vector c;
    c.a1 = this->a1 - b.a1;
    c.a2 = this->a2 - b.a2;
    c.a3 = this->a3 - b.a3;
    return c;
}

Vector Vector::operator*(const Vector &b){
    Vector c;
    c.a1 = this->a1 * b.a1;
    c.a2 = this->a2 * b.a2;
    c.a3 = this->a3 * b.a3;
    return c;
}

void Vector::operator+=(const Vector &b){
    this->a1 += b.a1;
    this->a2 += b.a2;
    this->a3 += b.a3;
}

int Vector::operator==(const Vector &b){
    if(this->a1 == b.a1 && this->a2 == b.a2 && this-> a3== b.a3){
        cout<<"given vector 1 and 2 are equal vector"<<endl;
    }else{
        cout<<"given vector 1 and 2 aren't equal vector"<<endl;
    }
    return 0;
}

int Vector::operator>(const Vector &b){
    if(this->a1 > b.a1 && this->a2 > b.a2 && this-> a3 > b.a3){
        cout<<"given vector 1 is greater then vector 2"<<endl;
    }else{
        cout<<"given vector 1 isn't greater then vector 2"<<endl;
    }
    return 0;
}

ostream &operator<<(ostream &out, const Vector &b){
    return out << "Vector    " << "[ " << b.a1 << " , " << b.a2 << " , " << b.a3 << " ]" <<endl;
}

istream &operator>>(istream &in,Vector &b){
    return in >> b.a1 >> b.a2 >> b.a3;

}


int main()
{
    Vector  v1,v2,v3;
    int c1=0,c2=0;
    
    cout<<"press 1 if vector 1 is column vector else 0 :";
    cin>>c1;
    cout<<"press 1 if vector 2 is column vector else 0 :";
    cin>>c2;
    cout << "Enter the elements of vector 1 : "; 
    cin>>v1;
    cout << "Enter the elements of vector 2 : "; 
    cin>>v2;
    
    if(c1==0 && c2==0 || c1==1 && c2==1)
	{
        v3 = v1 + v2;
        cout << v3 <<endl;
		}
    else
    {
    	cout<<"sorry !!  column vector and row vector cannot be added"<<endl;
	}
	
	 if(c1==0 && c2==0 || c1==1 && c2==1)
	 {
        v3 = v1 - v2;
    cout << v3 <<endl;
    }
    else
    {
    	cout<<"sorry !!  column vector and row vector cannot be substracted"<<endl;
	}
	
	if(c1==1 && c2==0 || c1==0 && c2==1)
	{
        v3 = v1 * v2;
    cout << v3 <<endl;
    }
    else
    {
       cout<<"sorry !!  column vector can multiplied to row vector only or viceversa "<<endl;	
	}
        v3 += v1;
    cout << v3 <<endl;

   
    if(c1==0 && c2==0 || c1==1 && c2==1)
	{
	cout << (v1 == v2) <<endl;
    cout << (v1 > v2) <<endl;
    }
    else
    {
    	cout<<"sorry!! the column vector and row vector cannot be compared"<<endl;
	}
    return 0;
    
}

