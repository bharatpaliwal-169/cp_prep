#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPalindrome(string s)
  {
      // Your code goes here
      int left = 0,right = s.length()-1;
      while(left <= right){
          if(s[left] != s[right])
              return 0;
          left++;right--;
      }
      
      return 1;
  }

};