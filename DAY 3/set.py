#Set  are unordered elements,its mutable(can be changed) and unique
#set is a collection of items
#set cannot allow duplicate
#syntax {}
my_set={1,3,4,5}
print(my_set)

# Empty set
# NB:syntax cannot have curly braces otherwise we would create a empty dictionary
empty_set = set()
print(type(empty_set))

#Wrong method
empty_set= {}
print(type(empty_set))

#creating sets with multple elements
cars={'toyota','Nissan','cayene','Bmw'}
print(len(cars))

#you can not index items in a set
#use loop to access elements in a set

#checking existance item in a set
cars={'toyota','Nissan','cayene','Bmw'}
print('Bmw' in cars)

#adding item in a set
cars={'toyota','Nissan','cayene','Bmw'}
cars.add('bently')
print(cars)

#add multiple items   using update
cars={'toyota','Nissan','cayene','Bmw'}
bike={'bajaj','pop'}
cars.update(bike)
print(cars)


#Removing an items from a set
# a) remove(item) or pop
cars.remove('toyota')
print(cars)

#deleting a item 
cars={'toyota','Nissan','cayene','Bmw'}
del cars

#convert list to set
cars=['toyota','Nissan','cayene','Bmw']
cars=set(cars)
print(cars)

#Joining sets:using union (OR)
cars={'toyota','Nissan','cayene','Bmw'}
country={'japan','Germany','italy'}
print(cars.union(country))


