class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i;
        int cnt = 0;
        int el;
        for(i=0; i<nums.size(); i++){
            if(cnt == 0){
                el = nums[i];
            }

            if(el == nums[i]) cnt++;

            else cnt--;
        }

        return el;
    }
};
