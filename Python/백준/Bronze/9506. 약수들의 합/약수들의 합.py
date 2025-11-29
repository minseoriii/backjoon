flag = 1
while flag :
    n = int(input())
    l = []
    count = 0 
    factor = ''
    if n == -1 : 
        flag = 0
        break
    for i in range(1,n):
        if n % i == 0:
            l.append(i)
    
    l.sort()
    for i in l : 
        count = count + i
    
    if n == count : 
            for i in l:
                     factor = factor + str(i) 
                     if i != l[-1]:
                        factor = factor + " + "
            print(n,"=",factor)
    else : 
            print(n,"is NOT perfect.")