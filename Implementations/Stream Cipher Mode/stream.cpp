#include<bits/stdc++.h>
using namespace std;
string res="";
void stream_cipher(string text){
int key=67; //this should be made random 

for(auto chr:text){
    res+=to_string(chr ^ key);
}
}
string text;
int main(){
cout<<"Enter plain text"<<"\n";
cin>>text;
cout<<"Plain text is"<<"\n";
for(int c:text){
    cout<<c;
}
stream_cipher(text);
cout<<"\n"<<"Encrypted text is"<<"\n";
for(char c:res){
    cout<<c;
}
}
