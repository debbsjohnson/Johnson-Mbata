import tkinter as tk
from tkinter import filedialog, Text
import os

toot = tk.Tk()

canvas = tk.Canvas(toot, height=700, width=700, bg="#263D42")
canvas.pack()

toot.title("GUI")

thelabel = tk.Label(toot,text= "this is too easy",fg="white",bg="white",width=10,height=10)
toot.configure(bg='white')


frame = tk.Frame(toot, bg="white")
frame.place(relwidth=0.8,relheight=0.8, relx=0.1, rely=0.1)

toot.mainloop()

