# Lecture 4: Dictionary & Set in Python

"""
Dictionaries:
- A dictionary in Python is a collection of key-value pairs.
- Syntax: {key1: value1, key2: value2, ...}
- Keys must be unique and immutable (e.g., string, number, tuple)
- Values can be any data type.
- Dictionaries are unordered and mutable (you can change them after creation).
"""

# Creating and updating a dictionary
dict = {
    "name": "mahi",
    "age": 24,
    "marks": 35.5,
    "subjects": ["c", "c++", "js"],
    "topics": ("dictionary", "set")
}
print(dict)

# Overwriting a value
dict["name"] = "rafi"

# Adding a new key-value pair
dict["interests"] = ("philosophy", "memetics")
print(dict)

# Creating and modifying an empty dictionary
null_dict = {}
print(null_dict)
null_dict["name"] = "mahi"
print(null_dict)

# Capitalizing a string (string method)
srt = "i love myself"
print(srt.capitalize())

"""
Nested Dictionary:
- Dictionaries can store another dictionary as a value.
"""

students = {
    "name": "mahi",
    "subjects": {
        "phy": 95,
        "chem": 80,
        "math": 98
    }
}
print(students)
print(students["subjects"])  # Accessing nested dictionary

"""
Dictionary Methods:
- .keys() -> returns a view of all keys
- .values() -> returns a view of all values
- .items() -> returns a view of all key-value pairs as tuples
- .get(key) -> safely accesses the value by key
- .update({key: value}) -> updates or adds a key-value pair
"""

print(students.keys())
print(list(students.keys()))
print(list(students.values()))
print(list(students.items()))
items_list = list(students.items())
print(items_list[1])
print(students.get("name"))         # Safer than using []
print(students["subjects"])
students.update({"age": 16})
print(students)

"""
Sets in Python:
- A set is a collection of unordered, unique, immutable elements.
- Mutable types like lists or dicts are not allowed inside sets.
- Sets are useful to remove duplicates or perform mathematical set operations.
"""

# Defining sets
set10 = {1, 2, 2, 2, 3, 5}  # duplicates will be removed
print(set10)

# Creating an empty set (must use set(), not {})
null_set = set()
print(null_set)

"""
Set Methods:
- .add(el): Adds an element
- .remove(el): Removes specific element (error if not present)
- .clear(): Empties the set
- .pop(): Removes and returns a random item
- .union(set2): Combines all elements from both sets
- .intersection(set2): Only keeps elements common to both sets
"""

# Working with sets
set1 = {3, 5, 2, "hello", "mahi", 2}
set1.add(1)
set1.add(10)
print(set1)
set1.remove(10)
print(set1)

# clear() removes all elements
set10.clear()
print(set10)

# remove a specific item
set1.remove(1)
print(set1)

# pop() removes a random item
set1.pop()
print(set1)

# union and intersection
set2 = {3, 5, 2, "hello", "mahi", 2}
set3 = (10, 4, 3)  # tuple used to show compatibility
print(set2.union(set3))
print(set2.intersection(set3))

# --- Practice Problems ---

# 1. Store word meanings in a dictionary
dictionary5 = {
    "table": ("a piece of furniture", "list of facts & figures"),
    "cat": "a small animal"
}
print(dictionary5)

# 2. Count number of classrooms needed (unique subjects only)
subjects = {"python", "java", "C++", "python", "javascript", "java", "python", "java", "C++", "C"}
print(len(subjects))

# 3. Take marks of 3 subjects from user, store in dict
marks = {}
mathmark = int(input("Enter math mark: "))
marks.update({"math": mathmark})
engmark = int(input("Enter English mark: "))
marks.update({"eng": engmark})
bangmark = int(input("Enter Bangla mark: "))
marks.update({"bang": bangmark})
print(marks)

# 4. Store 9 and 9.0 as separate values in a set
sett = {9, "9.0"}  # one is int, another is string
print(sett)

# Alternative using tuples for type distinction
sett = {
    ("int", 9),
    ("float", 9.0)
}
print(sett)
