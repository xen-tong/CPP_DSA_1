#include<iostream>
using namespace std;

int main(){

int n;
//int sum=0;
int arr[100];
cout << "Enter Your Element Number:";






''
cin >> n;
for(int i=0;i<n;i++){

cout << "Number:";
cin >>arr[i];
}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
                         }
    }
}
/*for(int i=0;i<n;i++){


sum=sum+arr[i];
}

cout << "\n Sum="<< " "<< sum;
}
*/
for(int i=0;i<n;i++){


