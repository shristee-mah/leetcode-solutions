// 66. Plus One
// Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer. The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit. You may assume the integer does not contain any leading zero, except the number 0 itself.
#include <vector>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // Transverse from the last digit
        for (int i = digits.size()-1; i>=0; i--){
            //If digit is less than 9, simply increment it
            if (digits[i]<9){
                digits[i]++;
                return digits;
            }
            // if digits is 9, it becomes 0 and carry continues
            digits[i]=0;
        }

        //If all digits were 9, insert 1 at the beginning
        digits.insert(digits.begin(),1);

        return digits;
        
    }
    
};