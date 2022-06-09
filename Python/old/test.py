"""
name = input("Enter your name: ")
age = int(input("Enter your age= "))
print("Welcome " + name + " and your age is= " + str(age))
print(name * age)


x = 'spam'
print(x)

x += ' eggs'
print(x)

bill = int(input())
#your code goes here
print(bill * 20/100)
my_bool = True
print(my_bool)

print(2 == 3)
print('dj' == 'robin')
x=8
if x<10:
    print("true")

x=36
if x>30:
    print("X greater than 30")
    if x<40:
        print("x is smaller than 40")
i = 1
while i <= 5:
    print(i)
    i+=1
print("finished")
i=1

while i<=10:
    if i%2 == 0:
        print(str(i) + " is even number")
    else:
        print(str(i) + " is odd number")
    i+=1


i = 1
while i<10:
    print(i)
    i+=1
    if i==8:
        print("Breaking")
        break
print("finished")

name = ["Shajaratul","Yakin","Mihad"]
print(name[1])
name = [
            ["Shajaratul","Yakin","Mihad"],
            ["Rufeat","Rahik"]
        ]
print(name[0][2])

x = "Python"
print(x[1] + x[4])

num = [1,2,3]
print(num + [1,2,3])
print(num * 3)
name = ["Sy","Mihad","Rufeat","Rahik"]
print("Rahik" in name)

numb = [1,2,3,4,5]
print(not 7 in numb)
print(7 not in numb)

name = ["Sy","Mihad","Rufeat","Rahik"]
for word in name:
    print(word + "!")

string = "Hello, I'm lutfor lutinho"
count=0

for x in string:
    if x=='l':
        count+=1
print(count)


number = list(range(3,11))
print(number)

number = list(range(0,-20,-1))
print(number)

for i in range(5):
    print("Hello" + str(i))


squares = [0,1,4,9,16,25,36,49,64,81]
print(squares[2:6])
print(squares[0:1])
print(squares[:5])
print(squares[5:])
print(squares[::2])
print(squares[2:8:3])
print(squares[1:-2])
print(squares[::-1])

print(sum(x for x in range(1, int(input())+1)))


squares = [0,1,4,9,16,25,36,49,64,81]
stri = "I'm Mihad"
print(len(stri))

nums = [1,2,3]
nums.append(4)
print(nums)

words = ["Python","fun"]
index = 1
words.insert(index, "is")
print(words)

letters = ['p','q','r','s','p','u','z','a','s']
print(letters.index('r'))
print(max(letters))
print(min(letters))
print(letters.count('s'))
letters.remove('s')
letters.reverse()
print(letters)

nums = [4, 5, 6]
msg = "Numbers: {0} {2} {1}".format(nums[0], nums[1], nums[2])
print(msg)

a = "{x}, {y}".format(x=5, y=12)
print(a)


string = "Hello, I'm Mihad. I am a student"
#print(", ".join(string))
print(string.replace("Mihad", "Sy Mihad"))
print(string.startswith("Hello"))
print(string.endswith("nt"))
print(string.upper())
print(string.lower())
print(string.split(". "))

def my_func():
    print("Welcome ot my first function")
my_func()

def welcomeName(name):
    print("Welcome " + name)
welcomeName("Mihad")


text = input()
word = input()

def search(text, word):
    if word in text:
        return "Word found"
    else:
        return "Word not found"

print(search(text, word))

number = list(range(0,-20,-1))
print(number)


def add(x, y):
    return x + y

def do_twice(func, x, y):
    return func(x,y), func(x,y)

b = 10
a = 5
print(do_twice(add, a, b))

import random
value = []
for i in range(5):
    value.append(random.randint(1,6))
print(value)

from math import pi
print(pi)


num1 = 7
num2 = 0
print(num1/num2)

try:
    num1 = 7
    num2 = 0
    print(num1/num2)
    print("Done Calculation")
except ZeroDivisionError:
    print("An Error Occured")
    print("due to zero division")


try:
    variable = 10
    print(variable + "hello")
    print(variable / 2)
except ZeroDivisionError:
    print("Divided by Zero")
except (ValueError, TypeError):
    print("Error Occured")


try:
    word="spam"
    print(word/0)
except:
    print("An error occured")

try:
    print("Hello")
    print(1 / 0)
except ZeroDivisionError:
    print("divided by zero")
finally:
    print("This code will run no matter what")
print("end")

try:
    print(1)
    print(10 / 0)
except ZeroDivisionError:
    print(unknown_var)
finally:
    print("This is executed last")

print(1)
raise ValueError
print(2)


name = "123"
raise NameError("Invalid name!")


try:
    num = 5 / 0
except:
    print("An error occured")
    raise  


print(1)
assert 2 + 2 ==4
print(2)
assert 1 + 1 == 3
print(3)

temp = -10
assert (temp >= 0), "Colder than absolute zero!"

myfile = open("myFile.txt", "r")
content = myfile.read()
print(content)
myfile.close()


myfile = open("scott.txt", "r")
print(myfile.read(0))
for i in range(5):
    print(myfile.read(5))
myfile.close()


myfile = open("scott.txt", "r")
#stri = myfile.read()
#print("re-reading")
#print(myfile.read(10))
#print("Finished")
#print(len(stri))
#print(myfile.readlines())
for line in myfile:
    print(line)
myfile.close()

myfile = open("newfile.txt", "r")
print(myfile.read())
myfile.close()

myfile = open("newfile.txt", "w")
myfile.write("This has been written to a file")
myfile.close()

myfile = open("newfile.txt", "r")
print(myfile.read())
myfile.close()


msg = "Hello World!"
myfile = open("newfile.txt", "w")
amount_wrtten = myfile.write(msg)
print(amount_wrtten)
myfile.close()


try:
    f = open("newfile.txt")
    print(f.read())
finally:
    f.close()


with open("newfile.txt") as f:
    print(f.read())

f = open("scott.txt", "r")
print

def some_func():
    print("Hi")
var = some_func()
print(var)


ages = {"Dave": 24, "Mary": 42, "John": 58}
print(ages["Dave"])
print(ages["Mary"])

primary = {
    "red": [255,0,0],
    "green": [0,255,0],
    "blue": [0,0,255]
}

#print(primary["red"][1])
print(primary["yellow"])


bad_fict = {
    [1, 2, 3]: "one two three",
}


different_value = {
    1: 1,
    2: 2.2,
    3: "dj",
    4: 450,
}
different_value[8] = 64
different_value[4] = "four"
#print(different_value[2])
print(different_value)


nums = {
    1: "one",
    2: "two",
    3: "three",
}
print(1 in nums)
print("three" in nums)
print(4 in nums)


paris = {
    1: "apple",
    "orange" : [2, 3, 4],
    True: False,
    None: "True",
}

print(paris.get("orange"))
print(paris.get(7))
print(paris.get(12345, "not in dictionary"))
print(paris.get(True))
print(paris.get(None))


words = ("spam", "eggs", "sausages",)
print(words[1])
words[1] = "dj"


squares = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
#print(squares[2:6])
#print(squares[3:8])
#print(squares[0:1])
#print(squares[:7])
#print(squares[7:])
#print(squares[::2])
#print(squares[2:8:3])
print(squares[1:-1])
print(squares[::-1])


cubes = [i**3 for i in range(5)]
print(cubes)


evens = [i**2 for i in range(10) if i**2 % 2 == 0]
print(evens)


nums = [4, 5, 6]
msg = "Numbers: {0} {1} {2}". format(nums[0], nums[1], nums[2])
print(msg)5rt

a = "{x}, {y}".format(x=5, y=12)
print(a)

print(min(1, 2, 3, 4, 0, 2, 1))
print(max(1, 4, 9, 2, 5, 6, 8))
print(abs(-99))
print(abs(42))
print(sum([1, 2, 3, 4, 5]))


nums = [55, 44, 33, 22, 11]

if all(i > 5 for i in nums):
    print("All larger than 5")

if any(i % 2 == 0 for i in nums):
    print("At least one is even")

for v in enumerate(nums):
    print(v)


filename =input("Enter a file name: ")

with open(filename) as f:
    text = f.read()

print(text)
list_arr

def count_char(tex, ch):
    count = 0
    for c in tex:
        if c == ch:
            count += 1
    return count

filename = input("Enter filename: ")

with open(filename) as f:
    text = f.read()

#print(count_char(text, 'r'))

for char in "abcdefghijklmnopqrstuvwxyz":
  perc = 100 * count_char(text, char) / len(text)
  print("{0} - {1}%".format(char, round(perc, 2)))


nums = (55, 44, 33, 22)
print(max(min(nums[:2]), abs(-42)))


def apply_twice(func, arg):
    return func(func(arg))

def add_five(x):
    return x + 5

print(apply_twice(add_five, 10))


def my_func(f, arg):
    return f(arg)

print(my_func(lambda x: 2*x*x, 5))

def polynomial(x):
    return x**2 + 5*x + 4

print(polynomial(-4))

print((lambda x: x**2 + 5*x + 4) (-4))

double = lambda x: x * 2
print(double(7))


def add_five(x):
    return x + 5

nums = [11, 22, 33, 44, 55]
result = list(map(add_five, nums))
print(result)
result_labmda = list(map(lambda x: x + 5, nums))
print(result_labmda)

res = list(filter(lambda x: x%2==0, nums))
print(res)


def countdown():
    i=5
    while i > 0:
        yield i
        i -= 1

for i in countdown():
    print(i)


def numbers(x):
    for i in range(x):
        if i % 2 == 0:
            yield i

print(list(numbers(11)))


def decor(func):
    def wrap():
        print("=============")
        func()
        print("=============")
    return wrap

def print_text():
    print("Hello World")

decorated = decor(print_text)
decorated()

print_text = decor(print_text)

def decor(func):
    def wrap():
        print("=============")
        func()
        print("=============")
    return wrap

@decor
def print_text():
    print("Hello World")


def factorial(x):
    if x == 1:
        return 1
    else:
        return x * factorial(x-1)

print(factorial(5))



def is_even(x):
    if x == 0:
        return True
    else:
        return is_odd(x-1)

def is_odd(x):
    return not is_even(x)

print(is_odd(17))
print(is_even(23))

def fib(x):
  if x == 0 or x == 1:
    return 1
  else: 
    return fib(x-1) + fib(x-2)
print(fib(4))


num_set = {1, 2, 3, 4, 5}
word_set = set(["spam", "eggs", "sausage"])

print(3 in num_set)
print("spam" not in word_set)


nums = {1, 2, 1, 3, 1, 4, 5, 6}

print(nums)

nums.add(-7)
nums.remove(3)
print(nums)
nums.pop()
print(nums)
nums.pop()
print(nums)



first = {1, 2, 3, 4, 5, 6}
second = {4, 5, 6, 7, 8, 9}

print(first | second)
print(first & second)
print(first - second)
print(second - first)
print(first ^ second)


from itertools import count

for i in count(5):
    print(i)
    if i >=11:
        break



from itertools import accumulate, takewhile

nums = list(accumulate(range(8)))
print(nums)
print(list(takewhile(lambda x: x<=6, nums)))


from itertools import product, permutations

letters = ("A", "B")
print(list(product(letters, range(2))))
print(list(permutations(letter)))


n = int(input())

if n %2 == 0:
    if n>=2 and n<=5:
        print("Not Weird")
    elif n>=6 and n<=20:
        print("Weird")
    elif n>20:
        print("Not Weird")
else:
    print("Weird")


txt = "  banana    "

x = txt.strip()

print("of all fruits", x, "is my favorite")

txt = ",,,,,rrttgg.....banana....rrr"

x = txt.strip(",gr.t")

print(x)


txt = "hello, my name is Peter, I am 26 years old"

x = txt.split(", ")

print(x)

txt = "apple#banana#cherry#orange"

x = txt.split("#")

print(x)


a = input()
b = input()

if a>b:
    print(a)
else:
    print(b)

class Cat:
    def __init__(self, color, legs):
        self.color=color
        self.legs=legs

felix = Cat("ginger", 4)
rover = Cat("dog-coloured", 4)
print(felix.legs)

class Dog:
    leg = 4
    def __init__(self, name, breed):
        self.name=name
        self.breed=breed
    def bark(self):
        print("Woof! Woof!")

Muffin = Dog("Muffin", "Golden Retriver")
print(Muffin.breed)
Muffin.bark()

class Animal:
    legs = 4
    def __init__(self, colour, breed):
        self.colour=colour
        self.breed=breed


class Cat(Animal):
    def sayMeow(self):
        print("Meeoww")
    
    def info(self):
        print("Colour is "+ self.colour + "'s breed is " + self.breed ) 

class Dog(Animal):
    def bark(self):
        print("Woof! Woof!")


Golden = Dog("Golden", "Golden Retriver")
Snow = Cat("White", "Persian")
Snow.info()
Golden.bark()

print("\033[0;37;40m Normal text\n")
print("\033[2;37;40m Underlined text\033[0;37;40m \n")
print("\033[1;37;40m Bright Colour\033[0;37;40m \n")
print("\033[3;37;40m Negative Colour\033[0;37;40m \n")
print("\033[5;37;40m Negative Colour\033[0;37;40m\n")
 
print("\033[1;37;40m \033[2;37:40m TextColour BlackBackground          TextColour GreyBackground                WhiteText ColouredBackground\033[0;37;40m\n")
print("\033[1;30;40m Dark Gray      \033[0m 1;30;40m            \033[0;30;47m Black      \033[0m 0;30;47m               \033[0;37;41m Black      \033[0m 0;37;41m")
print("\033[1;31;40m Bright Red     \033[0m 1;31;40m            \033[0;31;47m Red        \033[0m 0;31;47m               \033[0;37;42m Black      \033[0m 0;37;42m")
print("\033[1;32;40m Bright Green   \033[0m 1;32;40m            \033[0;32;47m Green      \033[0m 0;32;47m               \033[0;37;43m Black      \033[0m 0;37;43m")
print("\033[1;33;40m Yellow         \033[0m 1;33;40m            \033[0;33;47m Brown      \033[0m 0;33;47m               \033[0;37;44m Black      \033[0m 0;37;44m")
print("\033[1;34;40m Bright Blue    \033[0m 1;34;40m            \033[0;34;47m Blue       \033[0m 0;34;47m               \033[0;37;45m Black      \033[0m 0;37;45m")
print("\033[1;35;40m Bright Magenta \033[0m 1;35;40m            \033[0;35;47m Magenta    \033[0m 0;35;47m               \033[0;37;46m Black      \033[0m 0;37;46m")
print("\033[1;36;40m Bright Cyan    \033[0m 1;36;40m            \033[0;36;47m Cyan       \033[0m 0;36;47m               \033[0;37;47m Black      \033[0m 0;37;47m")
print("\033[1;37;40m White          \033[0m 1;37;40m            \033[0;37;40m Light Grey \033[0m 0;37;40m               \033[0;37;48m Black      \033[0m 0;37;48m")

class A:
    def spam(self):
        print(1)

class B(A):
    def spam(self):
        super().spam()
        print(2)

B().spam()


class Queue:
    def __init__(self, contents):
        self._hiddenlist = list(contents)

    def push(self, value):
        self._hiddenlist.insert(0, value)
    
    def pop(self):
        self._hiddenlist.pop(-1)

    def __repr__(self):
        return "Queue({})".format(self._hiddenlist)


queue = Queue([1, 2, 3])
print(queue)
queue.push(0)
print(queue)
queue.pop()
print(queue)
print(queue._hiddenlist)


class Spam:
    __egg = 7
    def print_egg(self):
        print(self.__egg)


s = Spam()
s.print_egg()
print(s._Spam__egg)
print(s.__egg)


class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def calculate_area(self):
        return self.width * self.height

    @classmethod
    def new_squares(cls, side_length):
        return cls(side_length, side_length)


square = Rectangle.new_squares(5)
print(square.calculate_area())


class Pizza:
    def __init__(self, toppings):
        self.toppings = toppings

    @staticmethod
    def validate_topping(topping):
        if topping == "pinaple":
            raise ValueError("No, pinapples!")
        else:
            return True

ingredients = ["cheese", "onions", "spam"]
if all(Pizza.validate_topping(i) for i in ingredients):
    pizza = Pizza(ingredients)


class Pizza:
    def __init__(self, toppings):
        self.toppings = toppings
        self._pineapple_allowed = False

    @property
    def pineapple_allowed(self):
        return self._pineapple_allowed

    @pineapple_allowed.setter
    def pineapple_allowed(self, value):
        if value:
            password = input("Enter the password: ")
            if password == "SwordFish":
                self._pineapple_allowed = value
            else:
                raise ValueError("Alert! Intruder")

pizza = Pizza(["cheese", "tomatoo"])
print(pizza.pineapple_allowed)
pizza.pineapple_allowed = True
print(pizza._pineapple_allowed)

"""

def get_input():
    command = input(": ").split()
    verb_word = command[0]
    if verb_word in verb_dict:
        verb = verb_dict[verb_word]
    else:
        print("Unknown verb {}".format(verb_word))
        return

    if len(command) >= 2:
        noun_word = command[1]
        print(verb(noun_word))
    else:
        print(verb("nothing"))

def say(noun):
    return 'You said "{}"'.format(noun)

verb_dict = {
    "say": say,
}

while True:
    get_input()