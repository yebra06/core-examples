# Create an empty dictionary
people = {}
name = 'jon'
age = 20
name2 = 'aly'
age2 = 21

# Insert an entry into dict.
people[name] = age
people[name2] = age2
print(people)

# Add an entry.
people.update({'fred': 24})
print(people)

# Iterate the dictionaries keys and values.
print('\nDisplaying dictionary data')
for name, age in people.items():
	print('name: ', name, ' age: ', age)

# Iterate the dicts keys.
print('\nDisplaying the dictionary keys')
for key in people.keys():
	print('name: ', key)

# Iterate the dicts values.
print('\nDisplaying the dictionary values')
for val in people.values():
	print('age: ', val)

# Sum and average values.
print('\nDisplaying dictionary stats')
print('sum of ages: ', sum(people.values()))
print('avg of ages: ', sum(people.values())/len(people))


''' output
{'jon': 20, 'aly': 21}
{'jon': 20, 'aly': 21, 'fred': 24}

Displaying dictionary data
name:  jon  age:  20
name:  aly  age:  21
name:  fred  age:  24

Displaying the dictionary keys
name:  jon
name:  aly
name:  fred

Displaying the dictionary values
age:  20
age:  21
age:  24

Displaying dictionary stats
sum of ages:  65
avg of ages:  21.666666666666668
'''
