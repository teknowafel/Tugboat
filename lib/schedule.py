import lib.compose
import schedule

# Function to schedule or reschedule the job for a stack
def schedule_interval(stack):
    # Remove the job if it is already there, if not do nothing
    try:
        schedule.clear(stack['appname'])
    except:
        pass

    # Add the job to update the stack with the interval proviced in the stack's config
    try:
        schedule.every(stack['updates']['interval']).seconds.do(lib.compose.update, stack=stack, force=False).tag(stack['appname'])
        return True
    except:
        return False