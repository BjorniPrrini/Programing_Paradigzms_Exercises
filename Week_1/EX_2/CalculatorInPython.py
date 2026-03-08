import math

num1 = float(input("Enter number 1: "))
num2 = float(input("Enter number 2: "))
power = int(input("Enter power: "))
root = int(input("Enter root: "))

print("Addition:", num1 + num2)
print("Subtraction:", num1 - num2)
print("Multiplication:", num1 * num2)

if num2 != 0:
    print("Division:", num1 / num2)
else:
    print("Not divisible by 0")

print(f"Sum in power {power}:", math.pow(num1 + num2, power))
print(f"Root in {root}:", math.pow(num1 * num2, 1 / root))