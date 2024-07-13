# Author : ysh
# 2024/07/12 Fri 01:31:45
r,a = [int(i) for i in input().split()]
s,b = [int(i) for i in input().split()]

assert(1 <= a <= 10 ** 6)
assert(1 <= b <= 10 ** 9)

assert(0 <= r <= a)
assert(0 <= s <= b)