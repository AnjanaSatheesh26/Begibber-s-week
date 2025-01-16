import random

def generate(low, high):
    return random.randint(low, high)


low = int(input("Enter the starting limit:"))
high = int(input("Enter the ending limit:"))
random_number = generate(low, high)
print(f"Generated random number between {low} and {high}: {random_number}")
