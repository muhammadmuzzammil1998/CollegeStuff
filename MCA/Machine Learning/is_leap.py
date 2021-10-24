import sys

year = int(sys.argv[1])
is_leap = False
if (year % 4) == 0:
    if (year % 100) == 0:
        if (year % 400) == 0:
            is_leap = True
    else:
        is_leap = True

if is_leap:
    print("{0} is a leap year".format(year))
else:
    print("{0} is not a leap year".format(year))
