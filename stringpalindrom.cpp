#include<iostream>
using namespace std;
#include<algorithm>


int main(){
string str;
cout<<"Enter the string =  ";
cin>>str;

string temp=str;
//reverse the string
reverse(temp.begin(),temp.end());

if(temp==str){
    cout<<" string is palindrom"<<endl;;
}
else{
    cout<<"string is not palindrom"<<endl;
}


return 0;
}
