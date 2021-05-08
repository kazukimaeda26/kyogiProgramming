h, w = map(int, input().split())

blocks = []
sumlist = []
minlist = []
for i in range(h):
  line = list(map(int, input().split()))
  blocks.append(line)
  sumlist.append(sum(line))
  m = min(line)
  minlist.append(m)

minimum = min(minlist)
s = sum(sumlist)

print(s - minimum * h * w)
