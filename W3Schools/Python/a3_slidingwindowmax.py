'''
You are given an array of integers nums, there is a sliding window of size k 
which is moving from the very left of the array to the very right. You can 
only see the k numbers in the window. Each time the sliding window moves right 
by one position.

Return the max sliding window.
'''

class Solution:
    def maxSlidingWindow(self, nums: list[int], k: int) -> list[int]:
        list_maxs = []
        #find max of window size k, then repeat till end
        n = len(nums)
        for cnt in range(n):
            #check so it didn't go over
            end_cnt = cnt + k
            if end_cnt > n:
                break
            #generate window
            list_subnums = nums[cnt:end_cnt]
            imax = max(list_subnums)
            list_maxs.append(imax)
        return list_maxs

if __name__ == "__main__":
    test = Solution()
    #test1
    nums = [1,3,-1,-3,5,3,6,7]
    k = 3
    sol = test.maxSlidingWindow(nums,k)
    print(sol)
    #test2
    nums = [1]
    k = 1
    sol = test.maxSlidingWindow(nums,k)
    print(sol)