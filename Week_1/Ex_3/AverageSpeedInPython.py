miles = int(input("Enter miles: "))
hours = int(input("Enter hours: "))
minutes = int(input("Enter minutes: "))
seconds = int(input("Enter seconds: "))

time = hours + minutes / 60 + seconds / 3600
km = miles * 1.6

print("AVG Speed: ", km / time)