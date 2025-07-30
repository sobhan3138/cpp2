#include<iostream>
using namespace std;

int reverse(int a){
int b;
b = (a%10)*100;
a = a/10;
b = b+(a%10)*10;
a = a/10;
b = b+(a%10)*1;
return b;
}
int main(){
    int a = 365;
    int b = reverse(a);
    cout<<b;
}
