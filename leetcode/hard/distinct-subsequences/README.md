# 115. Distinct Subsequences
Given two strings s and t, return the number of distinct subsequences of s which equals t.
The test cases are generated so that the answer fits on a 32-bit signed integer.

### Example 1
**Input**: s = "rabbbit", t = "rabbit"<br>
**Output**: 3<br>
As shown below, there are 3 ways you can generate "rabbit" from s. <br>
**rabb**b**it**<br>
**ra**b**bbit**<br>
**rab**b**bit**<br>

### Example 2
**Input**: s = "babgbag", t = "bag"<br>
**Output**: 5<br>

As shown below, there are 5 ways you can generate "bag" from s. <br>
**ba**b**g**bag<br>
**ba**bgba**g**<br>
**b**abgb**ag**<br>
ba**b**gb**ag**<br>
babg**bag**<br>


## Constraints
- 1 <= s.length, t.length <= 1000
- s and t consist of English letters.
