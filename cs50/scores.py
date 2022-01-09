scores = []

for i in range(3):
    score = int(input("Enter Score : "))
    scores += [score]
print(f"Average : {sum(scores)/len(scores)}")