amount = int(input("Enter amount in liters: "))

if amount <= 4000:
    price = 10
else:
    extra = amount - 4000
    price = 10 + 0.005 * extra

print("Bill: ", price)