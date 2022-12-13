#include <bits/stdc++.h> 
// Count Ways To Reach The N-th Stairs
// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10
int countDistinctWays(int nStairs) {
    //  Write your code here.
    //This Question will be solved using Dynamic Programming
    //Base case
    if(nStairs < 0)
          return 0;
    if(nStairs == 0)
          return 1;
    
    //R.C.
    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;
}