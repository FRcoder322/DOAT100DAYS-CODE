#Dictionaries are collection of data type in python stored in key-value 
#keys are immutable
#values are mutable
#syntax {} with key-value pairs separated by :
#use cases
    #storing structured data
    #Mapping unique key to values
    #working with JSON 
    
# Creating an empty dictionary
# syntax
empty_dict = {}
print(type(empty_dict))
print(len(empty_dict))

person = {
    'first_name':'Asabeneh',
    'last_name':'Yetayeh',
   'age':250,
   'country':'Finland',
   'is_marred':True,
   'skills':['JavaScript', 'React', 'Node', 'MongoDB', 'Python'],
    'address':{
   'street':'Space street',
    'zipcode':'02210'
  }
}

print(person['first_name']) #Asabeneh



# Tabled Data in Dictionaries<img src="https://www.plus2net.com/sql_tutorial/images/table.jpg">
employees_record ={
    'Empno':['001','002','003'],
    'Name':['Sandy','Bob','Cooper'],
    'Age':[23,34,24],
    'Depart':['IT','Finance','Admin'],
    'Salary':[10000,2600,5670]
}
