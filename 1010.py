import math

try_n = input() #케이스의 개수
w_list = []
e_list = []

for i in range(int(try_n)):
    west, east = input().split(' ')
    w_list.append(west)
    e_list.append(east)
    
#print(w_list, e_list)

for i in range(int(try_n)):
    
    west_n = int(w_list[i])
    east_n = int(e_list[i])
    ch = east_n - west_n
    #print(west_n, east_n, ch)
    
    a = math.factorial(east_n)
    b = math.factorial(west_n)
    c = math.factorial(ch)

    print(int(a / (b*c)))


    