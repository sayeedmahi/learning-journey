"""
Functions in python
block of statements that perform a specific task
def func_name( parameter1, param2..):
    #some work
    return val
func_name( argument1, arg2 ..) #function call
"""
#1
def calc_sum(a,b):
    sum = a+b 
    print(sum)
    return sum
calc_sum(20,30)

#2
def sum(a,b):
    sum = a+b
    return sum
print(sum(5,10))

#3
def sum(a,b):
    return a+b
s = sum(2,3)
print(s)

"""
If no value is specified, the function returns None by default.
"""
def print_hello():
    print("hello")
o = print_hello()
print(o)

#practice: average of 3 numbers
def cal_avg(a,b,c):
    sum = a+b+c
    avg = sum /3 
    print(avg)
    return avg
cal_avg(3,4,5)
# Run Ans: 4

def cal_avg(a,b,c):
    sum = a+b+c
    avg = sum /3 
    print(avg)
    return 3
cal_avg(3,4,5)
# Run Ans: 4

def cal_avg(a,b,c):
    sum = a+b+c
    avg = sum /3
    return 3
print (cal_avg(3,4,5))
#Run Ans: 3

def cal_avg(a,b,c):
    sum = a+b+c
    avg = sum /3
    print(avg)
    return 3
print (cal_avg(3,4,5))
#Run Ans: 
# 4
# 3

"""
Functions in pythons
1. built-in functions
    print()
    len()
    type()
    range()
2. user defined functions
"""
#print() 
# #sep = " ", #end = "\n"
print("abu sayeed", end=" ") #we are breaking the line space
print("mahi")

"""
default parameters
Assigning a default value to parameter, which is used when no argument is passed.
"""
def calc_mul(a,b=3):
    print(a*b)
    return a*b
calc_mul(1) #argument 1=a

#practice 1: WAF to print the length of a list (list is the parameter)
def len_list(z):
    print(len(z))
    return (len(z))
len_list([2, 4, 5, 6, 7, 8])

#practice 2: WAF to print the elements of a list in a single line. ( list is the parameter)
y = [4, 5, "ab", "hello", 9.00]
def print_el(list):
    for item in list:
        print(item, end = " ")
print_el(y)

#practice 3: WAF to find the factorial of n. (n is the parameter)
n = int(input("enter n for factorial: "))
def print_fact(n):
    fact =1
    for xyz in range(1, n+1):
        fact= fact * xyz
    print("total factorial is: ", fact)
    return fact
print_fact(n)

#practice 4: WAF to convert USD to INR.
def usd_inr(usd_value):
    print(usd_value, "USD =", usd_value*83, "INR")
    return (usd_value*83)
usd_inr(1)

#practice 5: input: num, output: if odd: string "ODD", if even: string "EVEN"
def odd_even(num):
    if num%2==0:
        return "EVEN"
    else:
        return "ODD"
print(odd_even(3))


"""
recursion
When a function calls itself repeatedly.
kinda same as loop
#prints n to 1 backwards
"""
def show(n): #recursive function
    if (n == 0): #base case 
        return
    print(n)
    show(n-1)
    print("END") #call stack
show (5)

#recurrence relation (n! = (n-1)! * n) 
def fact(n):
    if (n==1 or n==0):
        return 1
    else:
        return n * fact(n-1)
print(fact(n))    

#practice 6: Write a recursive function to calculate the sum of first n natural numbers.
def sum(m):
    if m==0:
        return 0
    else:
        return m + sum(m-1)
print(sum(9))

#practice 7: Write a recursive function to print all elements in a list.
#Hint : use list & index as parameters.
def print_list(list, idx=0):
    if idx==len(list):
        return
    print(list[idx])
    print_list(list, idx+1)
list = ["syl", "dhk", "ctg"]
print_list(list)