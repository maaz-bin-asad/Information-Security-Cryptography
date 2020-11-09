//code to check whether given numbers belong to same equivalence classes and are congruent to each other
#include<bits/stdc++.h>
using namespace std;
typedef long long int li;
li a,b,key;
int main(){
cout<<"Enter first number"<<"\n";
cin>>a;
cout<<"Enter second number"<<"\n";
cin>>b;
cout<<"Enter key"<<"\n";
cin>>key;
if(a%key==b%key){ //if remainder of both elements are same.
    cout<<"Yes, they belong to same class"<<"\n";
    cout<<"The resultant equivalence class is"<<"\n";
    li start=a%key;  //increment by key

    for(auto itr=0;itr<10;itr++){
        cout<<start<<" ";
        start+=key;
    }
    cout<<" and so on..."; //equivalence classes are infinite sets
}
else{
    cout<<"No, they do not"<<"\n";
}


}
