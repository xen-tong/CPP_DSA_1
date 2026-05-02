#include<iostream>
using namespace std;

int main(){

int n=5;
int a[]={2,4,5,1,3};

for(int i=0;i<n-1;i++){
    int temp=i;
    for(int j=i+1;j<n;j++){
            if(a[j]<a[temp]){
                temp=j;
            }

    }
    swap(a[i],a[temp]);
}

for(int i=0;i<n;i++){
    cout << a[i] <<" ";
}

}


