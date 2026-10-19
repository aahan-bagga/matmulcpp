# naive implementation in python (bound to be slower)

matrix1 = [[1,2,3],
           [4,5,6],
           [7,8,9]]

matrix2 = [[1,2,3],
           [4,5,6],
           [7,8,9]]

matrix_out = [] # matrix_out.append(sum) ??



sum = 0
#for x in matrix1:
    #for y in matrix2:
        #for z in matrix2[y]


# iterating rows


for x in range(len(matrix1)): #every row len = 3, (0,1,2)
    for y in matrix1[x]:
        print(f"row {x}, value {y}")

print("------------------------")

for x in range(len(matrix2[0])):
    for y in matrix2[x]:
        print(f"row {x} value {y}")

# iterating cols