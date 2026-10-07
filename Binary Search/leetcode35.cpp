class Solution {
public:
    int insert_index(vector<int>& nums, int target) {
        int k = nums.size();

        for(int i = 0; i < k; i++) {
            if(target <= nums[i]) {
                return i;
            }
        }

        return k;
    }

    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] == target) {
                return i;
            }
        }

        return insert_index(nums, target);
    }
};



// Optimal
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) {
                return mid;
            }
            else if(target > nums[mid]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return left;
    }
};