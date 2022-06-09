import json
from difflib import get_close_matches

data = json.load(open("data.json"))

def translate(w):
    w = w.lower()
    if w in data:
        return data[w]
    elif len(get_close_matches(w, data.keys()))>0:
        yn = input("Did you mean %s instead?(y/n)" %get_close_matches(w, data.keys())[0])
        if yn == 'y':
            return data[get_close_matches(w, data.keys())[0]]
        else:
            return "We didn't understand your entry"
    else:
        print("Word doesn't exists.")

myInput = input("Enter your word: ")

output = (translate(myInput))
print("\n")
if type(output) == list:
    for i in output:
        print(i)
else:
    print(output)
print("\n")