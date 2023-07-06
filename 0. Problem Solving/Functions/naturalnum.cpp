#include<iostream>
using namespace std;

    int main(){
    int sum = 0;
    int n;

    cout<<"enter the number of terms: ";
    cin>>n;

        for(int i=1;i<=n;i++){
            sum += i;
        }
    cout<<"the sum of the numbers are: "<<sum;
    return 0;
    }



