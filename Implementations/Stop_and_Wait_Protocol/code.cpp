#include<bits/stdc++.h>
#include<dos.h>   //for delay()
#include<conio.h>   //for getch()
#define pb push_back
#define f first
#define s second
using namespace std;
typedef pair<int, int> pii;
int main(){
int id=0; //id of every packet
while(true){
cout<<"Sent data with with id "<<id<<"\n";
unsigned int allowTime = time(0) + 7;
unsigned int retTime = time(0) + rand()%10;
while (time(0) < retTime);
if(retTime>allowTime){ //if latency is large, send same packet again
    cout<<"Packet lost"<<"\n";
}
else{
cout<<"Ack of id "<<id<<"\n";
id++;
}
}

}

