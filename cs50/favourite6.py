import csv
import re

counter = 0
with open("favorites.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        m = row["title"].strip().upper()
        if re.search("^(OFFICE|THE.OFFICE)$",m):
            counter+=1
print(f"The number of times people watched The Office : {counter}")



    


