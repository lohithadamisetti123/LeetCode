class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1 == "0" or num2 == "0":
            return "0"
        n1, n2 = len(num1), len(num2)
        result = [0] * (n1 + n2)
        for i in range(n1 - 1, -1, -1):
            for j in range(n2 - 1, -1, -1):
                mul = int(num1[i]) * int(num2[j])
                sum = mul + result[i + j + 1]
                result[i + j + 1] = sum % 10
                result[i + j] += sum // 10
        return ''.join(map(str, result)).lstrip('0')

        