def merge_the_tools(string, k):
    # your code goes here
    t=0
    j=0
    sub = [0] * k
    for i in range(k):
        sub[i]=[0]*(k-1)
    for i in range(1, len(string)):
        print("t= " + str(t) + "  j= " + str(j) + "  i= " + str(i))
        sub[t][j] = string[i-1]
        if i%k==0:
            t+=1
        if j==0:
            j=1
        elif j==1:
            j=0
    for i in range(k):
        print(sub[i])
            

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)