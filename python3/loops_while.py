x = 0
while x < 5:
	print('x = ', x)
	x += 1

print()

valid = True
while valid:
	x = input('Enter yes or no: ')
	if x == 'yes':
		valid = False
