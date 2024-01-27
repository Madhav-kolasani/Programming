#....  {01}
''' PROJECT

#love canculator...

print("The Love Calculator is calculating your score...")
name1 = input() 
name2 = input() 
true_count =0
love_count =0
com_name = name1 + name2
# if(com_name or com_name in 'R' or com_name in 'U' or com_name in 'E'):
#   true_count +=1

# if(com_name in 'L' or com_name in 'O' or com_name in 'V' or com_name in 'E'):
#   love_count+=1
x = com_name.lower()
for i in x:
    if("l" in i):
        love_count+=1
    if("o" in i):
        love_count+=1
    if("v" in i):
        love_count+=1
    if("e" in i):
        love_count+=1
for i in x:
    if("t" in i):
        true_count+=1
    if("r" in i):
        true_count+=1
    if("u" in i):
        true_count+=1
    if("e" in i):
        true_count+=1
true_count = str(true_count)
love_count = str(love_count)
tot = int(true_count + love_count)
if(tot> 90):
  print(f"Your score is {tot}, you go together like coke and mentos.")
elif(tot>40 and tot<50):
  print(f"Your score is {tot}, you are alright together.")
else:
  print(f"Your score is {tot}.")

'''

#..{02}........................................................................................................

'''

#    TRESSURE FINDING 

print("""   Welcome to Tressure Island.
Your mission is to find the tressure""")
print("Type right are left to move into the game ->")
click = input()
click = click.lower()
if(click == "left"):
    print("Type Wait or Swim, think🤔 it before typing.")
    click = input()
    click = click.lower()
    if(click == "wait"):
        print("You are almost reached, Now choose these options i)Red, ii) Yellow, iii) blue.")
        click = input()
        click = click.lower()
        if(click == "yellow"):
            print("You Win🥳🍼. Take your tressure🪙")
        else:
            print("You lost pappu😐. Try you are almost there")
    else:
        print("You pappu 😄. It's not a lake or river to swim")
else:
    print("You fell into the hole😂")

'''

#....{03}......................................................................................................


# ROCK PAPER SCISSORS
'''
import random

rock = ("""
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
""")

paper = """
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
"""

scissor= """
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
"""

game_images = [rock, paper, scissor]

user_choice = int(input("Type {0} for rock, {1} for paper, {2} for sissor-> "))
if(user_choice >=3 and user_choice<=0):
    print("You entered invalid number")
print("You chose: ")
print(game_images[user_choice])
comp_choice = random.randint(0,2)
print("Computer chose: ")
print(game_images[comp_choice])
if(user_choice >=2 and user_choice<0):
    print("You entered invalid number")
elif(user_choice == 0 and comp_choice == 2):
    print("You win")
elif(comp_choice == 0 and user_choice == 2):
    print("You lose")
elif(user_choice > comp_choice):
    print("You won")
elif(comp_choice>user_choice):
    print("You lose")
elif(comp_choice == user_choice):
    print("It's draw")

'''

#.......{04}...................................................................................................


#CREATING OWN PASSWORD
'''
#Password Generator Project
import random
letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

print("Welcome to the PyPassword Generator!")
nr_letters = int(input("How many letters would you like in your password?\n")) 
nr_symbols = int(input(f"How many symbols would you like?\n"))
nr_numbers = int(input(f"How many numbers would you like?\n"))

# Eazy Level
# password = ""

# for char in range(1, nr_letters + 1):
#   password += random.choice(letters)

# for char in range(1, nr_symbols + 1):
#   password += random.choice(symbols)

# for char in range(1, nr_numbers + 1):
#   password += random.choice(numbers)

# print(password)

#Hard Level
password_list = []

for char in range(1, nr_letters + 1):
  password_list.append(random.choice(letters))

for char in range(1, nr_symbols + 1):
  password_list += random.choice(symbols)

for char in range(1, nr_numbers + 1):
  password_list += random.choice(numbers)

print(password_list)
random.shuffle(password_list) #it shuffles the total things. 
print(password_list)

password = ""
for char in password_list:
  password += char

print(f"Your password is: {password}")
'''

#....{05}...................................................................................................................

#Game hungman....


