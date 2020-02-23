class Solution {
public:
    static int subtractProductAndSum(const int n)
    {
        std::vector<int> digits;
        getDigits(n, &digits);
        int product = std::accumulate(digits.begin(), digits.end(), 1, std::multiplies<int>());
        int sum = std::accumulate(digits.begin(), digits.end(), 0);
        return product - sum;
    }
    
private:
    static void getDigits(const int num, std::vector<int>* const digits)
    {
        if (num > 9) getDigits(num / 10, digits);
        digits->push_back(num % 10);
    }    
};