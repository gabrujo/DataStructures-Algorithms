class Solution {
public:
    int findMin(vector<int>& nums) {
        
        //binary search
        //finds the mid point and decide to search in the left or right.
        
        
        //it is in ascending order
        //find inflection points if the array is rotated
        // non rotated array -> [0,1,2,3,4,5,6,7]  0 < 7
        // rotated array -> [4,5,6,7,0,1,2,3] 4 > 3, inflection point [7,0]
        //int min = 0;
        if (nums.size() == 1){
            return nums[0];
        }
        
        int left = 0, right = nums.size()-1;
        
        if (nums[right] > nums[0]){
            return nums[0];
        }
        
        
        int mid;
        
        //mid = nums[nums.size()/2];
        
        //binary search
        while (right >= left){
            mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[mid+1]){
                return nums[mid+1]; //because inflection point is right here
            }
            
            if (nums[mid-1] > nums[mid]){
                return nums[mid]; //because inflection point is right here
            }
            
            if (nums[mid]>nums[0]){
                left = mid+1; //new left (china? lol)
            } else {
                right = mid-1;
            }
        }
            
                
        return -1;
    }
};
