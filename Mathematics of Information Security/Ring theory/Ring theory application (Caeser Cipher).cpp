#include<iostream>
#include<string>
using namespace std;
string plain_text;
int key;
string encrypt(string plain_text,int key){  //function to encrypt text
string result="";
for(auto itr:plain_text){
        if(isupper((itr)))
    result += char(int(itr+key-65)%26 +65);   //increment number by key and keep that in ring
        else{
            result+=char(int(itr+key-97)%26+97);
        }
}
return result;
}
int main(){
cout<<"Enter plain text"<<"\n";
getline(cin, plain_text);
cout<<"Enter shift key"<<"\n";
cin>>key;
if(!(key>25)){
    cout<<"Encrypted text is"<<"\n";
for(auto ch:encrypt(plain_text,key)){
}
}
else{
    cout<<"Invalid key";
}

}
