class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i, j;

        for(i = 0, j = numbers.size() - 1; i < j;){

            if(numbers[j] >= target - numbers[i]){

                if(numbers[j] == target - numbers[i])
                    return {i+1, j+1};
                
                j--;
            }

            else i++;

        }

        return {-1};

    }
};