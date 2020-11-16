#include<iostream>
using namespace std;

template <typename T>

void sorting(T &a)
{
	int i,j,temp;
	
    for(i=0;i<6;i++)
	{
        for(j=i+1;j<6;j++)
		{
           
           if(a[j]<a[i])
			{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[6],i;
    cout << "please enter the 6 numbers to sort ";
    
    for( i = 0; i < 6 ; i++ )
	{
        cin>>a[i];
    }
    cout <<endl;

    sorting(a);
    cout << "those elements after sorting are  ";
    for( i = 0; i < 6; i++ )
	{
        cout << a[i];
    }
    cout <<endl;
    return 0;
}
