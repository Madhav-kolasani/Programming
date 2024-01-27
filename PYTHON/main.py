

# RANDOM MODULE
'''
import random
random_module = random.randint(1,10)
print(random_module)

random_float = random.random()
print(random_float)
'''

#...............................................................................................................

# //////      LIST     /////

'''
states = ['andra',"andra",'telangana', 'tamil', 'malayalam', 'karnataka']
states.append("Mad land") # Add an item to the end of the list
states.extend(["enjoy", "pandagoo"]) #Extend the list by appending all the items from the iterable
states.insert(0,"delhi") #Insert an item at a given position
states.remove("delhi") #Remove the first item from the list whose value is equal to x. It raises a ValueError if there is no such item.
states.pop(0) #Remove the item at the given position in the list, and return it. If no index is specified, a.pop() removes and returns the last item in the list. 
states.count(2)#Return the number of times x appears in the list.
states.clear() #Remove all items from the list. Equivalent to del a[:].
states.reverse() # Reverse the elements of the list in place.
states.copy() #Return a shallow copy of the list. Equivalent to a[:].

fruits = ["Strawberries", "Nectarines", "Apples", "Grapes", "Peaches", "Cherries", "Pears"]
vegetables = ["Spinach", "Kale", "Tomatoes", "Celery", "Potatoes"]
 
dirty_dozen = [fruits, vegetables]
 
print(dirty_dozen[1][1])

'''

#///   FUNCTIONS .............................................................................................................

# def hello(name, ela):
#     print(f"Hai ra {name}, ela vunnav {ela}")
#     #this '=' is known as keyword arguments
# hello(ela = "good",name="sardhar")


#    To FIND THE PRIME NUMBER
'''
def Check_prime(number):
    is_prime = True
    for i in range (2,number):
        if(number%i==0):
            is_prime = False
    if (number == 1):
        print("It's not a prime number")
    elif (is_prime is True):
        print("It is a prime number")
    else:
        print("It's not a prime number")
n = int(input())
Check_prime(number = n)
'''
#  //////   DICTIONARY'S   ///////

dictionary = {
    "sunny": "Hi ra ela vunnav",
    "mad": "Aa fine ra"
}
# Retrieving items from dictionary
print(dictionary["mad"])

# Adding items to the dictionary
dictionary["vamsi"] = "Hello bro's"
print(dictionary)

# Create an enpty dictionary
# empty_dictionary = {}

# Wipe an existing dictionary
dictionary = {}
print(dictionary)

# Edit an item in a dictionary
dictionary["mad"] = "em mama "
print(dictionary)

# Loop through a dictionary
for key in dictionary:
    print(key)
    print(dictionary[key])

# Nesting a List in a Dictionary
travel_log = {
    "France" : ["Paris", "Lille", "Dijon"],
    "Germany" : ["Berlin", "Hamburg", "Stuttgart"],
}

# Nesting Dictionary in a Dictionary
travel_log = {
    "France" : {"cities_visited" : ["Paris", "Lille", "Dijon"], "total_visits" : 12},
    "Germany" : {"cities_visited" : ["Berlin", "Hamburg", "Stuttgart"], "total_visits" : 5},
}

# Nesting Dictionary in a List
travel_log = [
{
    "country" : "France",
    "cities_visited" : ["Paris", "Lille", "Dijon"],
    "total_visits" : 12
},
{
    "country" : "Germany",
    "cities_visited" : ["Berlin", "Hamburg", "Stuttgart"],
    "total_visits" : 5
},
]


