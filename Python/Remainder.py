import datetime
import time
import os
import schedule
import tkinter as tk
from tkinter import messagebox

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def display_menu():
    clear_screen()
    print("Reminder App")
    print("0. Continue(Default)")
    print("1. Set Reminder")
    print("2. View Reminders")
    print("3. Exit")

def set_reminder():
    clear_screen()
    reminder_name = input("Enter reminder name: ")
    if (reminder_name==0):
        return
    reminder_time = input("Enter reminder time (HH:MM): ")
    reminder_date = input("Enter reminder date (YYYY-MM-DD): ")
    
    # Save the reminder to a file
    with open("reminders.txt", "a") as file:
        file.write(f"{reminder_name}:{reminder_time}:{reminder_date}\n")
    
    print("Reminder set successfully!")

def view_reminders():
    clear_screen()
    try:
        with open("reminders.txt", "r") as file:
            reminders = file.readlines()
            for reminder in reminders:
                values = reminder.strip().split(":")
                reminder_name = values[0]
                reminder_time = values[1]
                reminder_date = ":".join(values[2:])
                
                print(f"Reminder: {reminder_name}")
                print(f"Time: {reminder_time}")
                print(f"Date: {reminder_date}")
                print("------------------------")
    except FileNotFoundError:
        print("No reminders set!")
    input()

def show_popup(remainder_name, remainder_time, remainder_date):
    popup = tk.Tk()
    popup.title("Remainder")

    # Get the screen width and height
    screen_width = popup.winfo_screenwidth()
    screen_height = popup.winfo_screenheight()

    # Set the width and height of the popup window
    popup_width = 400
    popup_height = 200

    # Calculate the x and y coordinates of the popup window
    x = (screen_width - popup_width) // 2
    y = (screen_height - popup_height) // 2

    # Set the position of the popup window
    popup.geometry(f"{popup_width}x{popup_height}+{x}+{y}")

    # Set the popup window to be on top
    popup.attributes("-topmost", True)

    label = tk.Label(popup, text=f"Remainder: {remainder_name}\nTime: {remainder_time}\nDate: {remainder_date}", font=("Arial", 16))
    label.pack(padx=20, pady=20)
    button = tk.Button(popup, text="OK", command=popup.destroy, font=("Arial", 14))
    button.pack(pady=10)
    popup.mainloop()

def check_reminders():
    try:
        with open("reminders.txt", "r") as file:
            reminders = file.readlines()
            current_time = datetime.datetime.now().strftime("%H:%M")
            current_date = datetime.datetime.now().strftime("%Y-%m-%d")
            for reminder in reminders:
                values = reminder.strip().split(":")
                reminder_name = values[0]
                reminder_time = values[1]
                reminder_date = ":".join(values[2:])
                
                if reminder_time == current_time and reminder_date == current_date:
                    show_popup(reminder_name, reminder_time, reminder_date)
    except FileNotFoundError:
        pass


while True:
    display_menu()
    choice = input("Enter your choice: ")
    
    if choice == "1":
        set_reminder()
        continue
    elif choice == "2":
        view_reminders()
        continue
    elif choice == "3":
        break
    elif choice == "0":
        pass 
    elif choice == "9":
        show_popup("Test", datetime.datetime.now().strftime("%H:%M"), datetime.datetime.now().strftime("%Y-%m-%d"))
        continue
    else:
        print("Invalid choice. Please try again.")
        continue
    
    schedule.every(1).minutes.do(check_reminders)  # Run every 1 minute
    check_reminders()