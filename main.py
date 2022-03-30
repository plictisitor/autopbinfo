from bs4 import BeautifulSoup as bs
import requests
import random
import string

# generate a random string of length n
def randString(length):
    return ''.join(random.choice(string.ascii_letters + string.digits) for _ in range(length))

# get the source code for a specified link and return it
def get_text(link):
    headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'}
    soup = bs(requests.get(link, headers=headers).text, "html.parser")
    obfuscator = "/* {} ily traian {} */ ".format(randString(9), randString(9))
    return obfuscator + soup.find("pre", {"class": "EnlighterJSRAW"}).text.replace("\n", obfuscator)

# get the next article link and return it
def getNext(link):
    headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'}
    soup = bs(requests.get(link, headers=headers).text, "html.parser")
    return soup.find("div", {"class": "prev-post-title next-post-title"}).parent.select_one(":nth-child(2)")["href"]

def getId(link):
    return link.split("-")[2]

toParse = "https://tutoriale-pe.net/problema-1424-smartphone-rezolvari-pbinfo/" # original start
counter = 1 # till 225 * 9

while 1:
    try:
        # scrape the source code and the id
        code = get_text(toParse)
        id_to_parse = getId(toParse)
    except:
        print("FAIL")

    # print the problem id and the number of lines to see if parsing is succesful 
    print("{}) #{} -> {} lines".format(counter, id_to_parse, code.count("traian")), end="")

    # write to file the scraped source code
    with open("problema/{}.cpp".format(id_to_parse), "w", encoding="utf-8") as f:
        f.write(code)
        print(" <-- wrote successfully")

    # get the next article
    try:
        toParse = getNext(toParse)
    except:
        print("Failed to get next link")

    counter += 1
    if counter > 225 * 9 or id == 999:
        break # there are no more problems