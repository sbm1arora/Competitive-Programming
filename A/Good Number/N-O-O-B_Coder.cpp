#include<bits\stdc++.h>
using namespace std;
int main(){
    long n,val,count=0;
    cin>>n>>val;
    for(int i=0;i<n;i++){
        long num;
        cin>>num;
        set<int> S;
        while(num>0){
            S.insert(num%10);
            num=num/10;
        }
        int flag=0;
        for(int j=0;j<=val;j++){
            if(S.find(j)==S.end()){
                flag=1;
            }
        }
        if(!flag){
            count++;
        }
    }
    cout<<count;
    return 0;
}