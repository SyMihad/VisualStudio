from tkinter import *

window=Tk()

def km_to_miles():
    miles = float(e1_value.get())*1.6
    t1.insert(END, str(miles)+"miles")

b1 = Button(window, text="Execute", command=km_to_miles)
b1.grid(column=1, row=1)

e1_value =  StringVar()
e1 = Entry(window, textvariable=e1_value)
e1.grid(column=2, row=1)

t1= Text(window, height=1, width=20)
t1.grid(column=3, row=1)

window.mainloop()