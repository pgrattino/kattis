def main():
    line = input()
    a, b = line.split()
    a = int(a)
    b = int(b)
    if a < b:
        print (a, b)
    else :
        print (b, a)

if __name__ == "__main__":
    main()