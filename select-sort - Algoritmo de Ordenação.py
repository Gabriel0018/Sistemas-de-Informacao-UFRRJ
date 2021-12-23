array = [3,0,1,8,7,2,5,4,9,6]
print(array)

def sorted(array):
    for index in range(0, len(array)):
        min_index = index

        for right in range(index + 1, len(array)):
            if array[right] < array[min_index]:
                min_index = right

        array[index], array[min_index] = array[min_index], array[index]
        
sorted(array)
print(array)

