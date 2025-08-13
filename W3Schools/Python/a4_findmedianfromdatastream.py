'''
The median is the middle value in an ordered integer list. If the size of the list is even, 
there is no middle value, and the median is the mean of the two middle values.

For example, for arr = [2,3,4], the median is 3.
For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
Implement the MedianFinder class:

MedianFinder() initializes the MedianFinder object.
void addNum(int num) adds the integer num from the data stream to the data structure.
double findMedian() returns the median of all elements so far. Answers within 10-5 of the 
actual answer will be accepted.
'''

class MedianFinder:

    def __init__(self):
        self.nums = [] #hold all numbers 

    def addNum(self, num: int) -> None:
        self.nums.append(num)

    def findMedian(self) -> float:
        n = len(self.nums)
        middle = n // 2
        if n % 2 == 0:
            med = (self.nums[middle - 1] + self.nums[middle]) / 2
        else:
            med = self.nums[middle]
        return med

if __name__ == "__main__":
    medianFinder = MedianFinder()
    #test
    medianFinder.addNum(1)    # arr = [1]
    medianFinder.addNum(2)    # arr = [1, 2]
    print(medianFinder.findMedian()) # return 1.5 (i.e., (1 + 2) / 2)
    medianFinder.addNum(3)    # arr[1, 2, 3]
    print(medianFinder.findMedian()) # return 2.0