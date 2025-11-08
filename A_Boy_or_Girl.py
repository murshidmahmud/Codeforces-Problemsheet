name = input()
# num = len(set(name))

num1 = set(name)
num = len(num1)

if num%2==0:
    print("CHAT WITH HER!")

else:
    print("IGNORE HIM!")