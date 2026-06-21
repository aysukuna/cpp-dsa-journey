#include<iostream>
using namespace std;

int digitalroot(int a){
    
    while(a / 10 != 0){
        int sum = 0;
        while(a > 0){
            sum += a%10;
            a = a/10;
        }
        a = sum;
    }
    
    return a; 
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int result = digitalroot(n);
  cout<<"A = "<<result;
  return 0;
}