# Python Tutorial 2 — Strings & Conditional Statements

# ----------------------
# STRING BASICS
# ----------------------

# Escape sequence characters — special characters used in strings:
# \n : newline
line12 = "Hello, I am Mahi. \nI'm in my first year of undergraduate studies."
print(line12)  # Output appears in two lines

# String concatenation & length
str1 = "Mahi"
str2 = "coder"
print(str1 + str2)       # Mahi + coder = Mahicoder
print(len(str1))         # Length of "Mahi" = 4
print(len(line12))       # Includes escape characters

# ----------------------
# INDEXING
# ----------------------

line5 = "Mahi is a coder"
# Indexing starts from 0
print(line5[0])   # M
print(line5[5])   # i (space counts too)
print(len(line5)) # Total characters
print(line5[14])  # r (last character)

# ----------------------
# SLICING
# ----------------------

# Syntax: string[start:end] (end is excluded)
print(line5[10:15])      # "coder"
print(line5[0:15])       # Full string
print(line5[0:])         # From index 0 to end
print(line5[:15])        # Same as above
print(line5[0:len(line5)])  # Complete string

# Negative indexing (from end)
print(line5[-5:])        # Last 5 characters
print(line5[-15:-11])    # Substring using negative indices

# ----------------------
# STRING FUNCTIONS
# ----------------------

str3 = "i am learning python from apnacollege"
print(str3.endswith("ge"))           # True
print(str3.endswith("am"))           # False
print(str3.capitalize())             # First letter capitalized
print(str3.replace("apnacollege", "cs50p"))  # Replace word
print(str3.find("python"))           # Position of substring
print(str3.find("z"))                # Returns -1 if not found
print(str3.count("o"))               # Counts occurrences

# ----------------------
# PRACTICE 1 — Name Length
# ----------------------

str5 = input("first name: ")
print("length of my name is:", len(str5))

# ----------------------
# PRACTICE 2 — Count 'S'
# ----------------------

strS = "Shahi lives Shahi Eidgah"
print(strS.count("S"))  # Case-sensitive


# ----------------------
# INDENTATION
# ----------------------
"""
-refers to the spaces at the beginning of a code line. 
-indicates a block of code. 
-A code block (body of a condition, loop, function etc.) starts with indentation and ends with the first unindented line. 
number of spaces is up to programmer, but it has to be at least one.
"""
a = 15
if a >10:
    print ("a is greater than 10")  #indentation before print function

# ----------------------
# PRINTF FUNCTION
# ----------------------
"""Syntax: print(object(s), sep=separator, end=end, file=file, flush=flush)"""

# Keyword Argument sep 
"""Adding the keyword argument sep=<str> causes objects to be separated by the string <str> instead of the default single space. 
To squish objects together without any space between them specify sep=" """
print('foo', 42, 'bar') # foo 42 bar 
print('foo', 42, 'bar', sep='/') # foo/42/bar 
print('foo', 42, 'bar', sep='...') # foo...42...bar 

# Keyword Argument end 
"""The keyword argument end=<str> causes output to be terminated by <str> instead of the default newline."""
print('foo', end='') 
print(42, end=',') 
print('bar') 
#Output: foo42,bar


# ----------------------
# CONDITIONAL STATEMENTS
# ----------------------

# If-elif-else structure
marks = 65
if marks >= 90:
    print("grade is A")
elif marks >= 80:
    print("grade is B")
elif marks >= 70:
    print("grade is C")
else:
    print("grade is D")

# ----------------------
# MULTIPLE IFs (not elif)
# ----------------------

marks2 = 85
if marks2 >= 90:
    print("grade is A")
if marks2 < 90 and marks2 >= 80:
    print("grade is B")
if marks2 < 80 and marks2 >= 70:
    print("grade is C")
if marks2 < 70:
    print("grade is D")

# ----------------------
# ANOTHER IF-ELIF VERSION
# ----------------------

marks3 = 99
if marks3 >= 90:
    print("grade is A")
elif marks3 >= 80:
    print("grade is B")
elif marks3 >= 70:
    print("grade is C")
else:
    print("grade is D")

# ----------------------
# NESTED IF
# ----------------------

age = 80
if age >= 18:
    if age >= 70:
        print("cannot work")
    else:
        print("can work")

# ----------------------
# PRACTICE 3 — Even/Odd
# ----------------------

number = 30
if number % 2 == 0:
    print("number is even")
else:
    print("number is odd")

# ----------------------
# PRACTICE 4 — Greatest of 3
# ----------------------

number1 = int(input("first number: "))
number2 = int(input("second number: "))
number3 = int(input("third number: "))
if number1 >= number2 and number1 >= number3:
    print("greatest number is number1")
elif number2 >= number3:
    print("greatest number is number2")
else:
    print("greatest number is number3")

# ----------------------
# PRACTICE 5 — Multiple of 7
# ----------------------

number7 = int(input("number is: "))
if number7 % 7 == 0:
    print("number is a multiple of 7")
else:
    print("number is not a multiple of 7")