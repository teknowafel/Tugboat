import sys
from termcolor import colored, cprint
from datetime import datetime
import time

def log(string, color):
    # Get the current date and time
    now = datetime.now()
    # Use the color and string passed to print a stylized string with color and the date and time
    cprint(f"{now.strftime('%Y/%m/%d %I:%M:%S')} | {string}", color)