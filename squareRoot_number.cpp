// using math function for c++ -> sqrt








class Solution {
public:
    int mySqrt(int x) {
        int result = 0;
        for(int i=1;i<sizeof(x);i++) {
            result = sqrt(x);
            cout << result;
        }
        return result;
        
    }
};
