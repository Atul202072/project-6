//call by refrence method
#include <iostream>
using namespace std;
void swapPointer(int* a, int* b)
{   int temp=*a;
    *a=*b;
    *b=temp;
}
 int main()
 {  int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Before swapping: "<<endl;
    cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b<<endl;
    swapPointer(&a,&b);
    cout<<"After swapping: "<<endl;
    cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b<<endl;
    return 0;
 }
