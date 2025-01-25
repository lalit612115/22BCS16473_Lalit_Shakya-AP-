int findDuplicate(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = i+1;

        while(i<nums.size() and j<nums.size()){

            if(nums[i] == nums[j]){
                ans = nums[i];
                break;
            }
            i++;
            j++;
        }
        return ans;
    }