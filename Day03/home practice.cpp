#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"please enter the total number of observations: ";
    cin>>n;
    int v[n];
    cout<<"enter " <<n<<" numbers";
    for (int i=0;i<n;i++)
    cin>>v[i];
    float sum = 0;
    float average = 0;
    for (int i=0;i<n;i++)
    sum += v[i];
    cout<<"the sum of the given numbers are: "<<sum;
    average = (sum/n);
    cout<<"the average of the given numbers are: "<<average;

  return 0;
}
