# coding: utf-8
# Your code here!
n, m = list(map(int, input().split()))

shiharai = [int(input()) for i in range(m)]
point = 0
for j in range(m):
    if point < shiharai[j]:
        n = n -shiharai[j]
        point = int(point + shiharai[j]/10)
        print(str(n) + " " + str(point))
    else:
        point = point - shiharai[j]
        print(str(n) + " " + str(point))