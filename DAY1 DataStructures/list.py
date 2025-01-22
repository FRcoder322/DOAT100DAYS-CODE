#list are used to stored multiple items in a single variable
#syntax []
my_list=['Apple','Grapes','Mangoes']
print(my_list)

#list are ordered,mutable(can change) allows duplicate values
list1 =['Apple','oranges','orange']
list2 =['mary','caleb','sandra']
list3 =['True','False','True']
print(list1)
print(list2)
print(list3)

#list contain diferent data type
list4 =['abs','sandra','True']
print(list4)



#List items are indexed and you can access them by referring to the index number:
thislist = ["apple", "banana", "cherry"]
print(thislist[1])

#Check if Item Exists
#To determine if a specified item is present in a list use the in keyword:

thislist = ["apple", "banana", "cherry"]
if "apple" in thislist:
  print("Yes, 'apple' is in the fruits list")