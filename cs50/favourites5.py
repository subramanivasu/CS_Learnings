import csv

movies=dict()
with open("favorites.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
     m = row["title"].strip().upper()
     if not m in movies:
         movies[m] = 0
     movies[m]+=1


for m in sorted(movies,key=lambda #function with no name,only one time usage
    title:movies[title]#title - argument, movies(title)-return value
    ,reverse=True):
    print(m,movies[m])