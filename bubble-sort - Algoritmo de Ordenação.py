alist = [3,0,1,8,7,2,5,4,6,9]
print(alist) 

def bubbleSort(alist):
    for passnum in range(len(alist)-1,0,-1):
        for i in range(passnum):
            if alist[i]>alist[i+1]:
                temp = alist[i]
                alist[i] = alist[i+1]
                alist[i+1] = temp

bubbleSort(alist)
print(alist)




