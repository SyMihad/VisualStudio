def customizeInput(phrase):
    interrogatives=("how", "what", "when")
    capitalized = phrase.capitalize()
    if phrase.startswith(interrogatives):
        return "{}?".format(capitalized)
    else:
        return "{}.".format(capitalized)

inputList = []
while True:
    x=input("Say Something: ")
    if x == "\end":
        break
    else:
        inputList.append(customizeInput(x))

print(" ".join(inputList))

