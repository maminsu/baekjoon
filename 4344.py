C = int(input())
for i in range(C):
    A list(map(int,input().split()))
    everage = float(sum(A[:1]))/float(A[0])
    count = 0
    for j in A[:1]:
        if j >everage:
            count += 1
    print("%.3f%%" % round(float(100*count)/float(A[:0]),3))
