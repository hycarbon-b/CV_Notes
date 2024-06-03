import math

fsm = [[2,3,1,0],
       [1,3,2,1],
       [2,3,3,1],
       [3,3,3,3]]

# create new matrics shape like fsm
num = math.ceil(math.log(len(fsm),2 )) # num-1 is k
bits_matrix = [[[0 for _ in range(len(fsm[1]))] for _ in range(len(fsm))] for _ in range(num)]


# Traverse the fsm matrix 
for i in range(len(fsm)):
    for j in range(len(fsm[i])):
        # get binary number of fsm[i][j]
        binary = bin(fsm[i][j])[2:]
        # fill the bits_matrix with binary number
        for k in range(len(binary)):
            bits_matrix[k][i][j] = int(binary[-k-1])
print("The input matrix is:")
for i in fsm:
    print(i)
print("\n")
for k in range(len(bits_matrix)):
    print(f"The s{k} matrix is:")
    for i in bits_matrix[k]:
        print(i)
    num_ones = sum(row.count(1) for row in bits_matrix[k])
    print(f"The count of min-terms in s{k} is {num_ones} \n")