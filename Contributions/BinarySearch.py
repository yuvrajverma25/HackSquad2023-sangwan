def BinarySearch(item):
    a = [11,20,33,59,66,98,132]
    first = 0
    last = len(a)-1
    found = False

    while first<=last and not found:
        mid = int(first + last/2)
        if a[mid] == item:
            found = True
        else:
            if item<a[mid]:
                last = mid-1
            else:
                first = mid+1
    print(found)


if __name__ == "__main__":
    key = int(input("Enter the search value:- "))
    BinarySearch(key)