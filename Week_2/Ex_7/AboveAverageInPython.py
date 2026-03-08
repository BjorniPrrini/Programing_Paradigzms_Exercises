certain_grade = int(input("Enter a certain grade: "))
num_grades = int(input("Enter number of grades: "))

count = 0
sum_grades = 0

for i in range(num_grades):
    grade = int(input("Enter grade: "))

    if grade > certain_grade:
        count += 1

        sum_grades += grade
    
print(f"Grades greater than input: {count}")
print(f"Sum of grades greater than input: {sum_grades}")