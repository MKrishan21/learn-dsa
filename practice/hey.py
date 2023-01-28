import pyautogui as pg
import time

print("start")
time.sleep(10)

for i in range(10):
    pg.write('Hey')
    pg.press('Enter')