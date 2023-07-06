#import<iostream>
using namespace std;

int main(){

    long int n;
    int sum = 0;

    cout<<"enter the number: ";
    cin>>n;
    while(n!=0){
            int d = n%10;
            if(d%2 == 0){
            sum += d;
            }
            n = n/10;
    }
    cout<<"the sum of the even digits is "<<sum;
    return 0;
        }
