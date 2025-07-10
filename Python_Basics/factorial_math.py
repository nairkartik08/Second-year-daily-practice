import math
num = int(input("Enter a number: "))
if num < 0:
    print("Factorial is not defined for negative numbers.")
else:
    result = math.factorial(num)
    print(f"Factorial of {num} is {result}")
