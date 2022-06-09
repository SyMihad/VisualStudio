def print_formatted(number):
    # your code goes here
    length = len(bin(number)[2:])
    for i in range(1,number+1):
        print(str(i).rjust(length, " "), str(oct(i)[2:]).rjust(length, " "), str((hex(i)[2:]).upper()).rjust(length, " "), str(bin(i)[2:]).rjust(length, " "))
    

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)