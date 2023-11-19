#include<iostream>
using namespace std;
int main(){

   for(int i=65; i<=122; i++) {
    
    if (i>=65 &&i<=90){
        cout<<(char)i<<" "<<i<<endl;
    }
    else if(i>=97 && i<=122){
        cout<<(char)i<<" "<<i<<endl;
    }
    else{
        cout<<"not a character"<<endl;
  }
    
   }
    return 0;
}  