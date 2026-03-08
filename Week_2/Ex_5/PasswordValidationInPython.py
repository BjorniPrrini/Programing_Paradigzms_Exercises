password = input("Enter password: ")

has_upper = False
has_number = False
has_special = False

upper_count = 0
number_count = 0
char_count = 0

if len(password) < 8 or len(password) > 20:
    print("Invalid password")
else:
    for c in password:
        if 'A' <= c <= 'Z':
            has_upper = True

            upper_count += 1

        if '0' <= c <= '9':
            has_number = True

            number_count += 1

        if c in "#$%@*":
            has_special = True

            char_count += 1

    if has_upper and has_number and has_special:
        print("Valid password")
        print(f"UpperCharacter counter: {upper_count}")
        print(f"Digits counter: {number_count}")
        print(f"Characters counter: {char_count}")
    else:
        print("Invalid password")
        print(f"UpperCharacter counter: {upper_count}")
        print(f"Digits counter: {number_count}")
        print(f"Characters counter: {char_count}")