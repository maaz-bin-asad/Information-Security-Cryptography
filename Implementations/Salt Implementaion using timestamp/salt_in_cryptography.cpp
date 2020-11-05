#include<iostream>
#include <ctime>
#include<algorithm>
using namespace std;
time_t current_time;


string getSalt(){   
string pseudo_random_salt="";
current_time = time(NULL);
int param1=current_time%10; //take last digit of seconds passed since 1970
current_time/=10;
int param2=current_time%10; //take second last digit of seconds passed since 1970
int salt;
int salt_space[7]={8,6,7,5,3,9,2};
for(int number=1;number<=5;number++){ // Lagged Fibonacci Pseudo Random generator machine
    for(int itr=0;itr<7;itr++){
        if(itr==0){
            salt = (salt_space[param1-1] ^ salt_space[param2-1]) % 10;

        }
        else if(itr>0 && itr<6){
            salt_space[itr]=salt_space[itr]+1;
        }
        else{
            salt_space[itr]=salt;
            pseudo_random_salt+=to_string(salt_space[itr]);
        }
    }
}
return pseudo_random_salt;
}



int main(){

string pass;
cout<<"Enter your password"<<"\n";
cin>>pass;
string str=getSalt();
pass+=str; //add salt to password
cout<<"Salted password is"<<"\n";
for(int i=0;i<pass.size();i++){
    cout<<pass[i];
}
}
