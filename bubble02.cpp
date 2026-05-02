#include<iostream>
using namespace std;

int main(){

int n;
cout << "Size:";
cin >> n;
int a[100];
//control_loop
for(int i=0;i<n;i++){
    cout << "num:";
    cin >> a[i];
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }

    }
}
//control_loop
for(int i=0;i<n;i++){
    cout << a[i] << " ";

}


int even=0;
for(int i=0;i<n;i++){

    if(a[i]%2==0){
        even=even+a[i];
    }
    /*
    else {
        int odd=0;
        odd=odd+a[i];
    }*/

}
cout << "\nevensum:" << even;


}
