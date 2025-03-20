#include <iostream>
//#include <cstdlib>
using namespace std;
 int main(){
    int number1,number2;
cout<<"please enter two numbers:"<<endl;
    cin>>number1>>number2;
    int addition=number1 + number2;
    int substraction=number1 - number2;
   int multiplication=number1 * number2;
    cout<<"Addition:"<<addition<<endl;
    cout<<"Substraction:"<<substraction<<endl;
    cout<<"Multiplication:"<<multiplication<<endl;


    if (number2==0){
        cout<<"Invalid number Structure";
    }

        else{
                double division = static_cast<double>(number1) / number2;
        cout<<"Division:"<<division;
        }

return 0;
}
