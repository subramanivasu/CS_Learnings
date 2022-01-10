import csv

movies=[]
with open("favorites.csv","r") as file:
    reader = csv.reader(file)
    next(reader)
    for row in reader:
     m = row[1].lower()
     if m in movies:
         continue
     else:
        movies.append(m)

print(movies)