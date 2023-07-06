#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;
    int sum = 0;

    cout<<"Enter a positive integer: ";
    cin>>n;

    if (n < 0)
        cout<<"factorial of a negative number doesn't exist";
    else {
        for(int i = 1; i <= n; ++i){
                factorial = 1;
            for(int j = 1; j <= i; ++j){
                 factorial *= j;
            }
            sum += factorial;
        }
        cout<<"factorial of "<<n<<" is "<<factorial;
        cout<<"\n";
        cout<<"the sum of the factorials is "<<sum;
    }

    return 0;
}
