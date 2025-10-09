w, h = map(int, input().split())
if w == h : 
    if w == 2:
        print(3)
    else : 
        print((w-1)*(w+1))
else :
    print(w*h - 1)