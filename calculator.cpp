#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

float num1, num2, a, b, c;

// to take inputs
void input(){
    cout<<endl;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<endl;
}

// for addition operations
float addition(){
    float sum=num1+num2;
    cout<<"Total is: "<<sum<<endl<<endl;
    return sum;
}

// for subtraction operations
float subtraction(){
    if(num1<num2){
        cout<<"Invalid\n"<<endl;
        return 0;
    }
    else{
    float net=num1-num2;
    cout<<"Net is: "<<net<<endl<<endl;
    return net;
    }
}

// for multiplication operations
float multiplication(){
    float product=num1*num2;
    cout<<"Product is: "<<product<<endl<<endl;
    return product;
}

// for divisional operations
float division(){
    if(num2==0){
        cout<<"Invalid\n";
        return 0;
    }
    else{
        float quotient = num1 / num2;
        cout<<"Quotient is: "<<quotient<<endl<<endl;
        return quotient;
    }
}

// for quadratic functions
float quadratic(){
    cout<<"Enter coefficient a: ";
    cin>>a;
    cout<<"Enter coefficient b: ";
    cin>>b;
    cout<<"Enter constant c: ";
    cin>>c;

    float discriminant=b*b-4*a*c;

    if(discriminant>0){
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        cout<<"Roots are real and different\n";
        cout<<"x1= "<<root1<<endl;
        cout<<"x2= "<<root2<<endl<<endl;
    }
    else if(discriminant == 0){
        float root = -b/(2*a);
        cout<<"Roots are real and same\n";
        cout<<"Root = "<<root<<endl<<endl;
    }
    else{
        float realPart = -b / (2*a);
        float imagPart = sqrt (-discriminant) / (2*a);
        cout<<"Roots are complex\n";
        cout<<"x1= "<<realPart<<" + "<<imagPart<<"i"<<endl;
        cout<<"x2= "<<realPart<<" - "<<imagPart<<"i"<<endl<<endl;
    }
    return discriminant;
}

int main(){
int option;

cout<<"Welcome!\n"<<endl<<"Please select any one operation\n";
O:
cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<"5. Quadratic Equation Solver\n"<<"6. Exit\n"<<endl<<"Option: ";
cin>>option;
if(option<=0 || option>6){
    cout<<"Please select within options\n"<<endl;
    goto O;
}
else if(option==6){
    return 0;
}
else{
    I:
    if(option>0 && option<5){
    input();
    if(option==1){
        addition();
        goto O;
    }
    else if(option==2){
        subtraction();
        goto O;
    }
    else if(option==3){
        multiplication();
        goto O;
    }
    else{
        division();
        goto O;
    }}
    else{
        quadratic();
        goto O;
    }
}
}
