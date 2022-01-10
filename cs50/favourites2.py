import csv

movies=set()
with open("favorites.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
     m = row["title"].strip().upper()
     movies.add(m)

for m in sorted(movies):
    print(m)