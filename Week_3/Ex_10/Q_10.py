e = (101, "cs", "Alice", 3.8, True)

print(f"Second element: {e[1]}, last element: {e[len(e) - 1]}")

print(f"Slice 4 first elements: {e[4:]}")

e[1] = "IT"

print(e)