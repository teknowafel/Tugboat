import lib.compose

# Function to schedule or reschedule the job for a stack
def schedule_interval(stack, scheduler):
    # Remove the job if it is already there, if not do nothing
    try:
        scheduler.remove_job(stack['appname'])
    except:
        pass

    # Add the job to update the stack with the interval proviced in the stack's config
    try:
        scheduler.add_job(lambda: lib.compose.update(stack, False), 'interval', seconds = stack['updates']['interval'], id = stack['appname'])
        return True
    except:
        return False