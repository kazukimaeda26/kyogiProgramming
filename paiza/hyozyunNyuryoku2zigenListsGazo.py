# 標準入力
# 1,1,1,1
# 0,0,0,0
# 2,3,4,2
# _

players_img = [
    "https://paiza-webapp.s3.amazonaws.com/files/learning/rpg/Empty.png",
    "https://paiza-webapp.s3.amazonaws.com/files/learning/rpg/Dragon.png",
    "https://paiza-webapp.s3.amazonaws.com/files/learning/rpg/Crystal.png",
    "https://paiza-webapp.s3.amazonaws.com/files/learning/rpg/Hero.png",
    "https://paiza-webapp.s3.amazonaws.com/files/learning/rpg/Heroine.png"]


lists = []
while True:
    line = input()
    if line == "_":
        break
    lists.append(line.split(","))

print("<table>")
for line in lists:
    print("<tr>")
    for point in line:
        print("<td>")
        print("<img src='"+ players_img[int(point)]+"'>")
        print("</td>")
    print("</tr>")
print("</tabel>")