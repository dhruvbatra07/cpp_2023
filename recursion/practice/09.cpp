#include<iostream>
#include<string>
using namespace std;

bool palin(string a, int start, int stop){
if(start >= stop){
    return true;
}
else if(a[start] != a[stop]){
    return false;
}
else {
    return palin(a,start + 1,stop - 1);
}
}
int main(){
string a;
cin>>a;
cout<<palin(a,0,a.length() - 1);
return 0;
}
