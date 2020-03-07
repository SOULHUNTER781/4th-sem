# Given array's Sorted so merge sort can be boiled down to merging procedure
count = 0

def merge(A,B):
    # Taking the maximum element as a reference we can store 2 no's in one index
    m = len(A)
    n = len(B)
    max_ele = A[-1]
    i = 0
    j = 0
    count = 0
    flag = False
    temp = 0
    while i < m and j < n:
        if A[i] % max_ele <= B[j] % max_ele:
            if count < n:
                B[count%n] = B[j] + (A[i]%max_ele)*max_ele
            else:
                A[count-n] = A[i] + (A[i]%max_ele)*max_ele
            i += 1
            count += 1
        else:
            if count < n:
                B[count%n] = B[j] + (A[i]%max_ele)*max_ele
            else:
                A[count-n] = A[i] + (A[i]%max_ele)*max_ele
            j += 1

    while j < n:
        B[count%n] = B[count%n] + (B[j]%max_ele)*max_ele
        j += 1
        count += 1
    while i < m:
        A[count-n] = A[count-n] + (A[i]%max_ele)*max_ele
        i += 1
        count += 1

    i = 0
    j = 0
    while i < m:
        A[i] = A[i]//max_ele
        i += 1

    while j < n:
        B[j] = B[j]//max_ele
        j += 1

#Taking the input lists
print("Enter the sorted lists ::")
A = list(map(int,input().split()))
B = list(map(int,input().split()))

# Calling the merge function
if A[-1] > B[-1]:
    merge(A,B)
else:
    merge(B,A)

for x in B:
    print(x, end = " ")
for y in A:
    print(x, end = " ")