'''
import random

from hangman_words import word_list

chosen_word = random.choice(word_list)
word_length = len(chosen_word)

end_of_game = False
lives = 6

from hangman_art import logo
print(logo)

#Testing code
print(f'Pssst, the solution is {chosen_word}.')

#Create blanks
display = []
for _ in range(word_length):
    display += "_"

while not end_of_game:
    guess = input("Guess a letter: ").lower()

    if guess in display:
        print(f"You've already guessed {guess}")

    #Check guessed letter
    for position in range(word_length):
        letter = chosen_word[position]
        #print(f"Current position: {position}\n Current letter: {letter}\n Guessed letter: {guess}")
        if letter == guess:
            display[position] = letter

    #Check if user is wrong.
    if guess not in chosen_word:
        #TODO-5: - If the letter is not in the chosen_word, print out the letter and let them know it's not in the word.
        print(f"You guessed {guess}, that's not in the word. You lose a life.")
        
        lives -= 1
        if lives == 0:
            end_of_game = True
            print("You lose.")

    #Join all the elements in the list and turn it into a String.
    print(f"{' '.join(display)}")

    #Check if user has got all letters.
    if "_" not in display:
        end_of_game = True
        print("You win.")

    #TODO-2: - Import the stages from hangman_art.py and make this error go away.
    from hangman_art import stages
    print(stages[lives])
'''

#....{06}.......................................................................................................................
'''
logo = """           
 ,adPPYba, ,adPPYYba,  ,adPPYba, ,adPPYba, ,adPPYYba, 8b,dPPYba,  
a8"     "" ""     `Y8 a8P_____88 I8[    "" ""     `Y8 88P'   "Y8  
8b         ,adPPPPP88 8PP"""""""  `"Y8ba,  ,adPPPPP88 88          
"8a,   ,aa 88,    ,88 "8b,   ,aa aa    ]8I 88,    ,88 88          
 `"Ybbd8"' `"8bbdP"Y8  `"Ybbd8"' `"YbbdP"' `"8bbdP"Y8 88   
            88             88                                 
           ""             88                                 
                          88                                 
 ,adPPYba, 88 8b,dPPYba,  88,dPPYba,   ,adPPYba, 8b,dPPYba,  
a8"     "" 88 88P'    "8a 88P'    "8a a8P_____88 88P'   "Y8  
8b         88 88       d8 88       88 8PP""""""" 88          
"8a,   ,aa 88 88b,   ,a8" 88       88 "8b,   ,aa 88          
 `"Ybbd8"' 88 88`YbbdP"'  88       88  `"Ybbd8"' 88          
              88                                             
              88           
"""
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def caesar(start_text, shift_amount, cipher_direction):
  end_text = ""
  if cipher_direction == "decode":
    shift_amount *= -1
  for char in start_text:

    if char in alphabet:
      position = alphabet.index(char)
      new_position = position + shift_amount
      end_text += alphabet[new_position]
    else:
      end_text += char
  print(f"Here's the {cipher_direction}d result: {end_text}")

print(logo)

should_end = False
while not should_end:

  direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
  text = input("Type your message:\n").lower()
  shift = int(input("Type the shift number:\n"))

  shift = shift % 26

  caesar(start_text=text, shift_amount=shift, cipher_direction=direction)

  restart = input("Type 'yes' if you want to go again. Otherwise type 'no'.\n")
  if restart == "no":
    should_end = True
    print("Goodbye")
    
'''

#....{07}.......................................................................................................................
logo = '''
                         ___________
                         \         /
                          )_______(
                          |"""""""|_.-._,.---------.,_.-._
                          |       | | |               | | ''-.
                          |       |_| |_             _| |_..-'
                          |_______| '-' `'---------'` '-'
                          )"""""""(
                         /_________\\
                       .-------------.
                      /_______________\\
'''
print(logo)
bids = {}
bidding_finished = False
def find_highest_bidder(bidding_record):
    for bidder in bidding_record:
        highest_bid = 0
        bid_amount=bidding_record[bidder]
        if(bid_amount>highest_bid):
            highest_bid = bid_amount
            winner = bidder
    print(f"The winner is {winner} with a bid of ${highest_bid}")
while not bidding_finished:
    name = input("What is your name: ")
    price = int(input("what is your bid price $: "))
    bids[name] = price
    should_continue= input("Are the any other bidder? Type 'Yes or 'No' ").lower()
    if(should_continue == "no"):
        bidding_finished = True
        find_highest_bidder(bids)
    elif should_continue== "yes":
        # clear()
        print()
