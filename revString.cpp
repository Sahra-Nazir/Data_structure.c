#include<iostream>
#include<string>
using namespace std;
// take a tring input from user
int main(){
    string name;
    cout<<"print your name"<<endl;
    getline (cin,name);
    cout<<"your name is :"<<name<<endl;
    // length of string
    int count=0;
    for (int i=0;name[i]!='\0';i++){
   count++;
    }
    cout<<"the string length is :"<<count<<endl;
    // string in reverse 
    cout<<"reverse : ";
      for (int i=count-1;i>=0;i--){
    cout<<name[i];
      }
    return 0;
}