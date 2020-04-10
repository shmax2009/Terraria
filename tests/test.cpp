#include <iostream>
#include <string>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int s;
    long long int max = -2500000000;

	for (int i = 0; i < nums.size(); i++)
    {
        if (s < 0)
            s = nums[i];
        else
            s += nums[i];

        if (s > max)
            max = s;
    }

    return max;
}

int main()
{  
	vector <int> nums;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        nums.push_back(tmp);
    }

    cout << maxSubArray(nums);

	return 0;
}
