#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159

int main(){
    int num;
    double r,ac,l,w,ar,b,h,at;
    cout<<"Geometry Calculator\n\t1. Calculate the Area of a Circle\n\t2. Calculate the Area of a Rectangle"
        <<"\n\t3. Calculate the Area of a Triangle\n\t4. Quit\n\n";
    cin>>num;
    while(num>4 || num<1){
        cout<<"Invalid Selection. Re-enter: "<<endl;
        cin>>num;
    }
    switch(num){
        case 1:
            cout<<"Enter the radius of the circle: "<<endl;
            cin>>r;
            while(r<0){
                cout<<"Invalid radius. Re-enter: "<<endl;
                cin>>r;
            }
            ac=r*r*pi;
            cout<<fixed<<setprecision(3)<<"The area of the circle is "<<ac;
            break;
        case 2:
            cout<<"Enter the length and width of the rectangele: "<<endl;
            cin>>l>>w;
            while(l<0){
                cout<<"Invalid length. Re-enter: "<<endl;
                cin>>l;
            }
            while(w<0){
                cout<<"Invalid width. Re-enter: "<<endl;
                cin>>w;
            }
            ar=l*w;
            cout<<fixed<<setprecision(3)<<"The area of the rectangle is "<<ar;
            break;
        case 3:
            cout<<"Enter the length of the triangle's base and its height: "<<endl;
            cin>>b>>h;
            while(b<0){
                cout<<"Invalid base length. Re-enter: "<<endl;
                cin>>b;
            }
            while(h<0){
                cout<<"Invalid height. Re-enter: "<<endl;
                cin>>h;
            }
            at=0.5*b*h;
            cout<<fixed<<setprecision(3)<<"The area of the triangle is "<<at;
            break;
        case 4:
            exit(0);
            break;
    }
    return 0;
}
