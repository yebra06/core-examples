def main():

	# Option 1
	x = input('Enter value: ')
	while not x.isdigit():
		x = input('Enter an integer value: ')
	x = int(x)

	# Option 2
	while 1:
		try:
			y = int(input('Enter value: '))
			break
		except ValueError:
			print('Please enter an integer value.')

main()