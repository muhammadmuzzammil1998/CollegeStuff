import sys

x = int(sys.argv[1])
till = int(sys.argv[2])
for i in range(1, int(sys.argv[2])+1):
    print("{} x {}\t= {}".format(x, i, x*i))
