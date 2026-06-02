#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

float num1, num2;

void input(){
    cout<<endl;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<endl;
}

float addition(){
    float sum=num1+num2;
    cout<<"Total is: "<<sum<<endl<<endl;
    return sum;
}

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

float multiplication(){
    float product=num1*num2;
    cout<<"Product is: "<<product<<endl<<endl;
    return product;
}

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

int main(){
int option;

cout<<"Welcome!\n"<<endl<<"Please select any one operation\n";
O:
cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<endl<<"Option: ";
cin>>option;
if(option<=0 || option>4){
    cout<<"Please select within options\n"<<endl;
    goto O;
}
else{
    I:
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
    }
    }


}
