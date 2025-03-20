#include <iostream>
#include <cstdlib>
using namespace std;
int main{
    int random_number=rand()% 100+1;
    int user_guess;
    cout<<"enter your desired number:"<<endl;
    cin>>user_guess;
    if (user_guess == random_number)
        cout<<"congratulations!you got it"<<endl;
    else:
            cout<<"please try again!"<<endl;


return 0;
}
