class Time:
    def __init__(self,hours=0,minute=0,seconds=0):
       self.hours=hours
       self.minute=minute
       self.seconds=seconds
   
    def __add__(self,other):
     total=3600 * self.hours + 60* self.minute + self.seconds +3600* other.hours+other.minute*60+other.seconds
     return Time(total//3600,(total%3600)//60,total%60)
     
    def __str__(self):
      return f"{self.hours}:hrs {self.minute}:min {self.seconds}:sec"
     
time1=Time(1,4,23)
time2=Time(3,45,7)

total_time=time1+time2
print(f"the sum time1 and time2 is:{total_time}")

        
       
