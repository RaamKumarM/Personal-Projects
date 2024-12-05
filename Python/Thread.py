from threading import *
import os
def abc():
    for i in range(5):
        print(i)
def xyz():
    for i in range(5,10):
        print(i)

thread1=Thread(target=abc)
thread2=Thread(target=xyz)

thread1.start()
thread2.start()

thread1.join()

print("End")