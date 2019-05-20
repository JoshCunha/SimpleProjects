def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    return x / y

valid_operations = ['add',
                    'subtract',
                    'multiply',
                    'divide']
while True:
    print("\n-------------------------------------------------------------------\n")
    operation = input("Enter mathematical operation: ").lower()

    if operation not in valid_operations:
        print('Value entered is not a valid operation. Valid operations are: ')
        for operation in valid_operations:
            print("\t" + operation)
    else:
        break

numbers = input("Enter the two numbers to () seperated by space: ").format(operation)
number_list = numbers.split(' ')
num1 = int(number_list[0])
num2 = int(number_list[1])

if operation == "add":
    print("{} + {} = {}".format(num1, num2, add(num1, num2)))
elif operation == "subtract":
    print("{} - {} = {}".format(num1, num2, subtract(num1, num2)))
elif operation == "multiply":
    print("{} * {} = {}".format(num1, num2, multiply(num1, num2)))
else:
    print("{} / {} = {}".format(num1, num2, divide(num1, num2)))
