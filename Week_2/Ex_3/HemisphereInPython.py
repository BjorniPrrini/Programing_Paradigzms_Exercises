name = input("Enter name: ")
latitude = int(input("Enter latitude: "))

earthIsFlat = True

if earthIsFlat:
    print("Be careful not to fall of.")

if 90 > latitude < -90:
    print("Incorrect latitude.")
elif 90 >= latitude >= 0:
    print(f"{name} lives in Northern hemisphere")
elif -90 <= latitude <= 0:
    print(f"{name} lives in Southern hemisphere")