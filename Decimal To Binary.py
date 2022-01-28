n=int(input("Enter decimal Val"))
rem=''
while(n!=0):
    pr=n%2
    rem+=str(pr)
    n=n//2
binary=''
for j in reversed(rem):
    binary+=j
print("Binary value",binary)
    
    
