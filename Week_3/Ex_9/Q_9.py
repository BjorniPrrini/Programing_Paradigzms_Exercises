d = [3, 1, 3, 2, 4, 3, 5, 1, 2, 3]

filtered_list = [i for i in d if i != 3]

print(f"Removed all 3: {filtered_list}")

freq = {i: d.count(i) for i in set(d)}

print(f"Number: Count -> {freq}")