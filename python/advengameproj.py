name = input("enter your name: ")
print("Welcome", name, "to this adventure!")

answer =input("you are on a dirt road,it has come to an end, you can go left or right. which way will you like to go? ").lower()

if answer == "left":
    ans = input("you've come to a river. you can walk around it or swim across? type walk to walk around or swim to swim across: ")
    
    if ans == "swim":
        print("you swam across and were eaten by an alligator")
    elif ans == "walk":
        print("you walked for many miles,ran out of water and you lost the game")
    else:
            print("Not valid option. You lose.")
        
        
elif answer == "right":
    anss = input("you've come to a bridge, it looks wobbly, do you want to cross it or head back(cross/back)")
         
    if anss == "back":
         print("you go back and lose")
    elif anss == "cross":
        pint = input("you crossed th bridge and meet a stranger, do you talk to them? ")
        
        if pint == "yes":
            print("you talk to the stranger and they give you gold. you WIN!")
            
        elif pint == "no":
            print("you ignore the stranger and they are offended and you lose")
    
    else:
        print("Not valid option. You lose.")
        
else:
    print("Not valid option. You lose.")
    
print("thank you for trying")