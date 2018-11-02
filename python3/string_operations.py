
# Remove extra spaces from left and right side.
data = '   hi hello   '
print(data.strip())

# Turn a string into a list from spaces.
data = 'hi hello i am fred'
list_data = data.split()
print(list_data)

# String to a list separated by a comma.
data = 'firstname,lastname,23,may,1995'
list_data = data.split(',')
print(list_data)

# Remove all spaces in a string.
data = ' string without  spaces   '
new_data = data.replace(' ', '')
print(new_data)

# Count chars in string w/ and w/o spaces.
data = ' a b c '
print(data)
num_chars = len(data)
print('chars w/ spaces: ', num_chars)
num_chars = len(data.replace(' ', ''))
print('chars w/o spaces: ', num_chars)


''' output
hi hello
['hi', 'hello', 'i', 'am', 'fred']
['firstname', 'lastname', '23', 'may', '1995']
stringwithoutspaces
 a b c 
chars w/ spaces:  7
chars w/o spaces:  3
'''