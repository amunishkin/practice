'''
You are given a string s and an array of strings words. All the strings of words are of the same length.

A concatenated string is a string that exactly contains all the strings of any permutation of words concatenated.

For example, if words = ["ab","cd","ef"], then "abcdef", "abefcd", "cdabef", "cdefab", "efabcd", and "efcdab" are all 
concatenated strings. "acdbef" is not a concatenated string because it is not the concatenation of any permutation of words.
Return an array of the starting indices of all the concatenated substrings in s. You can return the answer in any order.
'''
import itertools

class Solution:
    def findSubstring(self, s: str, words: list[str]) -> list[int]:
        #generate all permutations of words
        permutations_list = list(itertools.permutations(words))
        #find all indices in s
        indices = []
        for permutation_ in permutations_list:
            permutation_str = ''.join(permutation_)
            index = s.find(permutation_str)
            if index != -1:
                indices.append(index)
        return indices


if __name__ == "__main__":
    test = Solution()
    #test1
    s = "barfoothefoobarman"
    words = ["foo","bar"]
    sol = test.findSubstring(s, words)
    print(sol)
    #test2
    s = "wordgoodgoodgoodbestword"
    words = ["word","good","best","word"]
    sol = test.findSubstring(s, words)
    print(sol)
    #test3
    s = "barfoofoobarthefoobarman"
    words = ["bar","foo","the"]
    sol = test.findSubstring(s, words)
    print(sol)