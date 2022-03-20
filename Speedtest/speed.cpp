#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;

    cin>>t;
    if(t<=100){
    while(t--){
string s,b;
cin>>s>>b;
if(b.size()<s.size()){
    cout<<"IMPOSSIBLE"<<endl;
}
else{
int i=0,j=0;
int count1=0;

for(i=0;i<b.size();i++){
        if(b[i]==s[j]){
            count1++;
            j++;

        }



    }
    if(count1<s.size()){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        cout<<b.size()-s.size()<<endl;
    }}}}
 return 0;
}
