# problem, reverse a string
# solution

# suppose there is a string named john, first we should know if the strings are iterable. as strings are iterable. we'll run a loop over the string. we'll just prepend ch which is iterating in string with the new string
# how to implement

def reverse_string():
    mystring='hello'
    new_string=''
    for ch in mystring:
        new_string = ch + new_string
    print(new_string)
reverse_string()        


