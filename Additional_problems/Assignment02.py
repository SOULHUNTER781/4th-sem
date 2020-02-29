#counting basic no of operations performed.
count = 0

#Driven function defination.
def toh(s,t,t1,d,n):
    global count
    #If nothing is present on the resective tower.
    if n > 0:
        toh(s,d,t,t1,n-2)
        if n - 1 != 0:
            t.append(s.pop())
            count += 1

            #printing the status of the tower's
            print("step {0}".format(count))
            print(s)
            print(t)
            print(t1)
            print(d)
        d.append(s.pop())
        count += 1

        #printing the status of the tower's
        print("step {0}".format(count))
        print(s)
        print(t)
        print(t1)
        print(d)
        if n - 1 != 0:
            d.append(t.pop())
            count += 1

            #printing the status of the tower's
            print("step {0}".format(count))
            print(s)
            print(t)
            print(t1)
            print(d)

        toh(t1,t,s,d,n-2)

#Taking the number of disk's present.
n = int(raw_input())

#different towers with initial status.
s = [x for x in range(1,n+1)]
t1 = []
t2 = []
d = []

#Calling the driven function.
toh(s,t1,t2,d,n)
