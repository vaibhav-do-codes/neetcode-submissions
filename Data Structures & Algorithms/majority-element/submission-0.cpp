class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int frequency = 0;
        int element = 0;

        for (int i=0;i<n;i++){
            if (frequency == 0){
                element = nums[i];
            }
            if (element == nums[i]){
                frequency ++;
            }
            else frequency --;
        }
        return element;
    }
};