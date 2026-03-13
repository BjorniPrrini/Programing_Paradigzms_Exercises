odd_nums_loop = []

for i in range(1, 21):
    if i % 2 != 0:
        odd_nums_loop.append(i)

print(odd_nums_loop)

odd_nums_comprehension = [i for i in range(1, 21) if i % 2 != 0]

print(odd_nums_comprehension)