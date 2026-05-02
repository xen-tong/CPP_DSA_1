#include<iostream>
#include<vector>
using namespace std;
int binaryseacrh(int key,vector<int>vec){
    int l=0,h=vec.size()-1;
    while(l<=h) {
        int mid=(l+h)/2;
        if(vec[mid]==key){


            return mid;
        }
        else if(vec[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }

}
int main(){
    vector<int> vec={1,3,7,9,11};
    int key;
    cout<<"Enter The Value You Want to Seacrh For:\n";
    cin>>key;
    cout<<"the index of "<<key<<" is "<<binaryseacrh(key,vec)<<endl;

}
