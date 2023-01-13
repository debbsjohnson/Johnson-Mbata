print("Welcome to my computer quiz!")

playing = input("do you want to play?: ")

if playing.lower() != "yes":
    quit()
print("okay let's play :)")
score = 0

answer = input("what does cpu stand for? ")
if answer.lower() == "central processing unit":
    print("correct!")
    score += 1
else:
    print("incorrect!")

answer = input("what does gpu stand for? ")
if answer.lower() == "graphics processing unit":
    print("correct!")
    score += 1
else:
    print("incorrect!")

answer = input("what does RAM stand for? ")
if answer.lower() == "random access memory":
    print("correct!")
    score += 1
else:
    print("incorrect!")

answer = input("what does PSU stand for? ")
if answer.lower() == "power supply unit":
    print("correct!")
    score += 1
else:
    print("incorrect!")

print("you got " + str(score) + " questions correct")
print("you got " + str((score / 4) * 100) + "%")