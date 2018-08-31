# File access modes
# r 	- read only
# r+	- read & write
# w 	- write only, overwrite existing file, creates new file if doesnt exist.
# w+	- read & write, overwrites existing file, creates new file if doesnt exist
# a 	- append to end of file, creates new file if doesnt exist
# a+	- append & read, creates new file if doesnt exist
# rb	- read only binary format
# rb+	- read & write binary format
# wb 	- write only binary format, overwrites existing file, creates new file if doesnt exist
# wb+	- read & write binary format, overwrites existing file, creates new file if doesnt exist
# ab	- append to end of file binary format, creates new file if doesnt exist
# ab+	- append & read binary format, creates new file if doesnt exist

# Write to a new file.
file_name = 'new_file.txt'
with open(file_name, 'w') as f:
    f.write('line 1:')
    f.write('line 2:')

# Read from file we just created and print contents.
with open(file_name, 'r') as lines:
	for line in lines:
		print(line)

''' output
line 1:line 2
'''

# Note check directory for file called new_file.txt
