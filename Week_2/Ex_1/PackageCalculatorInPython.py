package1Weight = int(input("Enter weight for package 1: "))
package1Price = float(input("Enter price for package 1: "))
package2Weight = int(input("Enter weight for package 2: "))
package2Price = float(input("Enter price for package 2: "))

if (package1Weight / package1Price) > (package2Weight / package2Price):
    print("Package 1 is better.")
else:
    print("Package 2 is better")