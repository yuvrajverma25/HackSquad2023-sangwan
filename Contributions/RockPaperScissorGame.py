import random

def Game(Computer,You):
      if Computer==You:
          return None
      elif Computer=='r':
          if You=='p':
              return True
          elif You=='s':
              return False
      elif Computer == 's':
          if You == 'p':
              return False
          elif You == 'r':
              return True
      elif Computer == 'p':
          if You == 'r':
              return False
          elif You == 's':
              return True


print("Computer Turn: Rock(r) Paper(p) or Scissors(s)?")
randoNo=random.randint(1,3)
if randoNo==1:
    Computer='r'
elif randoNo==2:
    Computer='p'
elif randoNo==3:
    Computer='s'    


You = input("Your Turn: Rock(r) Paper(p) or Scissors(s)?: ")
print(f"Computer choice: {Computer}")
print(f"Your choice: {You}")

a=Game(Computer,You)   
if a==None:
    print("Tie!")
elif a:
    print("You Win")
else:
    print("You Lose")        

