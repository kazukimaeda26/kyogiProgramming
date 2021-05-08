lists = list(map(int, input().split()))
battery = lists[0]
num = lists[1]
goal = lists[2]

times = []
while True:
  line = input()
  if line == "":
    break
  times.append(line.split())

i = 0
j = 0
# iを1ずつたしていく。iがgoalに達したときにbattery>0であればよい。
while i < goal:
  j = 0
  while  j < num:
    if (i > int(times[j][0])) and (i < int(times[j][1])):
      battery += 1
      print("足している　iは"+str(i) + "jは" +str(j) + "残りバッテリー"+str(battery))
    else:
      battery -= 1
      print(battery)
    j += 1
  i += 1