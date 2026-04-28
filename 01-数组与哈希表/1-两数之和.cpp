class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //外层循环i,从第0个数开始，一直走到倒数第二个
        for (int i = 0; i < nums.size(); i++){
            //内层循环j，从i的下一个数开始，走到最后
            for(int j= i + 1; j < nums.size(); j++){
                //检查nums[i] + nums[j] 是否等于target
                if (nums[i] + nums[j] == target){
                    return{i,j};
                }
            }
        }
        return {};
        
    }
};
