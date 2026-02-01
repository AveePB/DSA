# 23. Merge k Sorted Lists

You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it. 

### Example 1:
**Input**: lists = [[1,4,5],[1,3,4],[2,6]] <br>
**Output**: [1,1,2,3,4,4,5,6] <br>
The linked-lists are: <br>
[<br>
  1->4->5,<br>
  1->3->4,<br>
  2->6<br>
]<br>
merging them into one sorted list:<br>
1->1->2->3->4->4->5->6<br>

### Example 2:
**Input**: lists = []<br>
**Output**: []<br>

### Example 3:
**Input**: lists = [[]]<br>
**Output**: []<br>

## Constraints:
-	k == lists.length
-	0 <= k <= 104
-	0 <= lists[i].length <= 500
-	-104 <= lists[i][j] <= 104
-	lists[i] is sorted in ascending order.
-	The sum of lists[i].length will not exceed 104.
