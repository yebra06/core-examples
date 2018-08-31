first_name = 'Cry'
last_name = 'Baby'
age = 10

# {} denotes a placeholder symol.
print('My name is {} I am {} years old.'.format(first_name, age))

# You can put indexes in placeholders for arguments passed to format.
# The following 2 print statements are the exact same.
print('{0} {1}'.format(first_name, last_name))
print('{1} {0}'.format(last_name, first_name))

''' output
My name is Cry I am 10 years old.
Cry Baby
Cry Baby
'''