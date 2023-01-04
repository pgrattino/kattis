def main():
    numOfIn = int(input())
    for x in range(numOfIn):
        userIn = int(input())
        if (abs(userIn) % 2 == 0):
            print(userIn, " is even")
        else:
            print(userIn, " is odd")

if __name__ == "__main__":
    main()