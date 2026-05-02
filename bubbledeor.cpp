#include<iostream>
using namespace std;

int main(){

int n;
cout << "size:";
cin >> n;

int a[100];

//control loop
for(int i=0;i<n;i++){
    cout << "num:";
    cin >> a[i];
}

for(int i=0; i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(a[j]<a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}


for(int i=0;i<n;i++){
    cout << a[i] << " ";

}

int even=0,odd=0;


for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even=even+a[i];
        }
        else{
            odd=odd+a[i];
        }

}


    cout << "\nEvenSum:" << even ;
    cout << "\nOddSum:" << odd ;

}





