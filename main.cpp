#include <iostream> 
using namespace std; 
  
class iAbs 
{ 
    private: 
        int a, b; 
  
    public: 
      
        // method to set values of  
        // private members 
        void set(int x, int y) 
        { 
            a = x; 
            b = y; 
        } 
          
        void display() 
        { 
            cout<<"a = " <<a << endl; 
            cout<<"b = " << b << endl; 
        } 
}; 
  
int main()  
{ 
    iAbs obj; 
    obj.set(10, 20); 
    obj.display(); 
    return 0; 
} 
