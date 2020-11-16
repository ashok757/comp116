#include<math.h>
#include<iostream>
using namespace std;

class iqueue {
public:
	char ch;
    virtual int insert(int)=0;
    virtual void remove()=0;
    virtual void front()=0;
    virtual void rear()=0;
};


class arrayqueue : public iqueue {
	
    private:
       int index=0;
       int queue[9];
       
    public:
       int insert(int x);
       void remove();
       void front();
       void rear();
       
}; 

 

    
  void arrayqueue::remove()
	{
        int delect;
        if (index == 0)
		 {
            throw "sorry !! the queue is empty. there is no any element to remove.";
         }
		else
		 {
            delect= queue[0];
            cout << "removing !!  so finally  " <<delect<< " has been removed sucessfully from the queue" <<endl;
            
            for (int i = 0; i < index; i++)
			 {
                queue[i] = queue[i + 1];
             }
             
            index--;
        }
        
    };
    
 void arrayqueue::front()
	{
        if (index == 0)
        {
		 throw "sorry !! the queue is empty. there is no any element in queue.";
        }
        else
        {
         cout<<queue[0]<<endl;
		}
            
    }

  void arrayqueue::rear(){
       
        if (index== 0)
        {
		    throw "sorry !! the queue is empty. there is no any element in the queue.";
        }
        else
        {
        	cout<<queue[index-1]<<endl;
		}
        
    };
    
    
    
  int arrayqueue::insert(int x)
	{
    	
        if (index>=5)
		{
            throw "sorry !! the queue is full. there is no enough space";
        }
		else 
		{
            queue[index] = x;
            index++;
        }
        return x;
    };


int main(){
    int c,x;  
        
        arrayqueue a;
        do {
            cout<<endl;
            cout<<"please select one " <<endl;
            cout<<"1. insert element in the queue" <<endl;
            cout<<"2. delect or remove element from the queue" <<endl;
            cout<<"3. display front element of the queue" <<endl;
            cout<<"4. display rare element of the queue" <<endl;
            cout<<"pres 0 to end program" <<endl;
            cout<<endl;

            cin >>c;
            cout<<endl;
            try {
                switch (c) {
                    case 1:
                        cout << "please enter the element to insert or add to the queue ";
                        cin >> x;
                        a.insert(x);
                        break;
                    case 2:
                         a.remove();
                        break;
                    case 3:
                         a.front();
                        break;
                    case 4:
                         a.rear();
                        break;
                    default:
                         cout<<"invalid choice!!!   please enter correct choice"<<endl;
                        break;
                }
            } catch (const char *error) {
                cout << error << std::endl;
            }        
        }while(c!=0);
}
