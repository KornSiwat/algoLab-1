def bubble_sort(arr): #O(N^2)
    # For every element (arranged backwards)
    for n in range(len(arr)-1, 0,-1):
        #
        for k in range(n):
            # If we come to a point to switch
            print(arr)
            print(f'{arr[k]} k:{k} n:{n}')
            if arr[k]>arr[k+1]:
                temp = arr[k]
                arr[k] = arr[k+1]
                arr[k+1] = temp

print(bubble_sort([1,3,2,4,5,4,1,2]))
