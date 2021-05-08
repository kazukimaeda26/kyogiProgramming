# coding: utf-8
# 自分の得意な言語で
# Let's チャレンジ！！

n = int(input())

i = 0
lists = []
while i <= n:
  s = input()
  lists.append(list(s))
  i += 1


answer = []
for array in lists:
  j = 0
  while j < len(array) - 1:
    if array[j] == "a" and array[j+1] == "i":
      answer.append(array)
      break
    j += 1

ans = []
for i in answer:
  str = ""
  for s in i:
    str += s
  ans.append(str)
ans = set(ans)
if len(ans) == 0:
  print("None")
else:
  for a in ans:
    print(a)