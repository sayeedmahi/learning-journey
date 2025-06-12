
"""
Lecture 5: Loops in Python
"""

# -------------------- Introduction --------------------
# Loops are used to execute a block of code repeatedly.
# There are two types of loops in Python:
# 1. while loop - executes as long as a condition is True
# 2. for loop   - iterates over a sequence (like list, tuple, string, range, etc.)

# -------------------- While Loop --------------------
# Syntax: while condition:
#             # code block

x = 1
while x <= 5:
    print("hello")
    x += 1  # increment to eventually break the loop

print(x)  # shows final value after loop exits

# Counting backward
y = 10
while y >= 1:
    print(y)
    y -= 1
print("Loop ended")

# Practice 1: Print numbers from 1 to 100
a = 1
while a <= 100:
    print(a)
    a += 1

# Practice 2: Print numbers from 100 to 1
b = 100
while b >= 1:
    print(b)
    b -= 1

# Practice 3: Print multiplication table of a number
n = int(input("Enter a number: "))
c = 1
while c <= 10:
    print(n * c)
    c += 1

# Practice 4: Print squares from 1 to 10
d = 1
while d <= 10:
    print(d ** 2)
    d += 1

# Alternative (looping through a list)
list1 = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
indx = 0
while indx < len(list1):
    print(list1[indx])
    indx += 1

# Practice 5: Search for a number in a tuple
tuple1 = (1, 4, 9, 16, 25, 36, 49, 64, 81, 100)
xx = int(input("Enter number to search: "))
idx = 0
while idx < len(tuple1):
    if tuple1[idx] == xx:
        print("FOUND")
        break
    idx += 1
else:
    print("NOT FOUND")

# -------------------- Break and Continue --------------------

# break - exits the loop immediately
b = 100
while b >= 1:
    print(b)
    if b == 50:
        break
    b -= 1

# continue - skips to next iteration
ii = 0
while ii <= 10:
    if ii % 2 == 0:
        ii += 1
        continue
    print(ii)
    ii += 1

# -------------------- Nested While --------------------
outer =1
while outer <=2:
    inner =1
    while inner <=3:
        print (outer, ',', inner)
        inner +=1
    print ("Inner loop terminates")
    outer +=1
print ("Outer loop terminates")

# -------------------- For Loop --------------------
# Used for sequential iteration over sequences

list5 = [1, 2, 3, 4, 5, 6]
for el in list5:
    print(el)
else:
    print("END")

# Example with string
abc = "abusayeedmahi"
for char in abc:
    if char == "s":
        print("s found")
        break
    print(char)
else:
    print("END")

# Practice 6: Looping through a list using for loop
list10 = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
for el in list10:
    print(el)

# Practice 7: Searching in a tuple with for loop
tuple10 = (1, 4, 9, 16, 25, 36, 49, 64, 81, 100)
xy = int(input("Enter number to find: "))
for el in tuple10:
    if el == xy:
        print(el, "FOUND")
        break
    else:
        print(el)
else:
    print("END")

# -------------------- Range Function --------------------
# range(start, stop, step)
for el in range(10):
    print(el)

for el in range(0, 10):
    print(el)

for el in range(0, 10, 2):
    print(el)

# Practice 8: 1 to 100 using range
for el in range(1, 101):
    print(el)

# Practice 9: 100 to 1 using reverse step
for el in range(100, 0, -1):
    print(el)

# Practice 10: Multiplication table of n using range
nn = int(input("Enter number: "))
for el in range(1, 11):
    print(f"{nn} x {el} = {nn * el}")

# -------------------- Pass Statement --------------------
# 'pass' is used as a placeholder where code will be added later
for el in range(5):
    pass
print("We will finish the loop later")

# -------------------- More Practice --------------------

# Practice 11: Sum of first n numbers (while)
nnn = int(input("Enter n for sum: "))
xyz = 1
sum = 0
while xyz <= nnn:
    sum += xyz
    xyz += 1
print("Total sum:", sum)

# Practice 12: Factorial using for loop
nnn = int(input("Enter n for factorial: "))
fact = 1
for xyz in range(1, nnn + 1):
    fact *= xyz
print("Total factorial is:", fact)
