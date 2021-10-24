def isSymmetrical(str):
    length = len(str)
    mid = length // 2
    if length % 2:
        mid = length // 2+1
        return isSymmetrical(str[:mid-1] + str[mid:])

    return str[mid:] == str[:mid]


def isPalindrome(str):
    length = len(str)
    for i in range(length//2):
        if str[i] != str[length-1-i]:
            return False
    return True


while True:
    txt = input("Enter a string: ")
    
    if isSymmetrical(txt):
        print("The string is symmetrical")
    else:
        print("The string is not symmetrical")

    if isPalindrome(txt):
        print("The string is a palindrome")
    else:
        print("The string is not a palindrome")
