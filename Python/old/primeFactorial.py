def isPrime(n):
    count=0
    for i in range(1,n+1):
        if n % i == 0:
            count+=1
    if count == 2:
        return True
    else:
        return False
num = int(input())
factorial=1
primeResult = isPrime
if primeResult(num) == True:
    for i in range(num, 0, -1):
        factorial *= i
    print("Factorial= " + str(factorial))
else:
    print("Error! Not a prime number")