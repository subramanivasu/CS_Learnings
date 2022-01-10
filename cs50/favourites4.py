import csv

movies=dict()
with open("favorites.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
     m = row["title"].strip().upper()
     if not m in movies:
         movies[m] = 0
     movies[m]+=1
def get_val(title):
    return movies[title]

for m in sorted(movies,key=get_val,reverse=True):
    print(m,movies[m])