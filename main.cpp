#include <bits/stdc++.h>
using namespace std;

void solve(int index, vector<vector<int>> &ans, vector<int> nums){
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }
    
    for(int i = index; i<nums.size(); i++){
        swap(nums[index],nums[i]);
        solve(index+1, ans, nums);
        
        //backtrac
        swap(nums[index],nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    int index = 0;
    solve(index,ans,nums);
    return ans;
}


int main() {
    vector<int> nums; 
    nums.push_back(1); 
    nums.push_back(2); 
    nums.push_back(3);
    vector<vector<int>> ans = permute(nums);
    
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
   return 0;
}






