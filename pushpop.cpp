#include<iostream>
using namespace std;
//define array size
#define max 100

//declare varriable
int a[max];
int top=-1;

//push operation
void push(int x){

    if(top==max-1){
        cout << "Stack Overflow \n Try Again" <<" ";

    }
    else{

        a[++top]=x;
    }
}


//pop operation

void pop(){

if(tp==-1)

}

void Display(){
    for(int i=top;i>=0;i--){
        cout<< a[i] <<endl;
    }


}



//main fucntion
int main(){

push(30);
push(20);
push(10);

Display();


}
