class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
             // using the bits manipulation.
    
             int n = nums.size();
             int subset = (1<<n);
             int sum = 0;
             for(int i  = 0; i<subset; i++){
              
                  int check = 0;
    
               for(int j = 0; j<n; j++){
    
                  if(i&(1<<j)){
                  check ^= nums[j];
                  }
               }
               sum += check;
             }
    
    
           return sum;
    
        }
    };