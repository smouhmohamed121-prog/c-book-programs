
class Solution(object):
    def splitIntoFibonacci(self, num):
        """
        :type num: str
        :rtype: List[int]
        """
        num = list (num)
        result = []
        def backtrack (index,path):
            if index == len (num):
                result.append(path[:])
                return 
            path.append (num[index])
            backtrack (index+1,path)
            path.pop()

            backtrack (index+1,path)
        backtrack (0,[])
        return result 