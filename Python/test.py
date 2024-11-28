import tkinter as tk
from tkinter import messagebox

def show_popup(remainder_name, remainder_time, remainder_date):
    popup = tk.Tk()
    popup.title("Remainder")

    label = tk.Label(popup, text=f"Remainder: {remainder_name}\nTime: {remainder_time}\nDate: {remainder_date}")
    label.pack(padx=20, pady=20)

    button = tk.Button(popup, text="OK", command=popup.destroy)
    button.pack(pady=10)

    popup.mainloop()

# Example usage:
remainder_name = "Buy groceries"
remainder_time = "10:00 AM"
remainder_date = "2024-11-28"

show_popup(remainder_name, remainder_time, remainder_date)