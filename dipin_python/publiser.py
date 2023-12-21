class Publiser:
     pass 
class Book(Publiser):
     def __init__(self,title,author):
         self.title=title
         self.author=author
     def Display(self):
         print(self.title,' ',self.author)
class Python(Book):
     def __init__(self,title,author,price,pages):             
         super().__init__(title,author)
         self.price=price
         self.pages=pages
     def Display(self):
         super().Display()
         print(self.price,' ',self.pages)
py1=Python('Python','Master','25','100')
py1.Display()         
                
