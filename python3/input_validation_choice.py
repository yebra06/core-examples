
def show_menu():
    print('menu')
    print('1 -- Create')
    print('2 -- Retrieve')
    print('3 -- Update')
    print('4 -- Delete')
    print('5 -- Exit')

def main():
    show_menu()
    choice = None
    while choice != 5:
        choice = int(input('Enter choice: '))
        if choice == 1:
            print('Create')
        elif choice == 2:
            print('Retrieve')
        elif choice == 3:
            print('Update')
        elif choice == 4:
            print('Delete')
        elif choice == 5:
            print('Bye')
        else:
            print('Invalid choice')

main()
