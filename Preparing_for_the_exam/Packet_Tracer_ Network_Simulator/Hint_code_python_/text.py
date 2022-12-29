from tkinter import *
root = Tk()
data_string = StringVar()
data_string.set("Hello World! But, Wait!!! You Can Select Me :)")
ent = Entry(root,textvariable=data_string,fg="black",bg="white",bd=0,state="readonly")
ent.pack()
root.mainloop()