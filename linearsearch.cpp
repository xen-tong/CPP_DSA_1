#include<iostream>
#include<vector>
using namespace std;
int lineaSearch(int key,vector<int>vec){

for(int i=0;i<vec.size();i++){
    if(key==vec[i]){
        return i;
    }
}
return -1;
}


int main(){
vector<int> vec={1,3,7,6,2,6};
int key;
cout<<"enter your value"<<endl;
 cin<<key;
cout<<"the index of"<<key<<"is:"<<linearSearch(key,vec)endl;

}
