# *************************** GUESS THE NUMBER *************************

n=50                # the number that is to be guessed by user
guess=1
while(True):
    if(guess>9):     #user can make 9 guesses
        print("you loss!\nNo guesses left\nGAME OVER")
        break
    num= int(input('Guess the number:'))

    if(num==n):
        print("congratulations, You Won!\nyou guess in",guess," guesses\n")
        break

    elif(num<n):
        print("Try again! \nEnter number greater than",num)
        print("you have",9-guess,"more guesses\n")
        guess+=1

    elif(num>n):
        print("Try again! \nEnter number lesser than",num)
        print("you have",9-guess,"more guesses\n")
        guess+=1