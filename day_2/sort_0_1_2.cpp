class Solution {
public:

    void swap(int&a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
            else mid++;
        }
    }
};
