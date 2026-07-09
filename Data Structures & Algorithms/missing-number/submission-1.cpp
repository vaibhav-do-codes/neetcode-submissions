class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int arrSum = 0;

        for (int i=0;i<n;i++){
            arrSum = arrSum + nums[i];
        }

        int expSum = (n*(n+1))/2;

        int missingNum = expSum - arrSum;

        return missingNum;


    }
};
