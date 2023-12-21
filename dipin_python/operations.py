a=int(input("enter a number :"))
b=int(input("enter a second number :"))
while(1):
	ch=int(input("enter your choice: \n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulus\n"))
	
	if (ch==1):
		sum=a+b
		print(sum)
	elif (ch==2):
		sum=a-b
		print(sum)
	elif (ch==3):
		sum=a*b
		print(sum)
	elif (ch==4):
		sum=a/b
		print(sum)
	elif (ch==5):
		sum=a%b
		print(sum)
	else:
		print("invalid choice")

