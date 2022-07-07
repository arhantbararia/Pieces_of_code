store = []

def storeSubArrays(arr, start, end):
     
    # Stop if we have reached the end of the array   
    if end == len(arr):
        return
     
    # Increment the end point and start from 0
    elif start > end:
        return printSubArrays(arr, 0, end + 1)
         
    # Print the subarray and increment the starting
    # point
    else:
        store.append(arr[start : end + 1])
        return printSubArrays(arr, start + 1, end)

