"""
country = ["Bangladesh", "Nepal", "India"]
country1 = ["USA", "UK", "Africa"]
print(country)
print(type(country))
print(country + country1)

def add(a, b):
    return("Addition is= " + str(a+b))



print(add(5, 2))

"""

def factorial(num):
    result = 1
    for i in range(1,num+1):
        result *= i
    print("Factorial of " + str(num) + " is: " + str(result))

factorial(5)


def fibonacci(num):
    result = 0
    temp1 = 1
    temp2 = 0
    for i in range(1, num+1):
        if(i == 1):
            print(0)
        result = temp1+temp2
        temp1 = temp2
        temp2 = result
        print(result)

fibonacci(6)
    

