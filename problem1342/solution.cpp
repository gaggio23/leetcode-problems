#include <iostream>

class Solution {
public:
    static int numberOfSteps (int num)
    {
        int steps_to_zero = 0;
        while (num != 0)
        {
            if (num % 2 == 0) num /= 2;
            else num--;
            steps_to_zero++;
        }
        return steps_to_zero;        
    }
};

int main()
{
    std::cout << "Number of steps taken is: " << Solution::numberOfSteps(8);
    return 0;
}