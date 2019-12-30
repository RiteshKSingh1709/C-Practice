n = int(input())
from collections import defaultdict
d = defaultdict(int)
for i in range(n):
    n = input()
    d[n] += 1

sorted(d,key = lambda x:x[1])
print(d)