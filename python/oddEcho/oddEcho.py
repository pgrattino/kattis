def main():
    userInt = int(input())
    for x in range(userInt):
        userString = input()
        if x % 2 == 0:
            print(userString)


if __name__ == "__main__":
    main()