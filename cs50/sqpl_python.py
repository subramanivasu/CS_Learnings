import cs50

from cs50 import SQL

db = SQL("sqlite:///favorites.db")

title = input("Title: ").strip()

rows = db.execute("SELECT COUNT(*) AS counter FROM favorites WHERE title LIKE ?",title)
rows1 = db.execute("SELECT title FROM favorites WHERE title LIKE ?",title)

print(rows)

row = rows[0]

print(row)

print(row["counter"])

for row in rows1:
    print(row["title"]) 