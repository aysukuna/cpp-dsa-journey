#include<iostream>
using namespace std;

int countdigits(int n){
    int count = 0;
    while(n / 10 > 0){
        count++;
        n = n / 10;
    } 
    return count+1;
}

int sumofdigits(int n){
    int sum = 0;
    while(n / 10 != 0){
        sum += n % 10;
        n = n/10;
    }
    return sum+n;
}

int evendigits(int n){
    int count = 0;
    int digit = 0;
    while(n / 10 >0){
        digit = n % 10;
        if(digit%2 == 0){
            count++;
        }
        n = n/10;
    }
    if(n%2 == 0){
        count++;
    }
    return count;
}

int odddigits(int n){
    int count = 0;
    int digit = 0;
    while(n / 10 >0){
        digit = n % 10;
        if(digit%2 != 0){
            count++;
        }
        n = n/10;
    }
    if(n%2 != 0){
        count++;
    }
    return count;
}

int largest(int n){
    int largest = 0;
    while(n / 10 > 0){
        if(largest < n%10){
            largest = n%10;
        }
        n = n/10;
    }
    if(n%10 > largest){
        largest = n%10;
    }
    return largest;
}

int smallest(int n){
    int smallest = n%10;
    while(n / 10 > 0){
        if(smallest > n%10){
            smallest = n%10;
        }
        n = n/10;
    }
    if(n%10 < smallest){
        smallest = n%10;
    }
    return smallest;
}

bool palindrome(int n){
    int x = n;
    int a = 0;
    while(n != 0){
        int k = n % 10;
        a = a*10 + k;
        n = n/10;
    }
    if(x == a){
        return true;
    }
    else{
        return false;
    }
}

bool Isprime(int n){
    if(n<2){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool Isarmstrong(int n){
    int x = n;
    int arm = 0;
    while(n > 0){
        int s = n%10;
        arm += s*s*s;
        n = n/10;
    }
    if(arm == x){
        return true;
    }
    return false;
}

bool Isperfect(int n){
    int x = n;
    int perfect = 0;
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            perfect += i;
        }
    }
    if(perfect == x){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Digits count = "<<countdigits(n)
    <<"\nSum of Digits = "<<sumofdigits(n)
    <<"\nEven digits = "<<evendigits(n)
    <<"\nOdd digits = "<<odddigits(n)
    <<"\nSmallest digit = "<<smallest(n)
    <<"\nLargest digit = "<<largest(n);

    bool result = palindrome(n);
    if(result){
        cout<<"\nNumber is Palindrome";
    }
    else{
        cout<<"\nNumber is not Palindrome";
    }

    int prime = Isprime(n);
    if(prime){
        cout<<"\nPrime number.";
    }
    else{
        cout<<"\nNot a Prime number.";
    }

    int arm = Isarmstrong(n);
    if(arm){
        cout<<"Armstrong Number.";
    }
    else{
        cout<<"Not a Armstrong number.";
    }

    int perfect = Isperfect(n);
    if(perfect){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a perfect number.";
    }
    return 0;
}