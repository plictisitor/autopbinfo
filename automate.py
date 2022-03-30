import pyperclip
import os
import time
import webbrowser
import pyautogui

# a function that copies x to clipboard
def copy(x):
    pyperclip.copy(x)

# copy to clipboard the contents of a file f
def copy_file(f):
    with open(f, "r", encoding = "utf-8") as f:
        code = f.read()
        if "ifstream cin(" in code: # fix ambiguous cin usage in C++ code 
            code = code.replace("#include <iostream>", "// #include <iostream>")
        copy(code)
        return code

# get clipboard
def get_clipboard():
    return pyperclip.paste()

counter = 1
skipto = 0 # 237

for file in os.listdir("./probleme _ no bits/"): # for each file in the folder
    copied = copy_file("./probleme _ no bits/" + file) # copy to clipboard
    problem_id = file.split(".")[0] # get problem id
    print("{})\t-> copied {}".format(counter, problem_id)) # print the problem id

    if counter < skipto:
        counter += 1
        continue

    # open the browser and paste the code (using the userscript)
    time.sleep(0.2)
    url = "https://www.pbinfo.ro/?pagina=probleme&id={}".format(problem_id)
    webbrowser.open(url, new=0, autoraise=True)

    time.sleep(2) # wait for page to load (2 seconds)
    pyautogui.click()    

    while get_clipboard() == copied:
        time.sleep(1) # wait till program is executed
    
    print(chr(7), end=">") # bell
    print("--> execution: {}".format(get_clipboard())) # print execution details

    # delay so we dont overload the server with requests
    time.sleep(9)

    # closes the tab
    pyautogui.keyDown('ctrl')
    pyautogui.press('w')
    pyautogui.keyUp('ctrl')

    counter += 1