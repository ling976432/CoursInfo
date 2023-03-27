def pgcd(a,b) :  
   while a%b != 0 : 
      a, b = b, a%b 
   return b



a = 12
b=143


print(pgcd(a,b))