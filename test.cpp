#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter 1st Array size:";
    cin>>n;
    int a[n];
    cout<<"Enter elements in sorted manner: ";
    for(int i =0; i < n; i++){
        cin>>a[i];
    }
    int m;
    cout<<"Enter 2st Array size:";
    cin>>m;
    int b[m];
    cout<<"Enter elements in sorted manner: ";
    for(int i = 0; i < m; i++){
        cin>>b[i];
    }

    int c[n+m];
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m){
        if(a[i] < b[j]){
            c[k] = a[i];
            k++;
            i++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
    }
    while(i < n){
            c[k] = a[i];
            k++;
            i++;
        }

    while(j < m){
            c[k] = b[j];
            k++;
            j++;
        }
        
    cout<<"Merged sorted array: ";
        for(int i = 0; i < k;i++){
            cout<<c[i]<<" ";
        }
    
}
