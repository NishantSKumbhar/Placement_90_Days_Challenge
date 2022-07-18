"""
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

 

Constraints:

    nums1.length == m
    nums2.length == n
    0 <= m <= 1000
    0 <= n <= 1000
    1 <= m + n <= 2000
    -10^6 <= nums1[i], nums2[i] <= 10^6

"""

# Self 136 ms:
class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        a = sorted(nums1 + nums2)
        if len(a) % 2 != 0:
            median_no = (len(a) // 2)
            return a[median_no]
        else:
            m1 = len(a) // 2
            m2 = m1 - 1
            median = (a[m1] + a[m2]) / 2
            return median



# 98 ms BEST
class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        nums1.extend(nums2)
        combined_len = len(nums1)
        nums1.sort()
        if combined_len % 2 == 0:
            return (nums1[combined_len//2] + nums1[combined_len//2 -1]) / 2
        else:
            return nums1[combined_len//2]