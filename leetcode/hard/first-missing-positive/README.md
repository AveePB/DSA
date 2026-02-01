# 41. First Missing Positive

Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
 
### Example 1
**Input**: nums = [1,2,0]<br>
**Output**: 3<br>
The numbers in the range [1,2] are all in the array.<br>

### Example 2
**Input**: nums = [3,4,-1,1]<br>
**Output**: 2<br>
1 is in the array but 2 is missing.<br>

### Example 3
**Input**: nums = [7,8,9,11,12]<br>
**Output**: 1<br>
The smallest positive integer 1 is missing.<br>
 
## Constraints
-	1 <= nums.length <= 105
-	-231 <= nums[i] <= 231 - 1
