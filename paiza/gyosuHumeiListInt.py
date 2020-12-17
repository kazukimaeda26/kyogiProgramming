import sys
array = []
for line in sys.stdin.readlines():
    array.append(line.rstrip())

print(type(array[0]))
print(array)