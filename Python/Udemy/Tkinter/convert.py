from tkinter import *

window = Tk()
window['background']='#69A8A2'

def convert():
    grams = float(e1_value.get())*1000
    pounds = float(e1_value.get())*2.20462
    ounces = float(e1_value.get())*35.274
    t1.insert(END, grams)
    t2.insert(END, pounds)
    t3.insert(END, ounces)

e1_value = StringVar()
e1 = Entry(window, textvariable=e1_value, background='#69A8A2')
e1.grid(row=1, column=0)

b1 = Button(window, text="Convert",command=convert)
b1.grid(row=1, column=1)

t1 = Text(window, height=2, width=20)
t1.grid(row=0, column=2)
t2 = Text(window, height=2, width=20)
t2.grid(row=1, column=2)
t3 = Text(window, height=2, width=20)
t3.grid(row=2, column=2)

window.mainloop()