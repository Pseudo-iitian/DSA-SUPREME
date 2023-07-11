#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int> > ans;
    int target =0;
    sort(nums.begin(),nums.end());
    set<vector<int> > st;
    for(int k=0;k<nums.size();++k){
        int i=k+1,j=nums.size()-1;
        while(i<j){
            vector<int> temp;
            int current = nums[i]+nums[j]+nums[k];
            if(current==target){
                temp.push_back(nums[k]);
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                st.insert(temp);
                j--;
                i++;
            }
            else if(current<target) i++;
            else j--;
        }
        // else continue;
    }
    for(auto it=st.begin();it!=st.end();++it){
        ans.push_back(*(it));
    }
    return ans;
}
int main(){
    vector<int> ans{-1,0,1,2,-1,-4};
    // target  = 0;
    vector<vector<int>> res = threeSum(ans);
    for(int i=0;i<res.size();++i){
        cout<<"{";
        for(int j=0;j<res[i].size();++j){
            if(j!=res[i].size()-1) cout<<res[i][j]<<",";
            else cout<<res[i][j];
        }
        cout<<"}";
        cout<<endl;
    }
}