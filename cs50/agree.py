def main(n):
        a_d(n)
def a_d(n):

    for i in range(n):
        s = input("Do you agree ? ").lower()
        if s in ["y","yes"]:
            print("Agreed")
        elif s in ["n","no"]:
            print("Disagreed")

main(5)