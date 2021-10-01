"""
python revPython.py

Reverse string or list in python
"""

def reverseit(lst):
    return lst[::-1]

if __name__ == "__main__":
    lst = [1,2,3]
    print(reverseit(lst))

    string = "redivider1"
    print(reverseit(string))