# Create a 2x3 matrix.
rows = 3
cols = 4

# Fill matrix with 0s --- long way.
matrix = [0] * rows
for i in range(rows):
	matrix[i] = [0] * cols

# Fill matrix with 10s --- short way.

# Display matrix
for row in matrix:
	print(row)
print()

# Change all values in matrix.
for row in range(rows):
	for col in range(cols):
		matrix[row][col] = 1

# Display matrix
for row in matrix:
	print(row)
print()

# Change value in first row second column.
matrix[0][1] = 10

# Display matrix
for row in matrix:
	print(row)
print()
