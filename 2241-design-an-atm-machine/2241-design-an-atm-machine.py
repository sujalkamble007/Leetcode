class ATM:
    def __init__(self):
        self.deno = [0] * 5
        self.m = {
            4: 500,
            3: 200,
            2: 100,
            1: 50,
            0: 20
        }

    def deposit(self, banknotesCount: List[int]) -> None:
        for i in range(5):
            self.deno[i] += banknotesCount[i]

    def withdraw(self, amount: int) -> List[int]:
        ans = [0] * 5

        for i in range(4, -1, -1):
            if amount >= self.m[i]:
                c = amount // self.m[i]
                if c > self.deno[i]:
                    c = self.deno[i]

                self.deno[i] -= c
                amount -= c * self.m[i]
                ans[i] += c

        if amount == 0:
            return ans

        for i in range(5):
            self.deno[i] += ans[i]

        return [-1]
