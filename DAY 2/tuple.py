#Python Tuble Data Types
#Collection data type are ordered and immutable(cannot be changed) 
#syntax tuples(),count() to count number,index()find 
empty_tuple=()
print(len(empty_tuple))
print(type(empty_tuple))

#creating tuple with a single value
single_tuple=(1 ,)
print(type(single_tuple))

#Tuples with initial values
fruits =("Mangoes","Bananas","Grapes","Pawpaw",'Oranges')
print (fruits)

#Tuple can be converted into a list
fruits=('bananas','orange')
fruits=list(fruits)
print(fruits)
fruits= tuple(fruits)
print (fruits)

#checking existance of an item in a tuple
fruits=('bananas','orange')
print('orange' in fruits)#True
print('apple' in fruits)#False

#Joining Tuple using plus operator (concatinate)
fruits=('bananas','orange')
vegetable=('tomato','potato')
fruits_and_vegetable=fruits+vegetable
print(fruits_and_vegetable)

#counting the ocurrance of items in tuple
fruits=('bananas','orange')
print(fruits.count('orange'))


#index() returns the position of a specific element within a tuple
fruits=('bananas','orange')
print(fruits.index('orange'))


#slicing tuple returning a subset of a tuple
#syntax tuple [tuple[start:end+1]]
fruits=('bananas','orange','apple')
orange_and_apple =fruits[1:3]
print(orange_and_apple)




