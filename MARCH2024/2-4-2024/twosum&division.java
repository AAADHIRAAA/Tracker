//two sum

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i=0;i<nums.length;i++){
          int c=target-nums[i];
          int ind = IntStream.range(0,nums.length).filter(j->nums[j]==c).findFirst().orElse(-1);
          if(ind!=-1 && ind!=i){
            return new int[]{i,ind};
          }
        }
        return null;
    }
}

//divide two integers without using multiplication division and modulo operator

class Solution {
     public int divide(int dividend, int divisor) {
        if (dividend == Integer.MIN_VALUE && divisor == -1) return Integer.MAX_VALUE; 
         
        boolean negative = dividend < 0 ^ divisor < 0; 
        
        dividend = Math.abs(dividend);
        divisor = Math.abs(divisor);
        int quotient = 0, subQuot = 0;
        
        while (dividend - divisor >= 0) {
            for (subQuot = 0; dividend - (divisor << subQuot << 1) >= 0; subQuot++);
            quotient += 1 << subQuot; 
            dividend -= divisor << subQuot; 
        }
        return negative ? -quotient : quotient;
    }
}
