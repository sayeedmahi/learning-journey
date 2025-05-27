"""
Python Tutorial 1 – Variables, Data Types, and Basic I/O
This file includes detailed explanations, practical examples, and beginner-level concepts in Python.
"""

# --- PRINT STATEMENTS ---
# Print function is used to display output on the console
print("hello world.")  # Prints a basic string
print("it's mahi.")  # Handles apostrophes correctly with double quotes
print("hello world.", "it's mahi")  # Multiple strings separated by space

# --- VARIABLES AND DATA TYPES ---
# Variables store data values. They are created when you assign a value.
name = "mahi"             # str: string data type
age = 20                  # int: integer data type
hobbies = "coding"        # str
price = 27.34             # float: decimal number
condition = True          # bool: boolean (True or False)
M = None                  # NoneType: represents absence of value

# Displaying values and descriptions
print(name)
print(age)
print("my name is:", name)
print("my age is:", age)
print("my hobby is", hobbies)
print("your statement is:", condition)

# Checking types using type()
print(type(name))         # Output: <class 'str'>
print(type(age))          # Output: <class 'int'>
print(type(price))        # Output: <class 'float'>
print(type(condition))    # Output: <class 'bool'>
print(type(M))            # Output: <class 'NoneType'>

# --- SIMPLE ARITHMETIC OPERATIONS ---
a = 300
b = 100
print(a + b)              # Addition: 400
print(a - b)              # Subtraction: 200

# --- OPERATORS IN PYTHON ---
print(a % b)              # Modulus: remainder = 0
print(a ** b)             # Exponentiation: a^b (large number)
print(a == b)             # Equality check: False
print(a != b)             # Not equal: True
print(a >= b)             # Greater than or equal: True

# --- ASSIGNMENT OPERATORS ---
num = 10
num += 10                # Equivalent to: num = num + 10
num2 = num + 10
print(num2)              # Output: 30

# --- TYPE CONVERSION ---
# Useful when taking inputs or changing data types
b = "3"
c = int(b)               # Converts string to int
a = 2
d = str(a)               # Converts int to string

# --- INPUT FROM USER ---
# input() takes string input; use int() or float() to convert
name = input("your name is: ")
age = int(input("your age is: "))
mark = float(input("your mark is: "))
print(type(mark))        # Shows the type of 'mark'
print("name is", name)
print("age is:", age)
print("mark is:", mark)

# --- PRACTICE PROBLEMS ---

# 1. Sum of two numbers
first = int(input("first number: "))
second = int(input("second number: "))
print("the sum is", first + second)

# 2. Area of a square (with two methods)
side1 = int(input("side 1 measurement: "))
side2 = int(input("side 2 measurement: "))
print("area measurement (manual):", side1 * side2)
area = side1 ** 2
print("area measurement (square formula):", area)

# 3. Average of two floating-point numbers
number1 = float(input("first number: "))
number2 = float(input("second number: "))
average = (number1 + number2) / 2
print("average is:", average)

# 4. Check if one number is greater than or equal to another
a = int(input("first number: "))
b = int(input("second number: "))
print(a >= b)             # Returns True or False
