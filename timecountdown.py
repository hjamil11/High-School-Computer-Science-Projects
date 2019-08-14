######################
## Count Down Timer ##
######################

# cntDwn.py
# Written By: Hamad Ahmed
# Nov 28, 2017
# Last update: Nov 28, 2017

# Creates a program that will count down time

##################

import time

while True:
    print("\n\n\n")
    try:
        hours= int(input("Enter the starting hours: "))
        if hours >= 0:
            break
        else:
            print("Invalid Entry")
            print("Please enter a valid number")
            continue
    except:
        print("Invalid Entry")
        print("Please enter a valid number")
        continue

while True:
    print("\n\n\n")
    try:
        minutes= int(input("Enter the starting minutes: "))
        if minutes >= 0:
            break
        else:
            print("Invalid Entry")
            print("Please enter a valid number")
            continue
    except:
        print("Invalid Entry")
        print("Please enter a valid number")
        continue

while True:
    print("\n\n\n")
    try:
        seconds= int(input("Enter the starting seconds: "))
        if seconds >= 0:
            break
        else:
            print("Invalid Entry")
            print("Please enter a valid number")
            continue
    except:
        print("Invalid Entry")
        print("Please enter a valid number")
        continue




for hours in range(hours,-1,-1):
    for minutes in range(minutes,-1,-1):
        for seconds in range(seconds,-1,-1):
            print(hours,":",minutes,":",seconds)
            time.sleep(1)
        seconds = 59
    minutes = 59
