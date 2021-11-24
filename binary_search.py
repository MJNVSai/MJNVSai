'''
BINARY_SEARCH USING PYTHON
'''

# Binary search
n = int(input("enter length of the array: "))
b = []

for i in range(n):
    p = int(input("enter element{}: ".format(i + 1)))
    b.append(p)

# print("list: ",b)
key = int(input("enter the search element: "))

found = 0
high = n - 1
low = 0

# print("values are: ",high,low,mid)

while low <= high and found == 0:

    mid = (high + low) // 2

    if b[mid] == key:
        print(key, "is present at location ", mid)
        found = 1

    elif key < b[mid]:
        high = mid - 1

    elif key > b[mid]:
        low = mid + 1