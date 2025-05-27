"""
Lecture 3: Lists and Tuples
---------------------------
In this lecture, we explore two foundational Python data structures: Lists and Tuples.
Lists are ordered, mutable collections that can hold a mix of data types.
Tuples are similar to lists but are immutable.
"""

# --------------------------------------
# Lists: Ordered and Mutable Collections
# --------------------------------------

# Creating lists with different data types
marks = [35, 75.5, 90, 85.5]  # A list of numbers (int and float)
a = ["mahi", 21, "metro", 25.5, 5, "cse"]  # A mixed-type list

# Accessing list elements using indexing (0-based)
print(marks[0])  # First element of marks list
print(type(marks))  # <class 'list'>
print(len(a))  # Length of list 'a'

# Lists are mutable: you can change their content
a[2] = "leading"  # Changing the third element
print(a)  # Updated list

# ----------------
# List Slicing
# ----------------
marks4 = [87, 64, 33, 95, 76]

# Slicing returns a sublist
print(marks4[0:4])       # Elements from index 0 to 3
print(marks4[:4])        # Same as above (starts from beginning)
print(marks4[0:])        # From index 0 to end
print(marks4[0:len(marks4)])  # Full list using slicing
print(marks4[-2:-1])     # Negative indexing: second last element only

# ----------------
# List Methods
# ----------------
list1 = [12, 3, 5, 8]

# append(): Adds an element to the end
list1.append(6)
print("After append:", list1)

# sort(): Sorts in ascending order (default)
list1.sort()
print("Ascending sort:", list1)

# sort(reverse=True): Descending order
list1.sort(reverse=True)
print("Descending sort:", list1)

# Sorting a list of characters
listchar = ["a", "b", "f", "g", "c"]
listchar.sort()
print("Sorted characters:", listchar)
listchar.sort(reverse=True)
print("Descending sorted characters:", listchar)

# reverse(): Reverses the list order
list2 = [12, 3, 5, 8]
list2.reverse()
print("Reversed:", list2)

# insert(): Insert at a specific index
list2.insert(2, 9)  # Insert 9 at index 2
print("After insert:", list2)

# remove(): Removes the first occurrence of the element
list2.remove(5)
print("After removing 5:", list2)

# pop(): Removes element at specified index (default is last)
list2.pop(0)  # Remove first element
print("After popping index 0:", list2)

# ----------------
# Tuples: Immutable Lists
# ----------------
# Tuples are like lists but cannot be changed after creation

tup = (3, 4, 5, 6)
print("Tuple:", tup)

# Tuple with one element must have a comma
tup1 = (2,)
print("Single-element tuple:", tup1)

# Tuple slicing
print("Tuple slice (2:4):", tup[2:4])

# Tuple methods
print("Index of 3:", tup.index(3))  # Returns the index of the first occurrence
print("Count of 5:", tup.count(5))  # Returns how many times 5 appears

# --------------------------
# Practice Problems
# --------------------------

# Practice 1: Input 3 favorite movies from the user
favm = []
mov1 = input("1st movie: ")
mov2 = input("2nd movie: ")
mov3 = input("3rd movie: ")
favm.append(mov1)
favm.append(mov2)
favm.append(mov3)
print("Favorite movies list:", favm)

# Practice 2: Check if a list is a palindrome
list1 = [1, 2, 3, 2, 1]
copylist1 = list1.copy()  # Creating a copy to preserve original list
copylist1.reverse()       # Reversing the copy
if list1 == copylist1:
    print("The list is a palindrome.")
else:
    print("The list is not a palindrome.")

# Practice 3: Count how many "A" grades are in the tuple
tup2 = ("C", "D", "A", "A", "B", "B", "A")
print("Count of A grades:", tup2.count("A"))

# Practice 4: Sort and display a list of grades
list3 = ["C", "D", "A", "A", "B", "B", "A"]
list3.sort()  # Sorting in ascending (alphabetical) order
print("Sorted grades:", list3)
