s = int(input())
remain = s
count = 0
if remain == 1 : 
    count = 1
elif remain == 2 :
    count = 1
else:
    for i in range(1,remain):
        if remain == 0 :
                break
        if remain == i :
            remain -= i
            count += 1
            break
        if (remain - i) < i :
            continue
        else:
            remain -= i
            count += 1
            
print(count)