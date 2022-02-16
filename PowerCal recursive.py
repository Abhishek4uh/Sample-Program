# Power Calculate using Recursion!
def PowerCalculate(n1,n2):
    if n2==0:
        return 1
    if n2==1:
        return n1
    ans=PowerCalculate(n1,n2//2)
    if n2%2==0:
        return ans*ans
    else:
        return n1*(ans*ans)

n=10
m=9
print(PowerCalculate(n,m))
