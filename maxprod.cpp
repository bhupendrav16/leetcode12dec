class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // brute force
        // int maxi =INT_MIN;
        // for ( int i = 0 ; i < nums.size(); i++){
        //       for ( int j = i+1 ; j < nums.size(); j++){
        //           int  prod = (nums[i]-1)*(nums[j]-1);
        //             maxi = max(prod,maxi);
        //     }
        // }
        // return maxi;

        // better 
        // sort( nums.begin(),nums.end());
        // return ( nums[nums.size()-1]-1)* (nums[nums.size()-2]-1);

        // optimal  
        int largest =INT_MIN;
        int seclargest = INT_MIN;
        for ( int i =0 ; i< nums.size(); i++){
            if( nums[i] > largest){
                seclargest = largest;
                largest = nums[i];
            }

            else if( seclargest < largest  &&  nums[i] > seclargest ){
                seclargest = nums[i];
            }
        }
        return (seclargest-1)*(largest-1);
    }

};
