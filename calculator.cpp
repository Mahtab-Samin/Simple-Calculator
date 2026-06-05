#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

float a, b, c;

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
    string input;
    cout << "Simple Calculator\n";
    cout << "Special commands: \nq = quadratic solve\nx = exit\n";

    while(true){
        cout << "\nEnter: ";
        cin >> input;
        getline(cin, input);

        if(input == "x"){
            cout << "Exiting calculator..." <<endl;
            break;
        }
        else if(input == "q"){
            quadratic();
            continue;
        }

        // for parsing
        stringstream ss(input);
        float num1, num2;
        char op;
        ss >> num1 >> op >> num2;

        switch(op){
            case '+':
                cout << "Result = " << num1 + num2 <<endl;
                break;
            case '-':
                cout << "Result = " << num1 - num2 <<endl;
                break;
            case '*':
                cout << "Result = " << num1 * num2 <<endl;
                break;
            case '/':
                if(num2 == 0) cout << "Error: Division by zero\n";
                else cout << "Result = " << num1 / num2 <<endl;
                break;
            default:
                cout << "Invalid input. Use +, -, *, / or special commands.\n";
        }

        cout<<"For special commands: q = quadratic solve, x = exit";
    }
}