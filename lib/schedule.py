from datetime import datetime
import lib.compose
import asyncio
import os
import yaml

cwd = os.getcwd()

async def runJobs():
    while True:
        for filename in os.listdir(cwd + "/config/stacks/"):
            # Check if it is a yaml file
            if filename.endswith(".yml") or filename.endswith(".yaml"):
                f = open(f"{cwd}/config/stacks/{filename}")
                stack = yaml.safe_load(f.read())
                f.close()

        # Check if the time in seconds is divisible by the interval (I had to add 1 for some reason)
        if datetime.now().time().second % (stack['updates']['interval'] + 1) == 0:
            lib.compose.update(stack, False)

        await asyncio.sleep(1)