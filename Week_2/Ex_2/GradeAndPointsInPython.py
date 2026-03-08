points = int(input("Enter points: "))

if 49 >= points >= 0:
    print("You got 0, FF")
elif 59 >= points >= 50:
    print("You got 0.5, FD")
elif 64 >= points >= 60:
    print("You got 1, DD")
elif 69 >= points >= 65:
    print("You got 1.5, DC")
elif 74 >= points >= 70:
    print("You got 2, CC")
elif 79 >= points >= 70:
    print("You got 2.5, CB")
elif 84 >= points >= 80:
    print("You got 3, BB")
elif 89 >= points >= 85:
    print("You got 3.5, BA")
elif 100 >= points >= 90:
    print("You got 4, AA")