#!/usr/bin/python
def getPrime(n):
    ans = list(range(2,n+1))
    for num in ans:
        k = 2
        while k * num <= ans[-1]:
            if k * num in ans:
                ans.remove(k * num)
            k += 1
    return ans

if __name__ == '__main__':
    n = raw_input("Enter an int to get all prime number less than it: ")
    print getPrime(int(n))
