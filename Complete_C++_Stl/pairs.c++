#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    for(auto l:arr){
        cout<<l.first<<" "<<l.second<<" ";
    }
    cout<<endl;

}