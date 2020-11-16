#include<iostream>
#include<math.h>
using namespace std;

class point {
	
   public:
     double x,y;
     void setpoint (double ,double);
     double getx()
	 {return x;}
	 double gety()
	 {return y;}
     double distance (point &);
};


class polygon : public point
{
    public:
    	point a[4],z;
	    int  ver_no;
        void setver(int);
		void setcor();
        void centx();
        void move(double x1 , double y1);
         	void displaycor();
		
};


class rectangle : public polygon
{   public:
	void Rect();
	 
};


class triangle : public polygon
{	public:
   	void Tri();
  

	

};

void triangle::Tri()
{

	double x ,y ,z;
	x = a[0].distance(a[1]);
	y = a[1].distance(a[2]);
	z = a[2].distance(a[0]);
	
	if((x+y)>z && (y+z)>x && (z+x)>y)
	{
        cout<<"yes triangle is possible";
        
	cout << "coordinates of the triangle are:"  << endl;
	displaycor();

	cout << "the centroid is:"<<endl;
	centx();

	cout << "moving the triangle by(2,1)  :"<<endl;
	move(2,1);
	displaycor();
	
	cout << "so the new centroid is:"<<endl;
	centx();
        
	}
	else
	{
		cout<<"no triangle is not possible. please enter the coordinates again";
		setcor();
	}

}
void rectangle::Rect()
{
	
	double w,x,y,z;
	
	w = a[0].distance(a[1]);
	x = a[1].distance(a[2]);
	y = a[2].distance(a[3]);
	z = a[3].distance(a[0]);
	if(w==x==y==z || (w==y && x==z))
	{
		cout<<"yes rectangle is possible";
		cout << "coordinates of the rectangle are:"  << endl;
	    displaycor();

    	cout << "the centroid of rectangle is:"<<endl;
    	centx();

	    cout << "moving the rectangle by (2,1)  :"<<endl;
	    move(2,1);
	    displaycor();
	
	    cout << "so the new centroid is:"<<endl;
	    centx();

		
	}
	else
	{
		cout<<"no rectangle is not possible. please enter the coordinates again";
		setcor();
	}
	
}

 void  polygon::setver(int a)
	{
		this->ver_no = a;
	}

		
	void polygon::setcor()
	{
		for(int i =0 ;i<ver_no ; i++)
		{
			cout<< "Enter the x-coordinate of " << i+1 << " point" <<endl;
			cin >> a[i].x;
			cout<< "Enter the y- coordinate of " << i+1 << "point" <<endl;
			cin>> a[i].y;
		}
	}
	
	void polygon::centx()
	{
        double x{0},y{0};

        for(int i =0 ;i<ver_no ; i++)
            {
                x += a[i].x;
                y += a[i].y;
            }

            x=x/ver_no;
            y=y/ver_no;
            
            z.setpoint(x,y);			
            cout <<"(" << z.getx()<<","<<z.gety() <<")"<<endl;
	}
		
	void polygon::move(double x , double y)
		{
			for(int i =0 ;i<ver_no ; i++)
			{
				this ->a[i].x += x;
				this->a[i].y += y;
			}
		}
		
	void polygon::displaycor()
		{
				for(int i =0 ;i<ver_no ; i++)
			{
				cout << "(" << a[i].x <<"," << a[i].y <<")" << endl;

			}
		}
		
		void point::setpoint(double x , double y)
{
    this->x=x;
    this->y=y;
}

double point:: distance(point& a)
{
	point d;
    d.x =pow((a.x -x),2);
    d.y = pow((a.y -y),2);
    return (sqrt(d.x+d.y));
}

int main()
{
	
	triangle a;
	rectangle b;
	
	a.setver(3);

	cout << " coodinates for the triangle"  << endl;
	a.setcor();

	a.Tri();
	cout<<endl;
	cout<<endl;
		
	b.setver(4);

	cout << "coodinates  rectangle"  << endl;
	b.setcor();
    
	b.Rect();

}

