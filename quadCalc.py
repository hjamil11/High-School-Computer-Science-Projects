#########################
## Quaratic Calculator ##
#########################

# File name quadCalc.py
# Written by: Hamad Ahmed

###############################

print("##################################################")
print("##                                              ##")
print("## Welcome to the Simple & Quadratic Calculator ##")
print("##                                              ##")
print("##################################################\n")

def main():
    Addition()
    Subtraction()
    Multiplication()
    Division()
    Roots()
    Powers()
    Question()
    quadCalc()
    trigonometric()

# Define the Addiction function.
def Addition():
    print('Addition: What are your numbers?')
    a = float(input('First Number:'))
    b = float(input('Second Number:'))
    print('Your Answer is:', a + b)

 # Define the Subtraction function.
def Subtraction():
    print('Subtraction: What are your numbers?')
    c = float(input('First Number:'))
    d = float(input('Second Number:'))
    print('Your Answer is:', c - d)

# Define the Multiplication function.
def Multiplication():
    print('Multiplication: What are your numbers?')
    e = float(input('First Number:'))
    f = float(input('Second Number:'))
    print('Your Answer is:', e * f)

# Define the Divsion function
def Division():
    print('Division: What are your numbers?')
    g = float(input('First Number:'))
    h = float(input('Second Number:'))
    print('Your Answer is:', g / h)

# Define the roots function.
def Roots():
    print('Roots: What do you want to Root?')
    i = float(input('Number:'))
    print('Roots: By what root?')
    j = float(input('Number:'))
    k = ( 1 / j )
    print('Your Answer is:',i**k)

# Define the power function.
def Powers():
    print('Powers: What number would you like to multiply by itself?')
    l = float(input('Number:'))
    print('Powers: How many times would you like to multiply by itself?')
    m = float(input('Number:'))
    print('Your Answer is:',l**m)

x = 'test'

# Define the Quadratic function.
def quadCalc():
    # Import square root from math.
    from math import sqrt
    # Ask user Input.
    try:
        a=input("Please input the first coefficient: ")
        a=int(a)
    except:
        print("Invalid Entry!, Please enter a Integer.")
    try:
        b=input("Please input the second coefficient: ")
        b=int(b)
    except:
        print("Invalid Entry!, Please enter a Integer.")
    try:
        c=input("Please input the third coefficient: ")
        c=int(c)
    except:
        print("Invalid Entry!, Please enter a Integer.")
    print()
    # Quadratic Formula.
    # b^2-4ac
    discriminant = b**2 - 4*a*c 
    # Value of discriminant.
    discriminant1 = sqrt(discriminant)
    # Positive.
    positive = (-b + discriminant1) / (2*a)
    # Negative.
    negative = (-b - discriminant1) / (2*a)
    print("The positive value is {0} and the negative value is {1}".format(positive, negative))

# Define the trigonometric function.
def trigonometric():
    import math
    trig=input("Do you want to calculate sine, cosine, or tangent?")
    if trig == 'sine' or trig == 'sin':
        a = eval(input("What is angle measure?"))
        result = math.sin(math.radians(a))
        print("The answer is" +str(round(result, 3)))
        
    elif trig == 'cos' or trig == 'cosine':
        a = eval(input("What is angle measure?"))
        result = math.sin(math.radians(b))
        print("The answer is" +str(round(result, 3)))

    elif trig == 'tangent' or trig == 'tan':
        a = eval(input("What is angle measure?"))
        result = math.sin(math.radians(b))
        print("The answer is" +str(round(result, 3)))

    else:
        print("Enter sine, cosine, or tangent")
    
# Define the question function
def Question():
        print('What would you like to do?')
        x = input("Add, Subtract, Divide, Multiply, Powers, Roots, Quadratic Formula, trigonometric, or Exit.")
        if x.lower().startswith('a'):
            x = 'test123'
            print(Addition())
            x = 'test'
        elif x.lower().startswith('d'):
            x = 'test123'
            print(Division())
            x = 'test'
        elif x.lower().startswith('m'):
            x = 'test123'
            print(Multiplication())
            x = 'test'
        elif x.lower().startswith('s'):
            x = 'test123'
            print(Subtraction())
            x = 'test'
        elif x.lower().startswith('r'):
            x = 'test123'
            print(Roots())
            x = 'test'
        elif x.lower().startswith('p'):
            x = 'test123'
            print(Powers())
            x = 'test'
        elif x.lower().startswith('q'):
            x = 'test123'
            print(quadCalc())
            x = 'test'
        elif x.lower().startswith('t'):
            x = 'test123'
            print(trigonometric())
            x = 'test'
        elif x.lower().startswith('e'):
            x = 'test'
            print(exit())
        elif x.lower().startswith('e'):
            x = 'test'
            print(exit())
        else:
            print("Please type the first letter of what you want to do.")
            print(Question())


while x == 'test':
    Question()


if __name__=="__main__":
    main()
