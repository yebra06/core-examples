# Sum and avg of a list
l = [1,2,3]
print('sum of {} is {}'.format(l, sum(l)))
print('avg of {} is {}'.format(l, sum(l)/len(l)))

# Sum and avg of dict
d = {'person1': 1, 'person2': 2, 'person3': 3}
print('\nsum of {} is {}'.format(d, sum(d.values())))
print('avg of {} is {}'.format(l, sum(d.values())/len(d)))


''' output
sum of [1, 2, 3] is 6
avg of [1, 2, 3] is 2.0

sum of {'person1': 1, 'person2': 2, 'person3': 3} is 6
avg of [1, 2, 3] is 2.0
'''
