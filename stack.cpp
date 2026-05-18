#include <iostream>
using namespace std;

#define max 100
int arr[max];
int top=-1;

void push(int x){
if(top==max-1){
    cout<< "overflow" << endl;
    return;
}
else{
    arr[++top]=x;
}


}


void pop(){

if(top==-1){
    cout << "Underflow" << endl;
    return;
}
else{
    top--;
}

}

void display(){
    for(int i=top;i>=0;i--){
        cout << arr[i] << endl;

    }
    cout << endl;



}

int main(){

push(100);
push(30);
push(20);

display();

cout << "after pop"<<endl;
pop();
display();



}
