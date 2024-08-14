#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"i am going to make a calculator which will calculate \n addition ; substraction ; multiplication ; division ; trigonometry ; quadratic and logarithmic"<<endl;
    cout<<"Enter number a"<<endl;
    float a;
    cin>>a;
    cout<<"Enter number b"<<endl;
    float b;
    cin>>b;
    cout<<"enter number c"<<endl;
    float c;
    cin>>c;
    cout<<"what is your operation +,w,-,/,*,l,t"<<endl;
    cout<<"+=addition of two number a+b"<<endl<<"w=addition of three number a+b+c"<<endl<<"-=substraction a-b"<<endl<<"/=divison a/b"<<endl<<"*=multiplication a*b"<<endl<<"l=logrithmic log a with base b"<<endl<<"t=trigonometry with a is in radian"<<endl<<"u=roots of a quadratic equation ax^2+ bx + c"<<endl;
    char operation;
    cin>>operation;
    float d = b*b-4*a*c;
    switch(operation){
        case '+':
              cout<<a+b;
              break;
        case 'w':
              cout<<a+b+c;
              break;      
        case '-':
            cout<<a-b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '*':
            cout<<a*b;
            break;    
        case 'l':
            cout<<log(a)/log(b);    
            break;
        case 'u':
            if (d>0){
                cout<<(-b+sqrt(d))/(2*a)<<endl;
                cout<<(-b-sqrt(d))/(2*a)<<endl;

            }
            else if(d==0){
                cout<<-b/(2*a);

            }
            else{
                cout<<"it has no real roots";

            }
            break;    
        case 't':
            char trio;
            cout<<"give a trigonometry sign"<<endl<<"sin=s"<<endl<<"cos=n"<<endl<<"cosec=o"<<endl<<"sec=p"<<endl<<"tan=q"<<endl<<"cot=r"<<endl;
            cin>>trio;
            switch(trio){
                case 's':
                   cout<<sin(a);
                   break;
                case 'n':
                   cout<<cos(a);
                   break;
                case 'o':
                   cout<<asin(a);
                   break;
                case 'p':
                   cout<<acos(a);
                   break;      
                case 'q':
                   cout<<tan(a);
                   break;  
                case 'r':
                   cout<<atan(a);
                   break;   
    }
    return 0;

}
}