import sys
from termcolor import colored, cprint
from datetime import datetime
import time

def log(string, color):
    now = datetime.now()
    cprint(f"{now.strftime('%Y/%m/%d %I:%M:%S')} | {string}", color)