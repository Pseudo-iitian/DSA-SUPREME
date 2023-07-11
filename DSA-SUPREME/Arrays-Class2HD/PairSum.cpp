#include<bits/stdc++.h>
using namespace std;
int main(){
    // brute force -> finding all pairs and sum them to knwo if it equals to sum or not
    vector<int> ans{1,3,5,7,2,4,6};
    int sum = 9;
    // for(int i=0;i<ans.size();++i){
    //     for(int j=i+1;j<ans.size();++j){
    //         if(ans[i]+ans[j]==sum){
    //             cout<<"{"<<ans[i]<<","<<ans[j]<<"}"<<endl;
    //         }
    //     }
    // }

    // using two pointer
    int i=0,j=ans.size()-1;
    int target = 9;
    while(i<j){
        int sum = ans[i]+ans[j];
        if(sum<target) i++;
        else if(sum>target) j--;
        else{
            cout<<"{"<<ans[i]<<","<<ans[j]<<"}"<<endl;
            j--;
        }
    }
    return 0;
}