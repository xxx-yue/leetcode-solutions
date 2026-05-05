#include<vector>
#include<string>
#include<iostream>
using namespace std;
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums)
//    {
//        int left = 0, right = 0;
//        int len = nums.size(), sum = 0;
//        int flag = 1;
//        while (right <= nums.size())
//        {
//            if (sum < target)
//            {
//                sum += nums[right];
//                if (right < nums.size())
//                    right++;
//            }
//            else
//            {
//                len = min(right - left, len);
//                sum -= nums[left++];
//            }
//        }
//        return len;
//    }
//};
//int main()
//{
//    vector<int>a = { 2, 3, 1, 2, 4, 3 };
//    Solution a1;
//    a1.minSubArrayLen(7,a);
//    return 0;
//}
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s)
//    {
//        int left = 0, right = 0;
//        int len = 0, gap = 0;
//        vector<char>a;
//        while (right < s.size())
//        {
//            int flag = 1;
//            for (int i = left; i < a.size(); i++)
//            {
//                //如果right不在哈希表里,就push进哈希表
//                if (a[i] == s[right])//right在哈希表里
//                {
//                    gap = i;
//                    flag = 0;
//                    break;
//                }
//            }
//            
//                a.push_back(s[right]);
//
//            if(!flag)
//            {
//                len = right-left;
//                left = gap + 1;
//            }
//            right++;
//            //如果right在哈希表里,就更新len,然后把left++到等于right+1
//        }
//        return len;
//    }
//};
//int main()
//{
//    string s = "pwwkew";
//    Solution a1;
//    a1.lengthOfLongestSubstring(s);
//    return 0;
//}
//class Solution {
//public:
//    int longestOnes(vector<int>& nums, int k)
//    {
//        int left = 0, right = 0;
//        int num = 0, len = 0;
//        while (right < nums.size())
//        {
//            if (nums[right] == 0)
//            {
//                num++;
//            }
//            while (num == k + 1)
//            {
//                if (nums[left] == 0)
//                {
//                    num--;
//                }
//                left++;
//            }
//            right++;
//            len = right - left;
//        }
//        return len;
//    }
//};
//class Solution {
//public:
//    int minOperations(vector<int>& nums, int x)
//    {
//        int left = 0, right = 0, len = -1;
//        int num = nums.size() , sum = 0;
//        int sum1 = 0;
//        for (int i = 0; i < num; i++)
//        {
//            sum += nums[i];
//        }
//        int target = sum - x;
//        if (target < 0) return -1;
//        while (right < num)
//        {
//            sum1 += nums[right];
//            while (sum1 > target) {
//                sum1 -= nums[left++];
//            }
//            if (sum1 == target) {
//                len = max(len, right - left + 1);
//            }
//            right++;
//        }
//        if (len==-1)
//            return -1;
//        return num-len;
//    }
//};
    int main()
    {
        //a1[]表示各摊位分数多少
        //a[]表示各摊位的位置
        //a1[a[]]表示这个摊位的分数++
        int n, m;
        cin >> n >> m;
        vector<int>a;
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            a[i] = num;
        }
        sort(a.begin(), a.end());
        int l, r;
        cin >> l, r;
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (l <= a[j] && a[j] <= r)
                {
                    sum += (n - j + 1);
                    sum %= 10007;
                    break;
                }
            }
        }
        cout << sum;
        return 0;
    }