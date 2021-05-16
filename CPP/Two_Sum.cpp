class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> numbers;

        for( int i = 0 ; i < nums.size(); i++)
        {
            for( int j = i + 1 ; j < nums.size(); j++)
            {
                if (nums.at(i)+nums.at(j) == target){
                    numbers.push_back(i);
                    numbers.push_back(j);
                }
            }
        }
        
        return numbers;

    }



};