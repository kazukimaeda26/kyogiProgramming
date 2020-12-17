# coding: utf-8
# Your code here!
n = int(input())
i = [int(input()) for i in range(n)]

for k in range(n):
    yakusu = []
    j = 1
    while j in range(int(i[k]/2)+1):
        if i[k] % j == 0:
            yakusu.append(j)
        j += 1
    if i[k] == sum(yakusu):
        print("perfect")
    elif i[k] == sum(yakusu) + 1:
        print("nearly")
    else:
        print("neither")
