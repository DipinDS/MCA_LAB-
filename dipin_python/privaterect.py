class Rectangle:
    def __init__(self,width=0,height=0):
      self.width = width
      self.height = height
    def area(self):
       return self.width* self.height
    def __lt__(self,other):
       return self.area()<other.area()
       
r1=Rectangle(3,4)
r2=Rectangle(4,6)

if(r1<r2):
 print("the area of rctangle 1 less than rectangle 2")
else:
 print("the area of rectangle 2 less than rectangle 1")        
           
      
