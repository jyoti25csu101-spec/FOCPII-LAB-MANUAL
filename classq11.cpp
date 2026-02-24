#include<iostream>
using namespace std ;
class Rectangle{
    public:
    float length,width;
    float area,perimeter;
    void inputDimension(){
        cin>>length>>width;
    }
    float calculateArea(){
return length*width;
    }
    float calculatePerimeter(){
        return 2*(length+width);
    }
    void displayresult(){
        cout<<"rectangle"<<endl;
        cout<<"length"<<length<<endl;
        cout<<"width"<<width<<endl;
        cout<<"area: "<<calculateArea()<<endl;
        cout<<"perimeter: "<<calculatePerimeter()<<endl;
        
    }
};
    int main(){
        Rectangle r;
        cout<<"enter length of rectangle"<<endl;
        cout<<"enter width of rectangle"<<endl;
        r.inputDimension();
        r.displayresult();

    return 0;
    }
    

