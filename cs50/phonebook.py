import csv

name = input("Enter name :")
number = input("Enter Number")
with open("phonebook.csv","a") as file:
    writer = csv.writer(file)
    writer.writerow([name,number])
