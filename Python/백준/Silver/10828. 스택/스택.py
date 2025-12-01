stack = []
n = int(input())  
x = [input().split() for _ in range(n)]

for k in x:
    if k[0] == "push":
        stack.append(k[1])
    elif k[0] == "pop":
        if len(stack) == 0:
            print("-1")
        else:
            print(stack.pop())
    elif k[0] == "size":
        print(len(stack))
    elif k[0] == "empty":
        if len(stack) == 0:
            print("1")
        else:
            print("0")
    elif k[0] == "top":
        if len(stack) == 0:
            print("-1")
        else:
            print(stack[-1])
