#include<iostream>
using namespace std;
class Unary
{
    private: int a,b,c;
    public: Unary(int x, int y, int z){
        a=x;b=y;c=z;
}
 void display(){
        cout<<a<< " "<<b<< " "<<c;
    }
    void operator++()
    {
        a++;b++;c++;
    }
};
int main(){
    Unary obj(10,20,30);
    cout<<"before increment: ";
    obj.display();
    cout<<endl;
    ++obj;
    cout<<"After operator overloading: ";
    obj.display();
    return 0;
}
   
    
