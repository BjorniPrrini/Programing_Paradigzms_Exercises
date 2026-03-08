number_to_end = int(input("Enter number to end: "))

pos_number = 0
neg_number = 0
sum_numbers = 0
count = 0

while True:
    num = int(input("Enter number: "))

    if num == number_to_end:
        break

    if num >= 0:
        pos_number += 1
    else:
        neg_number += 1
    
    sum_numbers += num

    count += 1

print(f"Positive numbers: {pos_number}")
print(f"Negative numbers: {neg_number}")
print(f"Sum numbers: {sum_numbers}")
print(f"Avg numbers: {sum_numbers / count}")