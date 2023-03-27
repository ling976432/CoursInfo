
#EXERCICE1
name=(input())
age=(input())
city=(input())
field=(input())
print("My name is ",name,". I am ",age," years old and live in ",city,". I am studying ",field,".")
#EXERCICE2
for i in range(1,51):
    if i%5==0:
        print("fizz\n")
    else:
        print(i);print("\n")
#EXERCICE3
print("Your age ?")
user_age=int(input())
if user_age<14:
    print("You are not old enough to vote or drink or drive or work.")
if user_age>21:
    print("You are old enough to vote and drink and drive and work.")
if 18<=user_age<21:
    print("You are old enough to vote and drive and work but not drink")
if 16<=user_age<18:
    print("You are old enough to and drive and work but not drink or vote")
if 14<=user_age<16:
    print("You are old enough to work but not drink or vote or drive")
#EXERCICE4
candidates = ['Alice', 'Bob', 'Cathy', 'David', 'Eva', 'Frank', 'Grace', 'Henry', 'Isaac', 'James', 'Kristin', 'Laura']
current_employees = ['Cathy', 'Susan', 'Frank', 'Carrie', 'Tina', 'Elizabeth']
priority_interview=[]
for i in range(0,len(candidates)):
    for j in range(0,len(current_employees)):
        if candidates[i]==current_employees[j]:
            priority_interview.append(candidates[i])

print(priority_interview)
#EXERCICE5A
valid_usernames=[]
invalid_usernames=[]
usernames = ["AliceGr33n", "BobBrown", "CathyWhite", "David_89",
            "EvaMartin", "Frank$07", "GJohnson", "Henry&44", "IslaParker", 
            "JackSmith", "Kate#92", "LeoAdams", "MiaRoberts", "NinaW", "Oliver21*",
            "PaulaTayl0r", "Quincy$11", "RosaLopez", "St3v3Thomas", "Tina@45"]
for i in range(0,len(usernames)):
    if usernames[i].isalpha()==True:
        valid_usernames.append(usernames[i])
    else:
        invalid_usernames.append(usernames[i])
        
print(valid_usernames)
        
#EXERCICE5B
import random
temp=random.randint(0,5)
if temp==0:
    print("Rouge")
if temp==1:
    print("Vert")
if temp==2:
    print("bleu")
if temp==3:
    print("orange")
if temp==4:
    print("rose")




