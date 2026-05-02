#include<iostream>
using namespace std;

int main(){
int n;
cout << "Enter Number:";
cin >> n;
int arr[100];
for(int i=0;i<n;i++){
    cout << "Number :";
    cin >> arr[i];
    }
for (int i=0; i<n-1;i++){
    int small=i;
    for (int j=i+1;j<n;j++){
        if(arr[j]<arr[small]){
            small=j;
        }


    }
    swap(arr[i],arr[small]);


}
for(int i=0;i<n;i++){

   cout << arr[i] << " ";


}
}
