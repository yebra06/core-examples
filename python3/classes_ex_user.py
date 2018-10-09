
class User:

	def __init__(self, first_name, last_name):
		# Constructor
		self.first_name = first_name
		self.last_name = last_name

	def get_full_name(self):
		# Return a users full name by concating first and last.
		return self.first_name + ' ' + self.last_name


def main():
	# Create user object and get full name.
	user = User('Mister', 'Freeze')
	print(user.get_full_name())

# Call main function.
main()

''' output
Mister Freeze
'''