'''
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
'''

class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        merged_nums = nums1 + nums2
        merged_nums.sort()
        n = len(merged_nums)
        mid = n // 2 #floor division

        if n % 2 == 0: #even
            return (merged_nums[mid - 1] + merged_nums[mid]) / 2
        else: #odd
            return merged_nums[mid]

if __name__ == "__main__":
    test = Solution()
    #test1
    nums1 = [1,3]
    nums2 = [2]    
    sol = test.findMedianSortedArrays(nums1,nums2)
    print(sol)
    #test2
    nums1 = [1,2]
    nums2 = [3,4]
    sol = test.findMedianSortedArrays(nums1,nums2)
    print(sol)