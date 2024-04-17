in1 = int(input())


for x in range(in1):
    a = input()
    b = input()
    contains = []
    for y in a:
        if y not in contains:
            contains.append(y)
    poss = False
    for y in b:
        if y in contains:
            poss = True
            break
    if poss:
        print("YES")
    else:
        print("NO")
    				   			     			  	  		