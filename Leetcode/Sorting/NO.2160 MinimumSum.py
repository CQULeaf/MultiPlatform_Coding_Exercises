class Solution:
    def minimumSum(self, num: int) -> int:
        digits = []
        while num > 0:
            digits.append(num % 10)
            num //= 10
        
        digits.sort()

        new1 = new2 = 0
        for i in range(0,4,2):
            new1 = new1 * 10 + digits[i]
            new2 = new2 * 10 + digits[i+1]
        
        return new1 + new2