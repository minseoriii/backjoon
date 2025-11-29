a = 300
b = 60
c = 10
t = int(input())
def timer(t):
    button_a = 0
    button_b = 0
    button_c = 0 
    while t >= a :
        button_a = button_a + 1
        t = t - a
    while t >= b :
        button_b = button_b + 1
        t = t - b
    while t >= c :
        button_c = button_c + 1
        t = t - c
    
    if t == 0:
        print(button_a, button_b, button_c)
    else : 
        print(-1)

timer(t)
