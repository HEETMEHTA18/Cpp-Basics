import random

# Month is known
month = 10
month_name = "October"

print("🎂 I know your birthday is in October!")

# Ask if user was born early, mid, or late in the month
timing = input("Were you born early (1–10), mid (11–20), or late (21–31)? (early/mid/late): ").lower()

# Ask if the date is odd or even
parity = input("Is your birth date an odd or even number? (odd/even): ").lower()

# Day pools based on timing
if timing == "early":
    days = [1, 5, 8, 10]
elif timing == "mid":
    days = [12, 15, 17, 18]
else:
    days = [22, 23, 28, 30]

# Filter by even or odd
if parity == "even":
    days = [day for day in days if day % 2 == 0]
elif parity == "odd":
    days = [day for day in days if day % 2 != 0]

# Make a guess
if days:
    guess_day = random.choice(days)
    print(f"\n🧠 My refined guess: {guess_day} {month_name}!")
    print("Did I get close? 😄")
else:
    print("😕 Hmm... No matching days found based on your inputs. Are you sure about the range and parity?")
