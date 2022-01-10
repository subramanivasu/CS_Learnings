import csv

movies=[]
with open("favorites.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
     m = row["title"].strip().upper()
     if m not in movies:
        movies.append(m)

for m in movies:
    print(m)