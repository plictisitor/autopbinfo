# autopbinfo

#### Automatically submit solutions extracted from https://tutoriale-pe.net/

### guide

- login to your pbinfo account
- insert the userscript located at [userscript.js](/userscript.js)
- if u use firefox, go to about:config and activate `dom.events.testing.asyncClipboard`
- run automate.py
- place your cursor somewhere in the browser so that clicking does nothing
- do not move and wait a lot
- wait a lil more
- boom now u look cool and smart

### really cool screenshot

![image](https://user-images.githubusercontent.com/65953368/160890388-d98ff4a8-9d3c-408c-b9ab-67d4426c71de.png)

### how it works

- automatically copies a solution to clipboard
- userscript executes the clipboard when the page loads

### libraries used

- pyautogui (for automating keyboard & mouse)
- requests (for making http requests (duh))
- pyperclip (for using ur clipboard)

#### known errors:

- some problems have the 403 page
- some of these solutions are trash and will not compile

big thanks to [the github copilot](https://copilot.github.com/). it made coding this really easy
