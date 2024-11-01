#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
      
 int x;
 cin>>x;
int y;
for(y=2;y<x; y++){
    if(x%y==0){
        cout<<"not prime number ";
        break;
    }
    
}
if(y==x){
    cout<<"prime number ";
}


    return 0;
}

