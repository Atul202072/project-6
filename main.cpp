//call by value method
#include <iostream>
using namespace std;

    void swap(int a, int b)
{
    int temp = a;        
    a = b;               
    b = temp;  
}
    int main()
{
    int c,d;
    cout<<"Enter the value of c: ";
    cin>>c;
    cout<<"Enter the value of d: ";
    cin>>d;
    swap(c, d); 
    cout<<"The value of c is: "<<c<<" ,and;"<<endl<<"the value of d is: "<<d<<endl; 
    return 0;
}