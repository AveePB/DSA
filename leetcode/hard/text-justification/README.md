# 68. Text Justification

Given an array of strings words and a width maxWidth, format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.<br>
You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces ' ' when necessary so that each line has exactly maxWidth characters.<br>
Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line does not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.
For the last line of text, it should be left-justified, and no extra space is inserted between words.<br>
>Note:
>-	A word is defined as a character sequence consisting of non-space characters only.
>-	Each word's length is guaranteed to be greater than 0 and not exceed maxWidth.
>-	The input array words contains at least one word.

### Example 1
**Input**: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16<br>
**Output**:<br>
[<br>
   "This    is    an",<br>
   "example  of text",<br>
   "justification.  "<br>
]<br>

### Example 2
**Input**: words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16<br>
**Output**:<br>
[<br>
  "What   must   be",<br>
  "acknowledgment  ",<br>
  "shall be        "<br>
]<br>
Note that the last line is "shall be    " instead of "shall     be", because the last line must be left-justified instead of fully-justified.<br>
Note that the second line is also left-justified because it contains only one word.<br>

### Example 3
**Input**: words = ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"], maxWidth = 20<br>
**Output**:<br>
[<br>
  "Science  is  what we",<br>
  "understand      well",<br>
  "enough to explain to",<br>
  "a  computer.  Art is",<br>
  "everything  else  we",<br>
  "do                  "<br>
]<br>

## Constraints:
-	1 <= words.length <= 300
-	1 <= words[i].length <= 20
-	words[i] consists of only English letters and symbols.
-	1 <= maxWidth <= 100
-	words[i].length <= maxWidth
