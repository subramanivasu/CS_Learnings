def addition(x,y):
    return (x+y)

def multiplication(x,y):
    return(x*y)

def subtraction(x,y): 
    return(x-y)

def division(x,y):
    return float((x/y))

def get_val():

    while True :
        try:
            op = int(input("Which operation do you want to perform ? Press 1,2,3,4 correspondingly for Add,Sub,Mult,Div : "))
            if type(op)==int and 0<op<5:
                break 
        except:
            print("Enter valid input")

    while True:
        try:
             x = int(input("Enter X Val : "))
             y = int(input("Enter Y val : "))
             if type(x) and type(y) == int or float:
                break
        except:
            print("Enter a Valid Integer/Decimal Input")
    return op,x,y

op,x,y = get_val()

if op==1:
    print(addition(x,y))
elif op==2:
    print(subtraction(x,y))
elif op==3:
    print(multiplication(x,y))
else:
    op==4
    print(division(x,y))






