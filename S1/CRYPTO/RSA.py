import random
import math
 
 
def isPrime(n):
     
    if n%2==0:
        print(0)
        return 0
    else:
        d=3
        sqrtn=math.ceil(math.sqrt(n)) 
        while d<=sqrtn: 
            if n%d==0:
                print(0)
                return 0
            else :
                a=1
            d=d+2
        if a==1:
            print(1)
            return 1


def GenPrime(n):
    rand=random.getrandbits(n)
    while isPrime(rand)!=1:
        rand=random.getrandbits(n)
    return rand



def whoisgreater(a,b):
    if a>b:
        return a
    else :
        return b
    
    
def invmod(a,b):
    for x in range(1,b):
        if(((a%b)*x%b)% b ==1):
            return x

def setup(n):
    p=GenPrime(n)
    q=GenPrime(n)
    n=p*q
    maxpq=whoisgreater(p,q)
    phi=(p-1)*(q-1)
    e=2
    while math.gcd(e,phi)==1:
        public=e
        e=e+1
    private=invmod(public,phi)
    
    

    


print(d)











