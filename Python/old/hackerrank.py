"""
print ([[a,b,c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if a + b + c != n ])

x, y, z, n = int(input()), int(input()), int(input()), int(input())
print ([[a,b,c] for a in range(0,x+1) for b in range(0,y+1) for c in range(0,z+1) if a + b + c != n ])



if __name__ == '__main__':
    n = int(input())
    arr = list(set(map(int, input().split())))
    print(arr)    
 
   largest = secondLargest = -100
    for x in arr:
        if x > secondLargest or x > largest:
            if x > largest :
                temp = largest
                largest = x
            elif temp > secondLargest :
                secondLargest = temp
            elif x > secondLargest and x != largest:
                secondLargest = x
    print(secondLargest)
     """
    
if __name__ == '__main__':
    N = int(input().strip())
    mem = []
    for _ in range(N):
        args = input().strip().split(" ")
        if args[0] == "insert":
            mem.insert(int(args[1], int(args[2])))
        elif args[0] == "print":
            print(mem)
        elif args[0] == "remove":
            mem.remove(int(args[1]))
        elif args[0] == "append":
            mem.append(int(args[0]))
        elif args[0] == "sort":
            mem.sort()
        elif args[0] == "pop":
            mem.pop()
        elif args[0] == "reverse":
            mem.reverse()
    print(mem)