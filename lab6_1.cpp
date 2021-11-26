#include<iostream>
using namespace std;

int main(){
    int i=-1,x;
    int even = 0;
    int odd =0;

    while (i <0)
    { 
        cout << "Enter an integer: ";
        cin >> x;
        if (x == 0){
            i = 1;

        }else{
            if (x%2 ==0){
                even++;


            }else{
                odd++;

            }
        }
    }

    cout << "#Even numbers = "<< even << "\n";
    cout << "#Odd numbers = "<< odd;
    return 0;
}