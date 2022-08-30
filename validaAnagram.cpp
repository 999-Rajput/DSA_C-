#include<iostream>
#include<algorithm>
using namespace std;
//function cheak the string is angram or not
void cheakAnagram(string str1,string  str2,int size){
  for(int i=0;i<size;i++){
    if(str1[i]==str2[i]){
        cout<<"STRING IS ANAGRAM....";
        break;
    }
    else 
    cout<<"STRING IS NOT ANAGRAM....  ";
    break;
} 
}
//main function
int  main(){
string s1,s2;
cout<<"Enter the strings s1 and s2 = ";
cin>>s1>>s2;
int size=s1.size();
cheakAnagram(s1 , s2 , size);
cout<<endl;
return 0;
}