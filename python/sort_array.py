
def sortArray() :
    a = [1,2,3,4,5,6,7,7,12,45]
    b = [5,5,6,8,9,10,24,18]

    newArray =a+b
    for i in range(len(newArray)-1):
        for j in range(len(newArray)-1,i,-1):
            if newArray[i]==newArray[j]:
                newArray.pop(j)
    
         
    print('merged arrays:',newArray)
    for x in range(len(newArray)):
        for k in range(len(newArray)):
            if (newArray[x]<newArray[k]):
                newArray[x], newArray[k]=newArray[k],newArray[x]
    
    print('sorted array:', newArray)       

sortArray()